// /Script/ControlRig.CachedRigElement
// size 0x14, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Public/Rigs/RigHierarchyCache.h

USTRUCT()
struct FCachedRigElement
{
    UPROPERTY() FRigElementKey Key;  // 0x0000, size 0xC
    UPROPERTY() uint16 Index;  // 0x000C, size 0x2
    UPROPERTY() int32 ContainerVersion;  // 0x0010, size 0x4
};
