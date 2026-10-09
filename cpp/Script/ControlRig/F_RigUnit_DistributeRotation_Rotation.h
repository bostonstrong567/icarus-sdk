// /Script/ControlRig.RigUnit_DistributeRotation_Rotation
// size 0x20, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Highlevel/Hierarchy/RigUnit_DistributeRotation.h

USTRUCT()
struct FRigUnit_DistributeRotation_Rotation
{
public:
    UPROPERTY() FQuat Rotation;  // 0x0000, size 0x10
    UPROPERTY() float Ratio;  // 0x0010, size 0x4
};
