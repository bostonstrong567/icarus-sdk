// /Script/ControlRig.RigUnit_ToWorldSpace_Location
// size 0x20, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Hierarchy/RigUnit_WorldSpace.h

USTRUCT()
struct FRigUnit_ToWorldSpace_Location : public FRigUnit
{
    UPROPERTY() FVector Location;  // 0x0008, size 0xC
    UPROPERTY() FVector World;  // 0x0014, size 0xC
};
