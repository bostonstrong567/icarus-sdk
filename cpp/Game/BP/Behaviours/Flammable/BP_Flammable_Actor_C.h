// /Game/BP/Behaviours/Flammable/BP_Flammable_Actor.BP_Flammable_Actor_C
// Derives from: UFlammableActor > UFlammableComponent > UTraitComponent > UActorComponent > UObject
// size 0x12C, a blueprint class, blueprint

UCLASS(EditInlineNew, Config=Engine)
class UBP_Flammable_Actor_C : public UFlammableActor
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0100, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) int32 ModifierUID;  // 0x0108, size 0x4
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UThermalComponent* ThermalComponent;  // 0x0110, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ModifierTime;  // 0x0118, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool PersistentFire;  // 0x011C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ShouldInformSprinkers;  // 0x011D, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool InformedSprinker;  // 0x011E, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ReinformSprinklerTime;  // 0x0120, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LastReinformSprinklerTime;  // 0x0124, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SprinklerInformRange;  // 0x0128, size 0x4

    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool CanPropagateToTarget(FFlammableTargetIgnite Target) const;  // parameters 0x31
    UFUNCTION() void ExecuteUbergraph_BP_Flammable_Actor(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void InformAllSprinklers();
    UFUNCTION(BlueprintCallable, BlueprintPure) void IsPersistent(bool& Value);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void OnFlammableInstanceAttached(UFlammableInstance* Instance);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void OnFlammableInstanceDetached(UFlammableInstance* Instance);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnFlammableInstanceState_Combusting_Enter(UFlammableInstance* Instance, UFlammableState* State);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnFlammableInstanceState_Combusting_Exit(UFlammableInstance* Instance, UFlammableState* State);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnFlammableInstanceState_Combusting_Tick(UFlammableInstance* Instance, UFlammableState* State, float DeltaSeconds);  // parameters 0x14
    UFUNCTION(BlueprintCallable) void OnModifierUpdated(UModifierStateComponent* Component, bool bRemoved);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void SetupCosmetics();
    UFUNCTION(BlueprintCallable) void TeardownCosmetics();
};
