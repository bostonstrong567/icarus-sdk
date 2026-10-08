// /Script/ControlRig.RigEventContext
// size 0x28, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Public/Rigs/RigHierarchyDefines.h

USTRUCT()
struct FRigEventContext
{

    // Not reflected:
    ERigEvent Event;  // 0x0000
    FName SourceEventName;  // 0x0004
    FRigElementKey Key;  // 0x000C
    float LocalTime;  // 0x0018
    void * Payload;  // 0x0020
};
