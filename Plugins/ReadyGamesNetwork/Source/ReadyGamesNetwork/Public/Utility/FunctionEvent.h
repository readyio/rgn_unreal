#pragma once

#include <map>
#include <functional>

namespace RGN { namespace Utility {
    template<typename Signature>
    class FunctionEvent;

    template<typename ReturnType, typename... Args>
    class FunctionEvent<ReturnType(Args...)> {
    private:
        class FunctionDelegate {
        private:
            std::function<ReturnType(Args...)> _function;

        public:
            FunctionDelegate() : _function(nullptr) {}

            FunctionDelegate(std::function<ReturnType(Args...)> function)
                : _function(function) {}

            ReturnType operator()(Args... args) const {
                if (_function) {
                    return _function(std::forward<Args>(args)...);
                }
                return ReturnType();
            }
        };

    public:
        class Ref {
        public:
            int id;
            Ref(int id) : id(id) {}
        };

    private:
        int id_counter = 0;
        std::map<int, FunctionDelegate> callbacks;

    public:
        bool hasBindings() const {
            return !callbacks.empty();
        }

        Ref bind(std::function<ReturnType(Args...)> callback) {
            callbacks[id_counter] = callback;
            return Ref(id_counter++);
        }

        void unbind(const Ref& ref) {
            callbacks.erase(ref.id);
        }

        void unbind_all() {
            callbacks.clear();
            id_counter = 0;
        }

        void raise(Args... args) {
            for (const auto& pair : callbacks) {
                pair.second(args...);
            }
        }

        void raise_and_unbind(Args... args) {
            raise(args...);
            unbind_all();
        }
    };
}}