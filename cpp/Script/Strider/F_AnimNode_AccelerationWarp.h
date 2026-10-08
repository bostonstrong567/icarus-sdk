// /Script/Strider.AnimNode_AccelerationWarp
// size 0x70, declared in Engine/Plugins/Marketplace/Strider/Source/Strider/Public/AnimNode_AccelerationWarp.h

USTRUCT()
struct FAnimNode_AccelerationWarp : public FAnimNode_Base
{
    UPROPERTY(EditAnywhere) FPoseLink InputPose;  // 0x0010, size 0x10
    UPROPERTY(EditAnywhere) float Acceleration;  // 0x0020, size 0x4
    UPROPERTY(EditAnywhere) float Direction;  // 0x0024, size 0x4
    UPROPERTY(EditAnywhere) float Alpha;  // 0x0028, size 0x4
    UPROPERTY(EditAnywhere) FVector UpAxis;  // 0x002C, size 0xC
    UPROPERTY(EditAnywhere) float TorsoBendRatio;  // 0x0038, size 0x4
    UPROPERTY(EditAnywhere) float MaxTorsoBend;  // 0x003C, size 0x4
    UPROPERTY(EditAnywhere) float Smoothing;  // 0x0040, size 0x4
    UPROPERTY(EditAnywhere) FBoneChain SpineChain;  // 0x0048, size 0x20

    // Not reflected:
    float CurrentAcceleration;  // 0x0068
    bool bValidCheckResult;  // 0x006C
};
