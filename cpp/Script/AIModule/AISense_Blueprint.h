// /Script/AIModule.AISense_Blueprint
// Derives from: UAISense > UObject
// size 0xA8, declared in Engine/Source/Runtime/AIModule/Classes/Perception/AISense_Blueprint.h

UCLASS(Abstract, Config=Engine)
class UAISense_Blueprint : public UAISense
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSubclassOf<UUserDefinedStruct> ListenerDataType;  // 0x0080, size 0x8
    UPROPERTY(BlueprintReadOnly) TArray<UAIPerceptionComponent*> ListenerContainer;  // 0x0088, size 0x10
    UPROPERTY() TArray<UAISenseEvent*> UnprocessedEvents;  // 0x0098, size 0x10

    UFUNCTION(BlueprintCallable, BlueprintPure) void GetAllListenerActors(TArray<AActor*>& ListenerActors) const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetAllListenerComponents(TArray<UAIPerceptionComponent*>& ListenerComponents) const;  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void K2_OnNewPawn(APawn* NewPawn);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void OnListenerRegistered(AActor* ActorListener, UAIPerceptionComponent* PerceptionComponent);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void OnListenerUnregistered(AActor* ActorListener, UAIPerceptionComponent* PerceptionComponent);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void OnListenerUpdated(AActor* ActorListener, UAIPerceptionComponent* PerceptionComponent);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) float OnUpdate(const TArray<UAISenseEvent*>& EventsToProcess);  // parameters 0x14
};
