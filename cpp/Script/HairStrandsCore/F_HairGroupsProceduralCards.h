// /Script/HairStrandsCore.HairGroupsProceduralCards
// size 0x38, declared in Engine/Plugins/Runtime/HairStrands/Source/HairStrandsCore/Public/GroomAssetCards.h

USTRUCT()
struct FHairGroupsProceduralCards
{
public:
    UPROPERTY() FHairCardsClusterSettings ClusterSettings;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere) FHairCardsGeometrySettings GeometrySettings;  // 0x0008, size 0x1C
    UPROPERTY(EditAnywhere) FHairCardsTextureSettings TextureSettings;  // 0x0024, size 0x10
    UPROPERTY() int32 Version;  // 0x0034, size 0x4
};
