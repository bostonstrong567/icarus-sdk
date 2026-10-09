// /Script/Engine.PoseAsset
// Derives from: UAnimationAsset > UObject
// size 0x130, declared in Engine/Source/Runtime/Engine/Classes/Animation/PoseAsset.h

UCLASS(MinimalAPI)
class UPoseAsset : public UAnimationAsset
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(EditAnywhere) FName RetargetSource;  // 0x0118, size 0x8
    UPROPERTY() TArray<FTransform> RetargetSourceAssetReferencePose;  // 0x0120, size 0x10
private:
    UPROPERTY() FPoseDataContainer PoseContainer;  // 0x0080, size 0x90
    UPROPERTY() bool bAdditivePose;  // 0x0110, size 0x1
    UPROPERTY() int32 BasePoseIndex;  // 0x0114, size 0x4

    // Virtual functions that start here:
    //   HasRootMotion
};
