// /Script/ControlRig.RigUnit_ToRigSpace_Transform
// size 0x70, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Hierarchy/RigUnit_WorldSpace.h

USTRUCT()
struct FRigUnit_ToRigSpace_Transform : public FRigUnit
{
    UPROPERTY() FTransform Transform;  // 0x0010, size 0x30
    UPROPERTY() FTransform Global;  // 0x0040, size 0x30
};
