// /Script/ControlRig.RigUnit_ToRigSpace_Location
// size 0x20, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Hierarchy/RigUnit_WorldSpace.h

USTRUCT()
struct FRigUnit_ToRigSpace_Location : public FRigUnit
{
    UPROPERTY() FVector Location;  // 0x0008, size 0xC
    UPROPERTY() FVector Global;  // 0x0014, size 0xC
};
