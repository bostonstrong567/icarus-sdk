// /Script/ActorSequence.ActorSequenceObjectReferenceMap
// size 0x20, declared in Engine/Plugins/MovieScene/ActorSequence/Source/ActorSequence/Public/ActorSequenceObjectReference.h

USTRUCT()
struct FActorSequenceObjectReferenceMap
{
    UPROPERTY() TArray<FGuid> BindingIds;  // 0x0000, size 0x10
    UPROPERTY() TArray<FActorSequenceObjectReferences> References;  // 0x0010, size 0x10
};
