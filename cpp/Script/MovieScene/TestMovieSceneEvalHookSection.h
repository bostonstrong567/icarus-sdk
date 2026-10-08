// /Script/MovieScene.TestMovieSceneEvalHookSection
// Derives from: UMovieSceneHookSection > UMovieSceneSection > UMovieSceneSignedObject > UObject
// size 0x118, declared in Engine/Source/Runtime/MovieScene/Private/Tests/MovieSceneTestObjects.h

UCLASS(MinimalAPI)
class UTestMovieSceneEvalHookSection : public UMovieSceneHookSection
{
public:

    // Not reflected: the engine's scripting cannot see these.
    int32 StartValue;  // 0x0100
    int32 EndValue;  // 0x0104
    TArray<FFrameNumber,TSizedDefaultAllocator<32> > TriggerTimes;  // 0x0108
};
