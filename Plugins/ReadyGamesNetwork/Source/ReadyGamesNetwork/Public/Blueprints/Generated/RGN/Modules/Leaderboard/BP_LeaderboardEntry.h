#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../UserProfile/BP_UserProfilePicture.h"
#include "BP_LeaderboardEntry.generated.h"

/**
 * A class that represents an entry in the leaderboard.
 * This class serves as a Data Transfer Object (DTO) that contains details about a user's entry in the leaderboard.
 */
USTRUCT(BlueprintType)
struct READYGAMESNETWORK_API FBP_LeaderboardEntry {
    GENERATED_BODY()

    /**
     * Gets the unique identifier of the user.
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Leaderboard")
    FString userId;
    /**
     * Gets the displayed name of the user.
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Leaderboard")
    FString displayName;
    /**
     * Gets the url of user profile picture.
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Leaderboard")
    FBP_UserProfilePicture profilePicture;
    /**
     * Gets the score of the user.
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Leaderboard")
    int32 score;
    /**
     * Gets the score of the user formatted as a string.
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Leaderboard")
    FString formattedScore;
    /**
     * Gets or sets the rank or place of the user on the leaderboard.
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Leaderboard")
    int32 place;
    /**
     * Gets or sets the extra data associated with the user's score entry.
     */
    UPROPERTY(BlueprintReadOnly, Category = "ReadyGamesNetwork | Leaderboard")
    FString extraData;
};
