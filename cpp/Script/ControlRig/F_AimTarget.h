// /Script/ControlRig.AimTarget
// size 0x50, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Deprecated/RigUnit_AimConstraint.h

USTRUCT()
struct FAimTarget
{
public:
    UPROPERTY(EditAnywhere) float Weight;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere) FTransform Transform;  // 0x0010, size 0x30
    UPROPERTY(EditAnywhere) FVector AlignVector;  // 0x0040, size 0xC
};
