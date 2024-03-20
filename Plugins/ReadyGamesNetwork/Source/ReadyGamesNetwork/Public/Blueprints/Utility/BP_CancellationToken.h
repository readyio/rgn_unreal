#pragma once

#include "CoreMinimal.h"
#include "../../Utility/CancellationToken.h"
#include "BP_CancellationToken.generated.h"

USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_CancellationToken
{
    GENERATED_BODY()

private:
	const bool* phandle;

public:
	void SetHandlePtr(const bool* nphandle) {
		phandle = nphandle;
	}

	const bool* GetHandlePtr() {
		return phandle;
	}

	bool IsCancellationRequested() const {
		if (phandle != nullptr) {
			return *phandle;
		}
		return false;
	}

	static void ConvertToUnrealModel(const RGN::CancellationToken& source, FBP_CancellationToken& target) {
		auto ph = const_cast<RGN::CancellationToken&>(source).GetHandlePtr();
		target.SetHandlePtr(ph);
	}

	static void ConvertToCoreModel(const FBP_CancellationToken& source, RGN::CancellationToken& target) {
		auto ph = const_cast<FBP_CancellationToken&>(source).GetHandlePtr();
		target.SetHandlePtr(ph);
	}
};