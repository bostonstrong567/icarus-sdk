// /Game/BP/AI/Bosses/Misc/BossSplinePathConnection.BossSplinePathConnection
// size 0x14

USTRUCT()
struct BossSplinePathConnection
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 StartingSplinePoint;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ForwardDirection;  // 0x0004, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName OtherSplineActorTag;  // 0x0008, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float OtherSplineInputKey;  // 0x0010, size 0x4
};
