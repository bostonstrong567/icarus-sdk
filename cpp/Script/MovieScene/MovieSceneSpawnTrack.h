// /Script/MovieScene.MovieSceneSpawnTrack
// Derives from: UMovieSceneTrack > UMovieSceneSignedObject > UObject
// size 0xB0, declared in Engine/Source/Runtime/MovieScene/Public/Tracks/MovieSceneSpawnTrack.h

UCLASS()
class UMovieSceneSpawnTrack : public UMovieSceneTrack
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY() TArray<UMovieSceneSection*> Sections;  // 0x0090, size 0x10
    UPROPERTY() FGuid ObjectGuid;  // 0x00A0, size 0x10
};
