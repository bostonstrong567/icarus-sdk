// /Script/MovieScene.MovieSceneSequencePlaybackSettings
// size 0x14, declared in Engine/Source/Runtime/MovieScene/Public/MovieSceneSequencePlayer.h

USTRUCT()
struct FMovieSceneSequencePlaybackSettings
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bAutoPlay : 1;  // 0x0000, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FMovieSceneSequenceLoopCount LoopCount;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float PlayRate;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float StartTime;  // 0x000C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bRandomStartTime : 1;  // 0x0010, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bRestoreState : 1;  // 0x0010, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bDisableMovementInput : 1;  // 0x0010, mask 0x04
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bDisableLookAtInput : 1;  // 0x0010, mask 0x08
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bHidePlayer : 1;  // 0x0010, mask 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bHideHud : 1;  // 0x0010, mask 0x20
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bDisableCameraCuts : 1;  // 0x0010, mask 0x40
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bPauseAtEnd : 1;  // 0x0010, mask 0x80
};
