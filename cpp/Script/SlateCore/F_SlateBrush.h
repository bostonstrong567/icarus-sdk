// /Script/SlateCore.SlateBrush
// size 0x88, declared in Engine/Source/Runtime/SlateCore/Public/Styling/SlateBrush.h

USTRUCT()
struct FSlateBrush
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D ImageSize;  // 0x0008, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FMargin Margin;  // 0x0010, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor TintColor;  // 0x0020, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<ESlateBrushDrawType> DrawAs;  // 0x006C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<ESlateBrushTileType> Tiling;  // 0x006D, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<ESlateBrushMirrorType> Mirroring;  // 0x006E, size 0x1
    UPROPERTY() TEnumAsByte<ESlateBrushImageType> ImageType;  // 0x006F, size 0x1
    FSlateResourceHandle ResourceHandle;  // 0x0070, not reflected
protected:
    UPROPERTY() FName ResourceName;  // 0x0050, size 0x8
    UPROPERTY() FBox2D UVRegion;  // 0x0058, size 0x14
    UPROPERTY() uint8 bIsDynamicallyLoaded : 1;  // 0x0080, mask 0x01
    UPROPERTY(Deprecated) uint8 bHasUObject : 1;  // 0x0080, mask 0x02
private:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UObject* ResourceObject;  // 0x0048, size 0x8
};
