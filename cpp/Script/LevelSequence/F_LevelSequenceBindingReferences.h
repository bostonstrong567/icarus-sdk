// /Script/LevelSequence.LevelSequenceBindingReferences
// size 0xA0, declared in Engine/Source/Runtime/LevelSequence/Public/LevelSequenceBindingReference.h

USTRUCT()
struct FLevelSequenceBindingReferences
{
    UPROPERTY() TMap<FGuid, FLevelSequenceBindingReferenceArray> BindingIdToReferences;  // 0x0000, size 0x50
    UPROPERTY() TSet<FGuid> AnimSequenceInstances;  // 0x0050, size 0x50
};
