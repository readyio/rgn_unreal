#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "../../../../../Generated/RGN/Modules/DynamicLinks/DynamicLinksModule.h"
#include <vector>
#include <unordered_map>
#include <string>
#include <functional>
#include "BP_DynamicLinksModule.generated.h"

using namespace std;

DECLARE_DYNAMIC_DELEGATE_TwoParams(FDynamicLinksModuleFailResponse, int32, code, const FString&, message);


UCLASS()
class READYGAMESNETWORK_API UBP_DynamicLinksModule : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
};
