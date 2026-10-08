// /Script/HairStrandsCore.HairGroupsMaterial
// size 0x10, declared in Engine/Plugins/Runtime/HairStrands/Source/HairStrandsCore/Public/GroomAsset.h

USTRUCT()
struct FHairGroupsMaterial
{
    UPROPERTY(EditAnywhere) UMaterialInterface* Material;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere) FName SlotName;  // 0x0008, size 0x8
};
