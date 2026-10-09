// /Script/Landscape.LandscapeLayer
// size 0x88, declared in Engine/Source/Runtime/Landscape/Classes/Landscape.h

USTRUCT()
struct FLandscapeLayer
{
public:
    UPROPERTY() FGuid Guid;  // 0x0000, size 0x10
    UPROPERTY() FName Name;  // 0x0010, size 0x8
    UPROPERTY(Transient) bool bVisible;  // 0x0018, size 0x1
    UPROPERTY() bool bLocked;  // 0x0019, size 0x1
    UPROPERTY() float HeightmapAlpha;  // 0x001C, size 0x4
    UPROPERTY() float WeightmapAlpha;  // 0x0020, size 0x4
    UPROPERTY() TEnumAsByte<ELandscapeBlendMode> BlendMode;  // 0x0024, size 0x1
    UPROPERTY() TArray<FLandscapeLayerBrush> Brushes;  // 0x0028, size 0x10
    UPROPERTY() TMap<ULandscapeLayerInfoObject*, bool> WeightmapLayerAllocationBlend;  // 0x0038, size 0x50
};
