// /Script/MotionWarping.RootMotionModifier_AdjustmentBlendWarp
// Derives from: URootMotionModifier_Warp > URootMotionModifier > UObject
// size 0x260, declared in Engine/Plugins/Animation/MotionWarping/Source/MotionWarping/Public/RootMotionModifier_AdjustmentBlendWarp.h

UCLASS(EditInlineNew)
class URootMotionModifier_AdjustmentBlendWarp : public URootMotionModifier_Warp
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bWarpIKBones;  // 0x0190, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FName> IKBones;  // 0x0198, size 0x10
protected:
    UPROPERTY() FTransform CachedMeshTransform;  // 0x01B0, size 0x30
    UPROPERTY() FTransform CachedMeshRelativeTransform;  // 0x01E0, size 0x30
    UPROPERTY() FTransform CachedRootMotion;  // 0x0210, size 0x30
    UPROPERTY() FAnimSequenceTrackContainer Result;  // 0x0240, size 0x20
};
