// /Game/BP/Quests/Components/BPQC_HordeMode.BPQC_HordeMode_C
// Derives from: UActorComponent > UObject
// size 0x18C, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBPQC_HordeMode_C : public UActorComponent
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00B0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<ABP_IcarusNPCGOAPCharacter_C*> NPCs;  // 0x00B8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* Target;  // 0x00C8, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) FHordeRowHandle Horde_Setup;  // 0x00D0, size 0x18, named "Horde Setup"
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) float Multiplier;  // 0x00E8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FHordeWaveRowHandle Current_Wave;  // 0x00EC, size 0x18, named "Current Wave"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<float> Next_Spawn;  // 0x0108, size 0x10, named "Next Spawn"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<int32> Number_Spawned;  // 0x0118, size 0x10, named "Number Spawned"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<bool> Spawn_Complete;  // 0x0128, size 0x10, named "Spawn Complete"
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) int32 Current_Wave_Index;  // 0x0138, size 0x4, named "Current Wave Index"
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FHordeComplete HordeComplete;  // 0x0140, size 0x10
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) int32 Killed;  // 0x0150, size 0x4
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) int32 Total;  // 0x0154, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<AActor*> SpawnLocations;  // 0x0158, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 TotalNumberSpawned;  // 0x0168, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaximumQuestMarkerSpawnDistance;  // 0x016C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Current;  // 0x0170, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<int32> PerCreatureTotalSpawnCount;  // 0x0178, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DelayBetweenSimultaneousSpawns;  // 0x0188, size 0x4

    UFUNCTION(BlueprintCallable) void AngerNPC(AIcarusNPCGOAPCharacter* NPC);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void Check_Complete(bool& Complete);  // parameters 0x1, named "Check Complete"
    UFUNCTION(BlueprintCallable) void Check_Spawn(float Delta);  // parameters 0x4, named "Check Spawn"
    UFUNCTION() void ExecuteUbergraph_BPQC_HordeMode(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetOriginForSpawnEQS(FVector& Origin, bool& IsQuestMarker) const;  // parameters 0xD
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetProgress(float& Progress);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetSimultaneousNumberOfAIToSpawn(FHordeCreatureSetup HordeCreature, int32& ToSpawn) const;  // parameters 0xA4
    UFUNCTION(BlueprintCallable) void GetTimeBetweenSpawns(FHordeCreatureSetup HordeCreature, float& TimeBetween) const;  // parameters 0xA4
    UFUNCTION(BlueprintCallable) void GetTotalNumberToSpawn(FHordeCreatureSetup HordeCreature, int32& TotalSpawnNum) const;  // parameters 0xA4
    UFUNCTION(BlueprintCallable) void HordeComplete__DelegateSignature();
    UFUNCTION(BlueprintCallable) void On_Creature_Death(UActorState* ActorState);  // parameters 0x8, named "On Creature Death"
    UFUNCTION(BlueprintCallable) void On_Creature_End_Play(AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x9, named "On Creature End Play"
    UFUNCTION(BlueprintCallable) void On_Creature_Spawned(ABP_IcarusNPCGOAPCharacter_C* NPC);  // parameters 0x8, named "On Creature Spawned"
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Stop_Horde();  // named "Stop Horde"
    UFUNCTION(BlueprintCallable) void Trigger_Horde(FHordeRowHandle HordeSetup, float Multiplier);  // parameters 0x1C, named "Trigger Horde"
    UFUNCTION(BlueprintCallable) void TriggerNextWave(bool& Complete);  // parameters 0x1
};
