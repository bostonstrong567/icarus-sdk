// /Script/CoreUObject.Rotator
// size 0xC, declared in Engine/Source/Runtime/Core/Public/Math/Rotator.h

USTRUCT()
struct FRotator
{
public:
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) float Pitch;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) float Yaw;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) float Roll;  // 0x0008, size 0x4
};
