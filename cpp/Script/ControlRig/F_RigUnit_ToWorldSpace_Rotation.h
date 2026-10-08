// /Script/ControlRig.RigUnit_ToWorldSpace_Rotation
// size 0x30, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Hierarchy/RigUnit_WorldSpace.h

USTRUCT()
struct FRigUnit_ToWorldSpace_Rotation : public FRigUnit
{
    UPROPERTY() FQuat Rotation;  // 0x0010, size 0x10
    UPROPERTY() FQuat World;  // 0x0020, size 0x10
};
