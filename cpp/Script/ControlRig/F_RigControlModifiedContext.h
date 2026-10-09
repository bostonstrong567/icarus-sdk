// /Script/ControlRig.RigControlModifiedContext
// size 0x10, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Public/Rigs/RigHierarchyDefines.h

USTRUCT()
struct FRigControlModifiedContext
{
public:
    EControlRigSetKey SetKey;  // 0x0000, not reflected
    float LocalTime;  // 0x0004, not reflected
    FName EventName;  // 0x0008, not reflected
};
