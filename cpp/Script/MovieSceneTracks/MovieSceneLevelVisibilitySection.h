// /Script/MovieSceneTracks.MovieSceneLevelVisibilitySection
// Derives from: UMovieSceneSection > UMovieSceneSignedObject > UObject
// size 0x108, declared in Engine/Source/Runtime/MovieSceneTracks/Public/Sections/MovieSceneLevelVisibilitySection.h

UCLASS()
class UMovieSceneLevelVisibilitySection : public UMovieSceneSection, public IMovieSceneEntityProvider
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY(EditAnywhere) ELevelVisibility Visibility;  // 0x00F0, size 0x1
    UPROPERTY(EditAnywhere) TArray<FName> LevelNames;  // 0x00F8, size 0x10
public:
    UFUNCTION(BlueprintCallable, BlueprintPure) TArray<FName> GetLevelNames() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) ELevelVisibility GetVisibility() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetLevelNames(const TArray<FName>& InLevelNames);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetVisibility(ELevelVisibility InVisibility);  // parameters 0x1
};
