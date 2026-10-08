// /Script/Icarus.AuraManagerComponent
// Derives from: UActorComponent > UObject
// size 0x318, declared in Icarus/Source/Icarus/Modifiers/AuraManagerComponent.h

UCLASS(Config=Engine)
class UAuraManagerComponent : public UActorComponent
{
public:
    UPROPERTY() TSet<AActor*> AllPlayers;  // 0x00B0, size 0x50
    UPROPERTY() TSet<AActor*> AllNPCs;  // 0x0100, size 0x50
    UPROPERTY() TSet<AActor*> AllDeployables;  // 0x0150, size 0x50
    UPROPERTY() TMap<AActor*, FAuraInstances> AuraInstances;  // 0x01A0, size 0x50
    UPROPERTY() TMap<AActor*, FActiveModifiers> AffectedActorModifiers;  // 0x01F0, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FGameplayTagQuery PlayerTagQuery;  // 0x0240, size 0x48
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FGameplayTagQuery NPCTagQuery;  // 0x0288, size 0x48
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FGameplayTagQuery DeployableTagQuery;  // 0x02D0, size 0x48

    UFUNCTION(BlueprintCallable) void AddAura(UModifierStateComponent* ModifierComp);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void AddAuraCustomRange(UModifierStateComponent* ModifierComp, int32 Range);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CanModifierBeStacked(const FModifierStatesRowHandle& Modifier) const;  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) TArray<FFindAuraResult> GetAurasAtLocation(FVector Location) const;  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetNumAuraInstancesAffectingActor(const FModifierStatesRowHandle& ModifierFilter, AActor* InActor) const;  // parameters 0x24
    UFUNCTION(BlueprintCallable) bool ModifyAuraCustomRange(UModifierStateComponent* ModifierComp, int32 NewRange);  // parameters 0xD
    UFUNCTION() void OnAffectedActorDestroyed(AActor* DestroyedActor);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void RegisterModifiableObject(AActor* Modifiable);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void RemoveAura(UModifierStateComponent* ModifierComp);  // parameters 0x8
    UFUNCTION() void SanitiseAffectedActorModifiers();
    UFUNCTION(BlueprintCallable) void TickModifier(UModifierStateComponent* ModifierComp);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void UnregisterModifiableObject(AActor* Modifiable);  // parameters 0x8
};
