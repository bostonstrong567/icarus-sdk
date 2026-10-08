// /Script/MovieScene.TestMovieSceneSequence
// Derives from: UMovieSceneSequence > UMovieSceneSignedObject > UObject
// size 0x68, declared in Engine/Source/Runtime/MovieScene/Private/Tests/MovieSceneTestObjects.h

UCLASS(MinimalAPI, Config=Engine)
class UTestMovieSceneSequence : public UMovieSceneSequence
{
public:
    UPROPERTY(Instanced) UMovieScene* MovieScene;  // 0x0060, size 0x8
};
