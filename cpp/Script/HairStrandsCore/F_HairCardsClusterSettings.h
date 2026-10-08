// /Script/HairStrandsCore.HairCardsClusterSettings
// size 0x8, declared in Engine/Plugins/Runtime/HairStrands/Source/HairStrandsCore/Public/GroomAssetCards.h

USTRUCT()
struct FHairCardsClusterSettings
{
    UPROPERTY() float ClusterDecimation;  // 0x0000, size 0x4
    UPROPERTY() EHairCardsClusterType Type;  // 0x0004, size 0x1
    UPROPERTY() bool bUseGuide;  // 0x0005, size 0x1
};
