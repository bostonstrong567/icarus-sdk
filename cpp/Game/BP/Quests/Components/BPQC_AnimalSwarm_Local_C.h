// /Game/BP/Quests/Components/BPQC_AnimalSwarm_Local.BPQC_AnimalSwarm_Local_C
// Derives from: UBPQC_AnimalSwarm_C > UActorComponent > UObject
// size 0x1E0, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBPQC_AnimalSwarm_Local_C : public UBPQC_AnimalSwarm_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x01D8, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintPure) bool CanSpawn();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQC_AnimalSwarm_Local(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetCreatureToSpawnFromAtmosphere(FAtmospheresEnum Atmosphere, FAISetupRowHandle& OutCreature);  // parameters 0x28
    UFUNCTION(BlueprintCallable) void GetFallbackCreature(FAISetupRowHandle& CreatureToSpawn);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) void ModifyAmountByAttraction(int32 RawValue, int32& ModifiedValue);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) void ModifyTimeByAttraction(float RawValue, float& ModifiedValue);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable, BlueprintPure) void Select_AITo_Spawn(FAISetupRowHandle& Output);  // parameters 0x18, named "Select AITo Spawn"
    UFUNCTION(BlueprintCallable) void SpawnCreature();
};
