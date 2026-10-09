// /Script/ControlRig.RigEventContext
// size 0x28, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Public/Rigs/RigHierarchyDefines.h

USTRUCT()
struct FRigEventContext
{
public:
    ERigEvent Event;  // 0x0000, not reflected
    FName SourceEventName;  // 0x0004, not reflected
    FRigElementKey Key;  // 0x000C, not reflected
    float LocalTime;  // 0x0018, not reflected
    void * Payload;  // 0x0020, not reflected
};
