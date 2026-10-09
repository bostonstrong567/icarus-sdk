// /Script/Engine.SkeletalMeshClothBuildParams
// size 0x58, declared in Engine/Source/Runtime/Engine/Classes/Engine/SkeletalMesh.h

USTRUCT()
struct FSkeletalMeshClothBuildParams
{
public:
    UPROPERTY(EditAnywhere) TWeakObjectPtr<UClothingAssetBase> TargetAsset;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere) int32 TargetLod;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere) bool bRemapParameters;  // 0x000C, size 0x1
    UPROPERTY(EditAnywhere) FString AssetName;  // 0x0010, size 0x10
    UPROPERTY(EditAnywhere) int32 LodIndex;  // 0x0020, size 0x4
    UPROPERTY(EditAnywhere) int32 SourceSection;  // 0x0024, size 0x4
    UPROPERTY(EditAnywhere) bool bRemoveFromMesh;  // 0x0028, size 0x1
    UPROPERTY(EditAnywhere) TSoftObjectPtr<UPhysicsAsset> PhysicsAsset;  // 0x0030, size 0x28
};
