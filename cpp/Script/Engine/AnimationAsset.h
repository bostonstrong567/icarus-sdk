// /Script/Engine.AnimationAsset
// Derives from: UObject
// size 0x80, declared in Engine/Source/Runtime/Engine/Classes/Animation/AnimationAsset.h

UCLASS(Abstract, MinimalAPI)
class UAnimationAsset : public UObject, public IInterface_AssetUserData, public IInterface_PreviewMeshProvider
{
public:
    UPROPERTY(EditAnywhere) USkeleton* Skeleton;  // 0x0038, size 0x8
    UPROPERTY(EditAnywhere) TArray<UAnimMetaData*> MetaData;  // 0x0060, size 0x10
    UPROPERTY(EditAnywhere) TArray<UAssetUserData*> AssetUserData;  // 0x0070, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    FGuid SkeletonGuid;  // 0x0040, private
    FGuid SkeletonVirtualBoneGuid;  // 0x0050, private

    // Virtual functions that start here:
    //   GetMaxCurrentTime, GetUniqueMarkerNames, IsValidAdditive, TickAssetPlayer
};
