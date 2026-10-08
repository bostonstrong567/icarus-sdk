// /Script/ControlRig.RigInfluenceMapPerEvent
// size 0x60, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Public/Rigs/RigInfluenceMap.h

USTRUCT()
struct FRigInfluenceMapPerEvent
{
    UPROPERTY() TArray<FRigInfluenceMap> Maps;  // 0x0000, size 0x10
    UPROPERTY() TMap<FName, int32> EventToIndex;  // 0x0010, size 0x50
};
