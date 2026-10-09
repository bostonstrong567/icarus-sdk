// /Script/Engine.ChildActorAttachedActorInfo
// size 0x40, declared in Engine/Source/Runtime/Engine/Classes/Components/ChildActorComponent.h

USTRUCT()
struct FChildActorAttachedActorInfo
{
public:
    UPROPERTY() TWeakObjectPtr<AActor> Actor;  // 0x0000, size 0x8
    UPROPERTY() FName SocketName;  // 0x0008, size 0x8
    UPROPERTY() FTransform RelativeTransform;  // 0x0010, size 0x30
};
