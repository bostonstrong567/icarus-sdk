// /Script/HairStrandsCore.GroomBindingAsset
// Derives from: UObject
// size 0xB0, declared in Engine/Plugins/Runtime/HairStrands/Source/HairStrandsCore/Public/GroomBindingAsset.h

UCLASS()
class UGroomBindingAsset : public UObject
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EGroomBindingMeshType GroomBindingType;  // 0x0028, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UGroomAsset* Groom;  // 0x0030, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) USkeletalMesh* SourceSkeletalMesh;  // 0x0038, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) USkeletalMesh* TargetSkeletalMesh;  // 0x0040, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UGeometryCache* SourceGeometryCache;  // 0x0048, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UGeometryCache* TargetGeometryCache;  // 0x0050, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 NumInterpolationPoints;  // 0x0058, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MatchingSection;  // 0x005C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FGoomBindingGroupInfo> GroupInfos;  // 0x0060, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    TArray<UGroomBindingAsset::FHairGroupResource,TSizedDefaultAllocator<32> > HairGroupResources;  // 0x0070
    TQueue<UGroomBindingAsset::FHairGroupResource,1> HairGroupResourcesToDelete;  // 0x0080
    TArray<UGroomBindingAsset::FHairGroupData,TSizedDefaultAllocator<32> > HairGroupDatas;  // 0x0090
    volatile UGroomBindingAsset::EQueryStatus QueryStatus;  // 0x00A0
    bool bIsValid;  // 0x00A4
};
