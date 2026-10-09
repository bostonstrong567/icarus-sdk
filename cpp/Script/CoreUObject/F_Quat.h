// /Script/CoreUObject.Quat
// size 0x10, declared in Engine/Source/Runtime/Core/Public/Math/Quat.h

USTRUCT()
struct FQuat
{
public:
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) float X;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) float Y;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) float Z;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) float W;  // 0x000C, size 0x4
};
