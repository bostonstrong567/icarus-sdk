// /Script/HairStrandsCore.HairGroupInfoWithVisibility
// size 0x1C, declared in Engine/Plugins/Runtime/HairStrands/Source/HairStrandsCore/Public/GroomAsset.h

USTRUCT()
struct FHairGroupInfoWithVisibility : public FHairGroupInfo
{
    UPROPERTY(EditAnywhere) bool bIsVisible;  // 0x0018, size 0x1
};
