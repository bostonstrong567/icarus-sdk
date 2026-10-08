// /Script/HairStrandsCore.GroomAsset
// Derives from: UObject
// size 0xF8, declared in Engine/Plugins/Runtime/HairStrands/Source/HairStrandsCore/Public/GroomAsset.h

UCLASS()
class UGroomAsset : public UObject, public IInterface_AssetUserData
{
public:
    UPROPERTY(EditAnywhere, Transient) TArray<FHairGroupInfoWithVisibility> HairGroupsInfo;  // 0x0030, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FHairGroupsRendering> HairGroupsRendering;  // 0x0040, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FHairGroupsPhysics> HairGroupsPhysics;  // 0x0050, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FHairGroupsInterpolation> HairGroupsInterpolation;  // 0x0060, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FHairGroupsLOD> HairGroupsLOD;  // 0x0070, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FHairGroupsCardsSourceDescription> HairGroupsCards;  // 0x0080, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FHairGroupsMeshesSourceDescription> HairGroupsMeshes;  // 0x0090, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FHairGroupsMaterial> HairGroupsMaterials;  // 0x00A0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool EnableGlobalInterpolation;  // 0x00C0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EGroomInterpolationType HairInterpolationType;  // 0x00C1, size 0x1
    UPROPERTY(EditAnywhere) EHairLODSelectionType LODSelectionType;  // 0x00C2, size 0x1
    UPROPERTY(EditAnywhere) FPerPlatformInt MinLOD;  // 0x00C4, size 0x4
    UPROPERTY(EditAnywhere) FPerPlatformBool DisableBelowMinLodStripping;  // 0x00C8, size 0x1
    UPROPERTY() TArray<float> EffectiveLODBias;  // 0x00D0, size 0x10
    UPROPERTY(EditAnywhere) TArray<UAssetUserData*> AssetUserData;  // 0x00E0, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    TArray<FHairGroupData,TSizedDefaultAllocator<32> > HairGroupsData;  // 0x00B0
    bool bIsInitialized;  // 0x00F0, private
};
