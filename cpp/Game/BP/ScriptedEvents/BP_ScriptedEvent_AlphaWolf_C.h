// /Game/BP/ScriptedEvents/BP_ScriptedEvent_AlphaWolf.BP_ScriptedEvent_AlphaWolf_C
// Derives from: AScriptedEvent > AActor > UObject
// size 0x340, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_ScriptedEvent_AlphaWolf_C : public AScriptedEvent
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0278, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FAISetupRowHandle, int32> WeightedSpawnOptions;  // 0x0280, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool FoundValidSpawnPoint;  // 0x02D0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRandomStream RandomStream;  // 0x02D4, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector SpawnLocation;  // 0x02DC, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* SelectedTarget;  // 0x02E8, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UGenericAITargetComponent* GeneratedTargetComponent;  // 0x02F0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusNPCGOAPCharacter* SpawnedAlphaWolf;  // 0x02F8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAISetupRowHandle AlphaWolfAISetup;  // 0x0300, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_SquadManager_C* SquadManager;  // 0x0318, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAISetupRowHandle FollowerWolfAISetup;  // 0x0320, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName SquadManagerBlackboardKey;  // 0x0338, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool CanPerformEvent();  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) TArray<AActor*> DetermineTargetActors();  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void EventEnd(EEventEndReason EndReason);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void EventStart();
    UFUNCTION() void ExecuteUbergraph_BP_ScriptedEvent_AlphaWolf(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetAlivePlayers(TArray<AIcarusPlayerCharacter*>& AlivePlayers);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetFollowerCount(int32& NumFollowers);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool IsEventCompleted();  // parameters 0x1
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void MULTI_SpawnedAlphaWolf(FVector Location);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void OnQueryComplete(UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus> QueryStatus);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void OnSeedUpdated(int32 Seed);  // parameters 0x4
    UFUNCTION(BlueprintCallable) FAISetupRowHandle PickNewAIToSpawn();  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetupNPC(AIcarusNPCGOAPCharacter* NPC);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool ShouldAbortEvent();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SpawnFollowers();
    UFUNCTION(BlueprintCallable) void SpawnNewNPC();
    UFUNCTION(BlueprintCallable) void SpawnedNPCDestroyed(AActor* DestroyedActor);  // parameters 0x8
};
