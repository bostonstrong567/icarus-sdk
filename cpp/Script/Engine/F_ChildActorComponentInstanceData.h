// /Script/Engine.ChildActorComponentInstanceData
// size 0xE8, declared in Engine/Source/Runtime/Engine/Classes/Components/ChildActorComponent.h

USTRUCT()
struct FChildActorComponentInstanceData : public FSceneComponentInstanceData
{
public:
    UPROPERTY() TSubclassOf<AActor> ChildActorClass;  // 0x00B8, size 0x8
    UPROPERTY() FName ChildActorName;  // 0x00C0, size 0x8
    UPROPERTY() TArray<FChildActorAttachedActorInfo> AttachedActors;  // 0x00C8, size 0x10
    TSharedPtr<FComponentInstanceDataCache,0> ComponentInstanceData;  // 0x00D8, not reflected
};
