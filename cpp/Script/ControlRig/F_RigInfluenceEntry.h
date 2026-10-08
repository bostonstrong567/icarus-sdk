// /Script/ControlRig.RigInfluenceEntry
// size 0x20, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Public/Rigs/RigInfluenceMap.h

USTRUCT()
struct FRigInfluenceEntry
{
    UPROPERTY() FRigElementKey Source;  // 0x0000, size 0xC
    UPROPERTY() TArray<FRigElementKey> AffectedList;  // 0x0010, size 0x10
};
