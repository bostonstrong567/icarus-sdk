// /Script/ControlRig.RigUnitMutable
// size 0x68, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Public/Units/RigUnit.h

USTRUCT()
struct FRigUnitMutable : public FRigUnit
{
    UPROPERTY(Transient) FControlRigExecuteContext ExecuteContext;  // 0x0008, size 0x60
};
