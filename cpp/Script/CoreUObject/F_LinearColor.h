// /Script/CoreUObject.LinearColor
// size 0x10, declared in Engine/Source/Runtime/Core/Public/Math/Color.h

USTRUCT()
struct FLinearColor
{
public:
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) float R;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) float G;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) float B;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) float A;  // 0x000C, size 0x4
};
