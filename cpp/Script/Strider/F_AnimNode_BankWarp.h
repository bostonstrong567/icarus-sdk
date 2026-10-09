// /Script/Strider.AnimNode_BankWarp
// size 0xA0, declared in Engine/Plugins/Marketplace/Strider/Source/Strider/Public/AnimNode_BankWarp.h

USTRUCT()
struct FAnimNode_BankWarp : public FAnimNode_Base
{
public:
    UPROPERTY(EditAnywhere) FPoseLink InputPose;  // 0x0010, size 0x10
    UPROPERTY(EditAnywhere) float BankValue;  // 0x0020, size 0x4
    UPROPERTY(EditAnywhere) float Alpha;  // 0x0024, size 0x4
    UPROPERTY(EditAnywhere) FVector UpAxis;  // 0x0028, size 0xC
    UPROPERTY(EditAnywhere) FVector ForwardAxis;  // 0x0034, size 0xC
    UPROPERTY(EditAnywhere) float TwistRate;  // 0x0040, size 0x4
    UPROPERTY(EditAnywhere) float MaxTwist;  // 0x0044, size 0x4
    UPROPERTY(EditAnywhere) float LeanRate;  // 0x0048, size 0x4
    UPROPERTY(EditAnywhere) float MaxLean;  // 0x004C, size 0x4
    UPROPERTY(EditAnywhere) float Smoothing;  // 0x0050, size 0x4
    UPROPERTY(EditAnywhere) FBoneReference RootBone;  // 0x0054, size 0x10
    UPROPERTY(EditAnywhere) FBoneChain SpineChain;  // 0x0068, size 0x20
    UPROPERTY(EditAnywhere) TArray<FBoneReference> RootBonesToAdjust;  // 0x0088, size 0x10
private:
    float CurrentBankValue;  // 0x0098, not reflected
    bool bValidCheckResult;  // 0x009C, not reflected
};
