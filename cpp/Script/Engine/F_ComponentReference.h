// /Script/Engine.ComponentReference
// size 0x28, declared in Engine/Source/Runtime/Engine/Classes/Engine/EngineTypes.h

USTRUCT()
struct FComponentReference
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* OtherActor;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName ComponentProperty;  // 0x0008, size 0x8
    UPROPERTY() FString PathToComponent;  // 0x0010, size 0x10

    // Not reflected:
    TWeakObjectPtr<UActorComponent,FWeakObjectPtr> OverrideComponent;  // 0x0020
};
