// /Script/ControlRig.RigUnit_SetControlVector2D
// size 0x90, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Hierarchy/RigUnit_SetControlTransform.h

USTRUCT()
struct FRigUnit_SetControlVector2D : public FRigUnitMutable
{
public:
    UPROPERTY() FName Control;  // 0x0068, size 0x8
    UPROPERTY() float Weight;  // 0x0070, size 0x4
    UPROPERTY() FVector2D Vector;  // 0x0074, size 0x8
    UPROPERTY() FCachedRigElement CachedControlIndex;  // 0x007C, size 0x14
};
