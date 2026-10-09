// /Script/ControlRig.ControlRigExecuteContext
// size 0x60, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Public/ControlRigDefines.h

USTRUCT()
struct FControlRigExecuteContext : public FRigVMExecuteContext
{
public:
    FRigHierarchyContainer * Hierarchy;  // 0x0058, not reflected
};
