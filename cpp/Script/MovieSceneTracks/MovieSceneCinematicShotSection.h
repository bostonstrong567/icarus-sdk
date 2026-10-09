// /Script/MovieSceneTracks.MovieSceneCinematicShotSection
// Derives from: UMovieSceneSubSection > UMovieSceneSection > UMovieSceneSignedObject > UObject
// size 0x190, declared in Engine/Source/Runtime/MovieSceneTracks/Public/Sections/MovieSceneCinematicShotSection.h

UCLASS(Config=EditorPerProjectUserSettings)
class UMovieSceneCinematicShotSection : public UMovieSceneSubSection
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY() FString ShotDisplayName;  // 0x0168, size 0x10
    UPROPERTY(Deprecated) FText DisplayName;  // 0x0178, size 0x18
public:
    UFUNCTION(BlueprintCallable, BlueprintPure) FString GetShotDisplayName() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetShotDisplayName(FString InShotDisplayName);  // parameters 0x10
};
