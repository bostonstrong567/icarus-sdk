// /Script/HairStrandsCore.HairGroupsRendering
// size 0x30, declared in Engine/Plugins/Runtime/HairStrands/Source/HairStrandsCore/Public/GroomAssetRendering.h

USTRUCT()
struct FHairGroupsRendering
{
public:
    UPROPERTY() FName MaterialSlotName;  // 0x0000, size 0x8
    UPROPERTY() UMaterialInterface* Material;  // 0x0008, size 0x8
    UPROPERTY(EditAnywhere) FHairGeometrySettings GeometrySettings;  // 0x0010, size 0x10
    UPROPERTY(EditAnywhere) FHairShadowSettings ShadowSettings;  // 0x0020, size 0xC
    UPROPERTY(EditAnywhere) FHairAdvancedRenderingSettings AdvancedSettings;  // 0x002C, size 0x2
};
