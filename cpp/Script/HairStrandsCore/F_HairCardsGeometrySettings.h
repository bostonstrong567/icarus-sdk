// /Script/HairStrandsCore.HairCardsGeometrySettings
// size 0x1C, declared in Engine/Plugins/Runtime/HairStrands/Source/HairStrandsCore/Public/GroomAssetCards.h

USTRUCT()
struct FHairCardsGeometrySettings
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EHairCardsGenerationType GenerationType;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 CardsCount;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EHairCardsClusterType ClusterType;  // 0x0008, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MinSegmentLength;  // 0x000C, size 0x4
    UPROPERTY(EditAnywhere) float AngularThreshold;  // 0x0010, size 0x4
    UPROPERTY(EditAnywhere) float MinCardsLength;  // 0x0014, size 0x4
    UPROPERTY(EditAnywhere) float MaxCardsLength;  // 0x0018, size 0x4
};
