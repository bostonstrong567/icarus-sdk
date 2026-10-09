// /Script/ControlRig.RigUnit_GetDeltaTime
// size 0x10, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Animation/RigUnit_GetDeltaTime.h

USTRUCT()
struct FRigUnit_GetDeltaTime : public FRigUnit_AnimBase
{
public:
    UPROPERTY() float Result;  // 0x0008, size 0x4
};
