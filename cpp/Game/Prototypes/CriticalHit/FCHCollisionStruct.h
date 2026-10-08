// /Game/Prototypes/CriticalHit/FCHCollisionStruct.FCHCollisionStruct
// size 0x28

USTRUCT()
struct FCHCollisionStruct
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector Location;  // 0x0000, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Time;  // 0x000C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector Start;  // 0x0010, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector End;  // 0x001C, size 0xC
};
