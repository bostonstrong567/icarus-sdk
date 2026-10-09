// /Script/MovieSceneTracks.MovieScenePropertyTrack
// Derives from: UMovieSceneNameableTrack > UMovieSceneTrack > UMovieSceneSignedObject > UObject
// size 0xC0, declared in Engine/Source/Runtime/MovieSceneTracks/Public/Tracks/MovieScenePropertyTrack.h

UCLASS(Abstract)
class UMovieScenePropertyTrack : public UMovieSceneNameableTrack
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY() FMovieScenePropertyBinding PropertyBinding;  // 0x0098, size 0x14
    UPROPERTY() TArray<UMovieSceneSection*> Sections;  // 0x00B0, size 0x10
private:
    UPROPERTY(Instanced) UMovieSceneSection* SectionToKey;  // 0x0090, size 0x8
};
