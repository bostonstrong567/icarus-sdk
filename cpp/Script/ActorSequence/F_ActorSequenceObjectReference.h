// /Script/ActorSequence.ActorSequenceObjectReference
// size 0x28, declared in Engine/Plugins/MovieScene/ActorSequence/Source/ActorSequence/Public/ActorSequenceObjectReference.h

USTRUCT()
struct FActorSequenceObjectReference
{
    UPROPERTY() EActorSequenceObjectReferenceType Type;  // 0x0000, size 0x1
    UPROPERTY() FGuid ActorId;  // 0x0004, size 0x10
    UPROPERTY() FString PathToComponent;  // 0x0018, size 0x10
};
