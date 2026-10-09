// /Script/Engine.ReplicatedStaticActorDestructionInfo
// size 0x38, declared in Engine/Source/Runtime/Engine/Classes/Engine/Level.h

USTRUCT()
struct FReplicatedStaticActorDestructionInfo
{
public:
    FName PathName;  // 0x0000, not reflected
    FString FullName;  // 0x0008, not reflected
    FVector DestroyedPosition;  // 0x0018, not reflected
    TWeakObjectPtr<UObject,FWeakObjectPtr> ObjOuter;  // 0x0024, not reflected
    UPROPERTY() TSubclassOf<UObject> ObjClass;  // 0x0030, size 0x8
};
