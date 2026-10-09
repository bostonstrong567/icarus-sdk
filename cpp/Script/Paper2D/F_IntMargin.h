// /Script/Paper2D.IntMargin
// size 0x10, declared in Engine/Plugins/2D/Paper2D/Source/Paper2D/Classes/IntMargin.h

USTRUCT()
struct FIntMargin
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Left;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Top;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Right;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Bottom;  // 0x000C, size 0x4
};
