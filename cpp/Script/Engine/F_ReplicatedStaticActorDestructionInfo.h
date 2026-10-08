// /Script/Engine.ReplicatedStaticActorDestructionInfo
// size 0x38, declared in Engine/Source/Runtime/Engine/Classes/Engine/Level.h

USTRUCT()
struct FReplicatedStaticActorDestructionInfo
{
    UPROPERTY() TSubclassOf<UObject> ObjClass;  // 0x0030, size 0x8

    // Not reflected:
    FName PathName;  // 0x0000
    FString FullName;  // 0x0008
    FVector DestroyedPosition;  // 0x0018
    TWeakObjectPtr<UObject,FWeakObjectPtr> ObjOuter;  // 0x0024
};
