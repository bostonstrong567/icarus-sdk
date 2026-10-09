// /Script/ControlRig.RigInfluenceMap
// size 0x68, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Public/Rigs/RigInfluenceMap.h

USTRUCT()
struct FRigInfluenceMap
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY() FName EventName;  // 0x0000, size 0x8
    UPROPERTY() TArray<FRigInfluenceEntry> Entries;  // 0x0008, size 0x10
    UPROPERTY() TMap<FRigElementKey, int32> KeyToIndex;  // 0x0018, size 0x50
};
