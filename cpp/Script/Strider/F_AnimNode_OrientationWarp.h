// /Script/Strider.AnimNode_OrientationWarp
// size 0x90, declared in Engine/Plugins/Marketplace/Strider/Source/Strider/Public/AnimNode_OrientationWarp.h

USTRUCT()
struct FAnimNode_OrientationWarp : public FAnimNode_Base
{
    UPROPERTY(EditAnywhere) FPoseLink InputPose;  // 0x0010, size 0x10
    UPROPERTY(EditAnywhere) float Direction;  // 0x0020, size 0x4
    UPROPERTY(EditAnywhere) float Offset;  // 0x0024, size 0x4
    UPROPERTY(EditAnywhere) float UpperBodyAlpha;  // 0x0028, size 0x4
    UPROPERTY(EditAnywhere) FVector UpAxis;  // 0x002C, size 0xC
    UPROPERTY(EditAnywhere) float Alpha;  // 0x0038, size 0x4
    UPROPERTY(EditAnywhere) float MaxWarpDelta;  // 0x003C, size 0x4
    UPROPERTY(EditAnywhere) float Smoothing;  // 0x0040, size 0x4
    UPROPERTY(EditAnywhere) FBoneReference RootBone;  // 0x0044, size 0x10
    UPROPERTY(EditAnywhere) FBoneChain SpineChain;  // 0x0058, size 0x20
    UPROPERTY(EditAnywhere) TArray<FBoneReference> RootBonesToCounterAdjust;  // 0x0078, size 0x10

    // Not reflected:
    float CurrentDirection;  // 0x0088
    bool bValidCheckResult;  // 0x008C
};
