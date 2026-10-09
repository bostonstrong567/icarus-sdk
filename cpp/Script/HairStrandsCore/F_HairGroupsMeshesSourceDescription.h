// /Script/HairStrandsCore.HairGroupsMeshesSourceDescription
// size 0x60, declared in Engine/Plugins/Runtime/HairStrands/Source/HairStrandsCore/Public/GroomAssetMeshes.h

USTRUCT()
struct FHairGroupsMeshesSourceDescription
{
public:
    UPROPERTY() UMaterialInterface* Material;  // 0x0000, size 0x8
    UPROPERTY() FName MaterialSlotName;  // 0x0008, size 0x8
    UPROPERTY(EditAnywhere) UStaticMesh* ImportedMesh;  // 0x0010, size 0x8
    UPROPERTY(EditAnywhere) FHairGroupCardsTextures Textures;  // 0x0018, size 0x30
    UPROPERTY(EditAnywhere) int32 GroupIndex;  // 0x0048, size 0x4
    UPROPERTY(EditAnywhere) int32 LODIndex;  // 0x004C, size 0x4
    UPROPERTY(Transient) FString ImportedMeshKey;  // 0x0050, size 0x10
};
