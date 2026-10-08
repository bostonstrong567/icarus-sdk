// /Game/BP/Building/SnowSystem/BPC_AccumulationComponent.BPC_AccumulationComponent_C
// Derives from: UActorComponent > UObject
// size 0xE1, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBPC_AccumulationComponent_C : public UActorComponent
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00B0, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) TEnumAsByte<EAccumulationType> AccumulationType;  // 0x00B8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle ClearTimer;  // 0x00C0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool RecentlyAdded;  // 0x00C8, size 0x1
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) float Amount;  // 0x00CC, size 0x4
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool Destroying;  // 0x00D0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ClearedDelay;  // 0x00D4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxFlatRoofAmount;  // 0x00D8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float BuildingAngleClampModifier;  // 0x00DC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool BuildUpEnabled;  // 0x00E0, size 0x1

    UFUNCTION(BlueprintCallable) void ClearEvent();
    UFUNCTION() void ExecuteUbergraph_BPC_AccumulationComponent(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FixTag(FGameplayTagContainer& TagContainer, FGameplayTag Tag, bool Add);  // parameters 0x29
    UFUNCTION(BlueprintCallable, NetMulticast) void Multicast_SpawnEffect();
    UFUNCTION(BlueprintCallable) void OnRep_Destroying();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x1
    UFUNCTION(BlueprintCallable, Server, Reliable) void ServerClear();
    UFUNCTION(BlueprintCallable) void ServerModifyAmount(float Delta, TEnumAsByte<EAccumulationType> AccumulationType);  // parameters 0x5
    UFUNCTION(BlueprintCallable) void SpawnDestructionEffects();
    UFUNCTION(BlueprintCallable, Server, Reliable) void TriggerClearTimer();
    UFUNCTION(BlueprintCallable) void UpdateAmount(float Amount);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void UpdateType(TEnumAsByte<EAccumulationType> AccumulationType);  // parameters 0x1
};
