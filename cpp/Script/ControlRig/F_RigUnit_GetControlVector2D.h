// /Script/ControlRig.RigUnit_GetControlVector2D
// size 0x40, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Hierarchy/RigUnit_GetControlTransform.h

USTRUCT()
struct FRigUnit_GetControlVector2D : public FRigUnit
{
    UPROPERTY() FName Control;  // 0x0008, size 0x8
    UPROPERTY() FVector2D Vector;  // 0x0010, size 0x8
    UPROPERTY() FVector2D Minimum;  // 0x0018, size 0x8
    UPROPERTY() FVector2D Maximum;  // 0x0020, size 0x8
    UPROPERTY() FCachedRigElement CachedControlIndex;  // 0x0028, size 0x14
};
