// /Script/Landscape.LandscapeLayerInfoObject
// Derives from: UObject
// size 0x50, declared in Engine/Source/Runtime/Landscape/Classes/LandscapeLayerInfoObject.h

UCLASS(MinimalAPI)
class ULandscapeLayerInfoObject : public UObject
{
public:
    UPROPERTY(EditAnywhere) FName LayerName;  // 0x0028, size 0x8
    UPROPERTY(EditAnywhere) UPhysicalMaterial* PhysMaterial;  // 0x0030, size 0x8
    UPROPERTY(EditAnywhere) float Hardness;  // 0x0038, size 0x4
    UPROPERTY(EditAnywhere) FLinearColor LayerUsageDebugColor;  // 0x003C, size 0x10
};
