#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../../../../Generated/RGN/Modules/Store/TimeInfo.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "BP_TimeInfo.generated.h"

/**
 * Represents the time information related to an offer in the store.
 * This information can be used for time-limited offers.
 */
USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_TimeInfo {
    GENERATED_BODY()

    /**
     * Indicates whether a start time is specified.
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Store")
    bool hasStart;
    /**
     * The start time. This field is relevant only if F:RGN.Modules.Store.TimeInfo.hasStart is true.
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Store")
    int64 start;
    /**
     * Indicates whether an end time is specified.
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Store")
    bool hasEnd;
    /**
     * The end time. This field is relevant only if F:RGN.Modules.Store.TimeInfo.hasEnd is true.
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Store")
    int64 end;
    /**
     * Indicates whether an interval is specified.
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Store")
    bool hasInterval;
    /**
     * The interval duration. This field is relevant only if F:RGN.Modules.Store.TimeInfo.hasInterval is true.
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Store")
    int64 intervalDuration;
    /**
     * The interval delay. This field is relevant only if F:RGN.Modules.Store.TimeInfo.hasInterval is true.
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | Store")
    int64 intervalDelay;

	static void ConvertToUnrealModel(const RGN::Modules::Store::TimeInfo& source, FBP_TimeInfo& target) {
        target.hasStart = source.hasStart;
        target.start = source.start;
        target.hasEnd = source.hasEnd;
        target.end = source.end;
        target.hasInterval = source.hasInterval;
        target.intervalDuration = source.intervalDuration;
        target.intervalDelay = source.intervalDelay;
	}

	static void ConvertToCoreModel(const FBP_TimeInfo& source, RGN::Modules::Store::TimeInfo& target) {
        target.hasStart = source.hasStart;
        target.start = source.start;
        target.hasEnd = source.hasEnd;
        target.end = source.end;
        target.hasInterval = source.hasInterval;
        target.intervalDuration = source.intervalDuration;
        target.intervalDelay = source.intervalDelay;
	}
};
