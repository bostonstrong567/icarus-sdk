// /Script/AnimationCore.AimConstraintDescription
// size 0x40, declared in Engine/Source/Runtime/AnimationCore/Public/Constraint.h

USTRUCT()
struct FAimConstraintDescription : public FConstraintDescriptionEx
{
    UPROPERTY(EditAnywhere) FAxis LookAt_Axis;  // 0x0010, size 0x10
    UPROPERTY(EditAnywhere) FAxis LookUp_Axis;  // 0x0020, size 0x10
    UPROPERTY(EditAnywhere) bool bUseLookUp;  // 0x0030, size 0x1
    UPROPERTY(EditAnywhere) FVector LookUpTarget;  // 0x0034, size 0xC
};
