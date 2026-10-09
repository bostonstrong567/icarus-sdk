// /Script/Engine.AnimationAsset
// Derives from: UObject
// size 0x80, declared in Engine/Source/Runtime/Engine/Classes/Animation/AnimationAsset.h

UCLASS(Abstract, MinimalAPI)
class UAnimationAsset : public UObject, public IInterface_AssetUserData, public IInterface_PreviewMeshProvider
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(EditAnywhere) TArray<UAssetUserData*> AssetUserData;  // 0x0070, size 0x10
private:
    UPROPERTY(EditAnywhere) USkeleton* Skeleton;  // 0x0038, size 0x8
    FGuid SkeletonGuid;  // 0x0040, not reflected
    FGuid SkeletonVirtualBoneGuid;  // 0x0050, not reflected
    UPROPERTY(EditAnywhere) TArray<UAnimMetaData*> MetaData;  // 0x0060, size 0x10

    // Virtual functions that start here:
    //   GetMaxCurrentTime, GetUniqueMarkerNames, IsValidAdditive, TickAssetPlayer
};
