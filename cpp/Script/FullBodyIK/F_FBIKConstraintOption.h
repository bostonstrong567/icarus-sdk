// /Script/FullBodyIK.FBIKConstraintOption
// size 0x58, declared in Engine/Plugins/Experimental/FullBodyIK/Source/FullBodyIK/Public/FBIKConstraintOption.h

USTRUCT()
struct FFBIKConstraintOption
{
    UPROPERTY(EditAnywhere) FRigElementKey Item;  // 0x0000, size 0xC
    UPROPERTY(EditAnywhere) bool bEnabled;  // 0x000C, size 0x1
    UPROPERTY(EditAnywhere) bool bUseStiffness;  // 0x000D, size 0x1
    UPROPERTY(EditAnywhere) FVector LinearStiffness;  // 0x0010, size 0xC
    UPROPERTY(EditAnywhere) FVector AngularStiffness;  // 0x001C, size 0xC
    UPROPERTY(EditAnywhere) bool bUseAngularLimit;  // 0x0028, size 0x1
    UPROPERTY(EditAnywhere) FFBIKBoneLimit AngularLimit;  // 0x002C, size 0x10
    UPROPERTY(EditAnywhere) bool bUsePoleVector;  // 0x003C, size 0x1
    UPROPERTY(EditAnywhere) EPoleVectorOption PoleVectorOption;  // 0x003D, size 0x1
    UPROPERTY(EditAnywhere) FVector PoleVector;  // 0x0040, size 0xC
    UPROPERTY(EditAnywhere) FRotator OffsetRotation;  // 0x004C, size 0xC
};
