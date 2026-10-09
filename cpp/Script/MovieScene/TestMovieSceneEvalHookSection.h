// /Script/MovieScene.TestMovieSceneEvalHookSection
// Derives from: UMovieSceneHookSection > UMovieSceneSection > UMovieSceneSignedObject > UObject
// size 0x118, declared in Engine/Source/Runtime/MovieScene/Private/Tests/MovieSceneTestObjects.h

UCLASS(MinimalAPI)
class UTestMovieSceneEvalHookSection : public UMovieSceneHookSection
{
public:
    int32 StartValue;  // 0x0100, not reflected
    int32 EndValue;  // 0x0104, not reflected
    TArray<FFrameNumber,TSizedDefaultAllocator<32> > TriggerTimes;  // 0x0108, not reflected
};
