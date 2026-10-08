// /Game/BP/Behaviours/Actionable/BP_ActionableBehaviour_Gauntlet_RockGolem_Melee.BP_ActionableBehaviour_Gauntlet_RockGolem_Melee_C
// Derives from: UBP_ActionableBehaviour_Gauntlet_C > UBP_ActionableBehaviour_Base_C > UActionableBehaviour > UTraitBehaviour > UActorComponent > UObject
// size 0x3F8, a blueprint class, blueprint

UCLASS(Transient, Config=Engine)
class UBP_ActionableBehaviour_Gauntlet_RockGolem_Melee_C : public UBP_ActionableBehaviour_Gauntlet_C, public IAmmoDisplayInterface_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x03D8, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) int32 CurrentChargeCount;  // 0x03E0, size 0x4
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) EVoxelResourceCategory CurrentChargeType;  // 0x03E4, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 LastModifierUID;  // 0x03E8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AVoxelResource* LastHitVoxelResource;  // 0x03F0, size 0x8

    UFUNCTION(BlueprintCallable) void ApplyVoxelChargeModifier();
    UFUNCTION(BlueprintCallable, Client, Reliable) void Client_WrongVoxelType();
    UFUNCTION(BlueprintCallable) void ConsumeCharge();
    UFUNCTION() void ExecuteUbergraph_BP_ActionableBehaviour_Gauntlet_RockGolem_Melee(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetCurrentAmmoInfo(TSoftObjectPtr<UTexture2D>& AmmoIcon, FText& CurrentAmmo, FText& TotalAmmo, FText& AmmoTextOverride, bool& HideReload, bool& IsFluid, FIcarusResourcesRowHandle& Resource, float& Percent);  // parameters 0x90
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void MULTI_Play_Collect_Ammo_Audio(FVector Location);  // parameters 0xC, named "MULTI_Play Collect Ammo Audio"
    UFUNCTION(BlueprintCallable) void MaxChargeCount(int32& MaxCharges) const;  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnActionHitEvent(AActor* Invoking_Actor, UPrimitiveComponent* OverlappedComponent, const FHitResult& SweepResult, UTraitBehaviour* TraitBehaviour);  // parameters 0xA0
    UFUNCTION(BlueprintCallable) void OnRep_CurrentChargeCount();
    UFUNCTION(BlueprintCallable) void OnRep_CurrentChargeType();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void ResetLastHitVoxel();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool ShouldConsumeActionInput(AActor* InvokingActor, EActionableEventType OnActionType, EActionableTrigger ActionTrigger);  // parameters 0xB
};
