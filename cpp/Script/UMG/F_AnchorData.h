// /Script/UMG.AnchorData
// size 0x28, declared in Engine/Source/Runtime/UMG/Public/Components/CanvasPanelSlot.h

USTRUCT()
struct FAnchorData
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FMargin Offsets;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAnchors Anchors;  // 0x0010, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D Alignment;  // 0x0020, size 0x8
};
