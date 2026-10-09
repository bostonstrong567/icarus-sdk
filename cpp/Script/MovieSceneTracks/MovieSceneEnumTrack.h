// /Script/MovieSceneTracks.MovieSceneEnumTrack
// Derives from: UMovieScenePropertyTrack > UMovieSceneNameableTrack > UMovieSceneTrack > UMovieSceneSignedObject > UObject
// size 0xC8, declared in Engine/Source/Runtime/MovieSceneTracks/Public/Tracks/MovieSceneEnumTrack.h

UCLASS()
class UMovieSceneEnumTrack : public UMovieScenePropertyTrack
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY() UEnum* Enum;  // 0x00C0, size 0x8
};
