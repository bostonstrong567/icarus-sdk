// /Script/Icarus.ModifierStateComponent
// Derives from: UActorComponent > UObject
// size 0x3C8, declared in Icarus/Source/Icarus/Modifiers/ModifierStateComponent.h

UCLASS(Config=Engine)
class UModifierStateComponent : public UActorComponent
{
public:
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) FModifierStatesRowHandle DataRowHandleNew;  // 0x00B4, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AController* Instigator;  // 0x00D0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* Causer;  // 0x00D8, size 0x8
    UPROPERTY(Replicated, ReplicatedUsing, BlueprintReadOnly) AActor* ReplicatedOwner;  // 0x00E0, size 0x8
    UPROPERTY(BlueprintReadOnly) TScriptInterface<IModifiableInterface> OwningModifiableInterface;  // 0x00E8, size 0x10
    UPROPERTY(Replicated, BlueprintReadOnly) int32 ModifierUID;  // 0x00F8, size 0x4
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) USceneComponent* CosmeticComponent;  // 0x0100, size 0x8
    UPROPERTY(Replicated, BlueprintReadOnly) float ModifierLifeTime;  // 0x0108, size 0x4
    UPROPERTY() float CachedModifierLifeTimeModifier;  // 0x010C, size 0x4
    UPROPERTY(BlueprintReadOnly) float RemainingTime;  // 0x0110, size 0x4
    UPROPERTY() int32 InitialEffectivenessModifier;  // 0x0114, size 0x4
    UPROPERTY() FStatsEnum AuraGrantedEffectEffectivenessModifier;  // 0x0118, size 0x10
    UPROPERTY(Replicated, ReplicatedUsing, BlueprintReadOnly) int32 CachedFinalEffectiveness;  // 0x0128, size 0x4
    UPROPERTY(BlueprintAssignable) FOnModifierUpdated OnModifierUpdated;  // 0x012C, size 0x1
    UPROPERTY(BlueprintAssignable) FModifierLifetimeUpdated OnModifierLifetimeUpdated;  // 0x012D, size 0x1
    UPROPERTY(BlueprintAssignable) FOnEffectivenessUpdated OnModifierEffectivenessUpdated;  // 0x0130, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FModifierStateData CachedModifierStateData;  // 0x0140, size 0x268
    UPROPERTY(Replicated, ReplicatedUsing) uint16 ReplicatedRemainingTime;  // 0x03BC, size 0x2

    // Not reflected: the engine's scripting cannot see these.
    float LastHighFrequencyTickTime;  // 0x00B0, private
    FTimerHandle DestroyTimerHandle;  // 0x03A8, private
    bool HasInitialised;  // 0x03B0, private
    float CurrentModifierTickTime;  // 0x03B4, private
    float CurrentEscalationTickTime;  // 0x03B8, private
    FTimerHandle ModifierTickHandle;  // 0x03C0, private

    UFUNCTION(BlueprintNativeEvent) bool CanEsculate();  // parameters 0x1
    UFUNCTION(BlueprintNativeEvent) bool CheckTickConditions();  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool DoesMatchTagQuery() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) float GetCurrentLifetimeMultiplier();  // parameters 0x4
    UFUNCTION(BlueprintCallable) int32 GetCurrentModifierEffectiveness();  // parameters 0x4
    UFUNCTION(BlueprintCallable) FModifierStateSaveData GetModifierSaveData();  // parameters 0x18
    UFUNCTION(BlueprintCallable) FModifierStateData GetModifierStateData();  // parameters 0x268
    UFUNCTION() void HighFrequencyTick();
    UFUNCTION(BlueprintNativeEvent) void InitComponent();
    UFUNCTION(BlueprintNativeEvent) bool ModifierApplied();  // parameters 0x1
    UFUNCTION(BlueprintNativeEvent) bool ModifierRemoved();  // parameters 0x1
    UFUNCTION(BlueprintNativeEvent) void ModifierTick(float DeltaTime);  // parameters 0x4
    UFUNCTION() void OnRep_CachedFinalEffectiveness();
    UFUNCTION() void OnRep_DataRowHandle();
    UFUNCTION() void OnRep_RemainingTime();
    UFUNCTION() void OnRep_ReplicatedOwningActor();
    UFUNCTION() void OnStatContainerUpdated();
    UFUNCTION(BlueprintCallable) void RefreshLifetime();
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 ScaleByEffectiveness(int32 Value) const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 ScaleStatByEffectiveness(FStatsEnum Stat, int32 Value) const;  // parameters 0x18
    UFUNCTION(BlueprintCallable) void SetInitialModifierEffectiveness(int32 InitialEffectiveness);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetModifierLifeTime(float LifeTime);  // parameters 0x4

    // Virtual functions that start here:
    //   CanEsculate_Implementation, CheckTickConditions_Implementation, InitComponent_Implementation
    //   ModifierApplied_Implementation, ModifierRemoved_Implementation, ModifierTick_Implementation
    //   UpdateStats
};
