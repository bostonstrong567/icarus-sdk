// /Script/HairStrandsCore.HairGroupsCardsSourceDescription
// size 0xC0, declared in Engine/Plugins/Runtime/HairStrands/Source/HairStrandsCore/Public/GroomAssetCards.h

USTRUCT()
struct FHairGroupsCardsSourceDescription
{
    UPROPERTY() UMaterialInterface* Material;  // 0x0000, size 0x8
    UPROPERTY() FName MaterialSlotName;  // 0x0008, size 0x8
    UPROPERTY(EditAnywhere) EHairCardsSourceType SourceType;  // 0x0010, size 0x1
    UPROPERTY(EditAnywhere) UStaticMesh* ProceduralMesh;  // 0x0018, size 0x8
    UPROPERTY() FString ProceduralMeshKey;  // 0x0020, size 0x10
    UPROPERTY(EditAnywhere) UStaticMesh* ImportedMesh;  // 0x0030, size 0x8
    UPROPERTY(EditAnywhere) FHairGroupsProceduralCards ProceduralSettings;  // 0x0038, size 0x38
    UPROPERTY(EditAnywhere) FHairGroupCardsTextures Textures;  // 0x0070, size 0x30
    UPROPERTY(EditAnywhere) int32 GroupIndex;  // 0x00A0, size 0x4
    UPROPERTY(EditAnywhere) int32 LODIndex;  // 0x00A4, size 0x4
    UPROPERTY(EditAnywhere, Transient) FHairGroupCardsInfo CardsInfo;  // 0x00A8, size 0x8
    UPROPERTY(Transient) FString ImportedMeshKey;  // 0x00B0, size 0x10
};
