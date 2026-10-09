// /Script/Slate.Anchors
// size 0x10, declared in Engine/Source/Runtime/Slate/Public/Widgets/Layout/Anchors.h

USTRUCT()
struct FAnchors
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D Minimum;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D Maximum;  // 0x0008, size 0x8
};
