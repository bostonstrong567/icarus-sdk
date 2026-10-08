// /Script/FullBodyIK.FBIKBoneLimit
// size 0x10, declared in Engine/Plugins/Experimental/FullBodyIK/Source/FullBodyIK/Public/FBIKConstraintOption.h

USTRUCT()
struct FFBIKBoneLimit
{
    UPROPERTY(EditAnywhere) EFBIKBoneLimitType LimitType_X;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere) EFBIKBoneLimitType LimitType_Y;  // 0x0001, size 0x1
    UPROPERTY(EditAnywhere) EFBIKBoneLimitType LimitType_Z;  // 0x0002, size 0x1
    UPROPERTY(EditAnywhere) FVector Limit;  // 0x0004, size 0xC
};
