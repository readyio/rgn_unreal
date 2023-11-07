#pragma once

#include "CoreMinimal.h"
#include "../../Core/CancellationToken.h"
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

	static void ConvertToUnrealModel(const CancellationToken& source, FBP_CancellationToken& target) {
		auto ph = const_cast<CancellationToken&>(source).GetHandlePtr();
		target.SetHandlePtr(ph);
	}

	static void ConvertToCoreModel(const FBP_CancellationToken& source, CancellationToken& target) {
		auto ph = const_cast<FBP_CancellationToken&>(source).GetHandlePtr();
		target.SetHandlePtr(ph);
	}
};