// /Script/MovieScene.MovieSceneObjectBindingID
// size 0x18, declared in Engine/Source/Runtime/MovieScene/Public/MovieSceneObjectBindingID.h

USTRUCT()
struct FMovieSceneObjectBindingID
{
    UPROPERTY(EditAnywhere) FGuid Guid;  // 0x0000, size 0x10
    UPROPERTY() int32 SequenceID;  // 0x0010, size 0x4
    UPROPERTY() int32 ResolveParentIndex;  // 0x0014, size 0x4
};
