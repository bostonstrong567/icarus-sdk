// /Script/Strider.HipAdjustment
// size 0x18, declared in Engine/Plugins/Marketplace/Strider/Source/Strider/Public/StriderData.h

USTRUCT()
struct FHipAdjustment
{
public:
    UPROPERTY(EditAnywhere) FBoneReference Hips;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere) float AdjustmentRatio;  // 0x0010, size 0x4
    UPROPERTY(EditAnywhere) float MaxRecoveryRate;  // 0x0014, size 0x4
};
