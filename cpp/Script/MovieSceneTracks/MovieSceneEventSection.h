// /Script/MovieSceneTracks.MovieSceneEventSection
// Derives from: UMovieSceneSection > UMovieSceneSignedObject > UObject
// size 0x1E8, declared in Engine/Source/Runtime/MovieSceneTracks/Public/Sections/MovieSceneEventSection.h

UCLASS(MinimalAPI)
class UMovieSceneEventSection : public UMovieSceneSection
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY(Deprecated) FNameCurve Events;  // 0x00E8, size 0x78
    UPROPERTY() FMovieSceneEventSectionData EventData;  // 0x0160, size 0x88
};
