#pragma once
// This file is generated: please don't modify. Go to Unity code generator if you need changes.
#include "CoreMinimal.h"
#include "../../../../../Generated/RGN/Modules/Leaderboard/LeaderboardEntry.h"
#include "../../../../../Generated/RGN/Modules/UserProfile/UserProfilePicture.h"
#include "../UserProfile/BP_UserProfilePicture.h"
#include <string>
#include <vector>
#include <unordered_map>
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

	static void ConvertToUnrealModel(const RGN::Modules::Leaderboard::LeaderboardEntry& source, FBP_LeaderboardEntry& target) {
		target.userId = FString(source.userId.c_str());
		target.displayName = FString(source.displayName.c_str());
		FBP_UserProfilePicture::ConvertToUnrealModel(source.profilePicture, target.profilePicture);
		target.score = source.score;
		target.formattedScore = FString(source.formattedScore.c_str());
		target.place = source.place;
		target.extraData = FString(source.extraData.c_str());
	}

	static void ConvertToCoreModel(const FBP_LeaderboardEntry& source, RGN::Modules::Leaderboard::LeaderboardEntry& target) {
		target.userId = string(TCHAR_TO_UTF8(*source.userId));
		target.displayName = string(TCHAR_TO_UTF8(*source.displayName));
		FBP_UserProfilePicture::ConvertToCoreModel(source.profilePicture, target.profilePicture);
		target.score = source.score;
		target.formattedScore = string(TCHAR_TO_UTF8(*source.formattedScore));
		target.place = source.place;
		target.extraData = string(TCHAR_TO_UTF8(*source.extraData));
	}
};
