#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../../../Generated/RGN/Model/TimeInfo.h"
#include <string>
#include <vector>
#include <unordered_map>
#include "BP_TimeInfo.generated.h"

/**
 * Represents the time information.
 * This information can be used for time-limited entities.
 */
USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_TimeInfo {
    GENERATED_BODY()

    /**
     * Indicates whether a start time is specified.
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | TimeInfo")
    bool hasStart;
    /**
     * The start time. This field is relevant only if F:RGN.Model.TimeInfo.hasStart is true.
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | TimeInfo")
    int64 start;
    /**
     * Indicates whether an end time is specified.
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | TimeInfo")
    bool hasEnd;
    /**
     * The end time. This field is relevant only if F:RGN.Model.TimeInfo.hasEnd is true.
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | TimeInfo")
    int64 end;
    /**
     * Indicates whether an interval is specified.
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | TimeInfo")
    bool hasInterval;
    /**
     * The interval duration. This field is relevant only if F:RGN.Model.TimeInfo.hasInterval is true.
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | TimeInfo")
    int64 intervalDuration;
    /**
     * The interval delay. This field is relevant only if F:RGN.Model.TimeInfo.hasInterval is true.
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | TimeInfo")
    int64 intervalDelay;
    /**
     * Indicates whether a promo is specified.
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | TimeInfo")
    bool hasPromo;
    /**
     * The promo duration in milliseconds before the start time.
     * This field is relevant only if F:RGN.Model.TimeInfo.hasPromo and F:RGN.Model.TimeInfo.hasStart are true.
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | TimeInfo")
    int64 promo;
    /**
     * Indicates whether a grace is specified.
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | TimeInfo")
    bool hasGrace;
    /**
     * The grace duration in milliseconds after the end time.
     * This field is relevant only if F:RGN.Model.TimeInfo.hasGrace and F:RGN.Model.TimeInfo.hasEnd are true.
     */
    UPROPERTY(BlueprintReadWrite, Category = "ReadyGamesNetwork | TimeInfo")
    int64 grace;

	static void ConvertToUnrealModel(const RGN::Model::TimeInfo& source, FBP_TimeInfo& target) {
        target.hasStart = source.hasStart;
        target.start = source.start;
        target.hasEnd = source.hasEnd;
        target.end = source.end;
        target.hasInterval = source.hasInterval;
        target.intervalDuration = source.intervalDuration;
        target.intervalDelay = source.intervalDelay;
        target.hasPromo = source.hasPromo;
        target.promo = source.promo;
        target.hasGrace = source.hasGrace;
        target.grace = source.grace;
	}

	static void ConvertToCoreModel(const FBP_TimeInfo& source, RGN::Model::TimeInfo& target) {
        target.hasStart = source.hasStart;
        target.start = source.start;
        target.hasEnd = source.hasEnd;
        target.end = source.end;
        target.hasInterval = source.hasInterval;
        target.intervalDuration = source.intervalDuration;
        target.intervalDelay = source.intervalDelay;
        target.hasPromo = source.hasPromo;
        target.promo = source.promo;
        target.hasGrace = source.hasGrace;
        target.grace = source.grace;
	}
};
