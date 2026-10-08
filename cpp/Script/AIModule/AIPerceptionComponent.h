// /Script/AIModule.AIPerceptionComponent
// Derives from: UActorComponent > UObject
// size 0x190, declared in Engine/Source/Runtime/AIModule/Classes/Perception/AIPerceptionComponent.h

UCLASS(Config=Game)
class UAIPerceptionComponent : public UActorComponent
{
public:
    UPROPERTY(EditAnywhere) TArray<UAISenseConfig*> SensesConfig;  // 0x00B0, size 0x10
    UPROPERTY(EditAnywhere) TSubclassOf<UAISense> DominantSense;  // 0x00C0, size 0x8
    UPROPERTY(Transient) AAIController* AIOwner;  // 0x00D8, size 0x8
    UPROPERTY(BlueprintAssignable) FPerceptionUpdatedDelegate OnPerceptionUpdated;  // 0x0160, size 0x10
    UPROPERTY(BlueprintAssignable) FActorPerceptionUpdatedDelegate OnTargetPerceptionUpdated;  // 0x0170, size 0x10
    UPROPERTY(BlueprintAssignable) FActorPerceptionInfoUpdatedDelegate OnTargetPerceptionInfoUpdated;  // 0x0180, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    FAINamedID<FAISenseCounter> DominantSenseID;  // 0x00C8, protected
    FPerceptionChannelWhitelist PerceptionFilter;  // 0x00E0, protected
    FAIGenericID<FPerceptionListenerCounter> PerceptionListenerId;  // 0x00E4, private
    TMap<TObjectKey<AActor>,FActorPerceptionInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<AActor>,FActorPerceptionInfo,0> > PerceptualData;  // 0x00E8, private
    TArray<UAIPerceptionComponent::FStimulusToProcess,TSizedDefaultAllocator<32> > StimuliToProcess;  // 0x0138, protected
    TArray<float,TSizedDefaultAllocator<32> > MaxActiveAge;  // 0x0148, protected
    uint32 : 1 bForgetStaleActors;  // 0x0158, private
    uint32 : 1 bCleanedUp;  // 0x0158, private

    UFUNCTION(BlueprintCallable) void ForgetAll();
    UFUNCTION(BlueprintCallable) bool GetActorsPerception(AActor* Actor, FActorPerceptionBlueprintInfo& Info);  // parameters 0x29
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetCurrentlyPerceivedActors(TSubclassOf<UAISense> SenseToUse, TArray<AActor*>& OutActors) const;  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetKnownPerceivedActors(TSubclassOf<UAISense> SenseToUse, TArray<AActor*>& OutActors) const;  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetPerceivedActors(TSubclassOf<UAISense> SenseToUse, TArray<AActor*>& OutActors) const;  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetPerceivedHostileActors(TArray<AActor*>& OutActors) const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetPerceivedHostileActorsBySense(TSubclassOf<UAISense> SenseToUse, TArray<AActor*>& OutActors) const;  // parameters 0x18
    UFUNCTION() void OnOwnerEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void RequestStimuliListenerUpdate();
    UFUNCTION(BlueprintCallable) void SetSenseEnabled(TSubclassOf<UAISense> SenseClass, bool bEnable);  // parameters 0x9

    // Virtual functions that start here:
    //   CleanUp, GetHostileActors, HandleExpiredStimulus, RefreshStimulus
};
