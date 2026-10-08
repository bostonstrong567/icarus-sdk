// /Script/ControlRig.BlendTarget
// size 0x40, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Deprecated/RigUnit_BlendTransform.h

USTRUCT()
struct FBlendTarget
{
    UPROPERTY(EditAnywhere) FTransform Transform;  // 0x0000, size 0x30
    UPROPERTY(EditAnywhere) float Weight;  // 0x0030, size 0x4
};
