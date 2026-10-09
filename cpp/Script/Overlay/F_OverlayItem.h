// /Script/Overlay.OverlayItem
// size 0x28, declared in Engine/Source/Runtime/Overlay/Public/Overlays.h

USTRUCT()
struct FOverlayItem
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimespan StartTime;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimespan EndTime;  // 0x0008, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString Text;  // 0x0010, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D Position;  // 0x0020, size 0x8
};
