// /Script/MovieScene.TestMovieSceneEvalHookTrack
// Derives from: UMovieSceneTrack > UMovieSceneSignedObject > UObject
// size 0xA0, declared in Engine/Source/Runtime/MovieScene/Private/Tests/MovieSceneTestObjects.h

UCLASS(MinimalAPI)
class UTestMovieSceneEvalHookTrack : public UMovieSceneTrack
{
public:
    UPROPERTY() TArray<UMovieSceneSection*> SectionArray;  // 0x0090, size 0x10
};
