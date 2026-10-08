// /Game/BP/Objects/World/Resources/Nodes/BP_ResourceNodeBase.BP_ResourceNodeBase_C
// Derives from: AGenericResourceBase > AIcarusActor > AActor > UObject
// size 0x3CC, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_ResourceNodeBase_C : public AGenericResourceBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_Flammable_FLODActor_ResourceNode_C* Flammable;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* StaticMesh;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UExperienceComponent* Experience;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_HitableBehaviour_ResourceNode_C* BP_HitableBehaviour_ResourceNode;  // 0x02F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFLODActorComponent* FLODComponent;  // 0x0300, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHighlightableComponent* Highlightable;  // 0x0308, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UInteractableComponent* Interactable;  // 0x0310, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) int32 ResourceCount;  // 0x0318, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MaxResourceCount;  // 0x031C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ReplenishDelay;  // 0x0320, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle ReplenishTimer;  // 0x0328, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HasBlockingCollision;  // 0x0330, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool DestroyOnInteract;  // 0x0331, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ShouldReplenish;  // 0x0332, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemRewardsRowHandle ResourceRewardRow;  // 0x0334, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FInteractableRowHandle InteractableRowHandle;  // 0x034C, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FResourceNodeAudioDataRowHandle AudioRowHandle;  // 0x0364, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemRewardsRowHandle HitableRewardRow;  // 0x037C, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool PlayHarvestFxOnRevealing;  // 0x0394, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName HarvestFXSocket;  // 0x0398, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FStatsEnum SecondaryResourceStat;  // 0x03A0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemRewardsRowHandle SecondaryResourceRewardRow;  // 0x03B0, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float RewardsModifier;  // 0x03C8, size 0x4

    UFUNCTION() void BndEvt__FLODComponent_K2Node_ComponentBoundEvent_1_OnActorRevealing__DelegateSignature(UFLODActorComponent* Component, AActor* Actor, const FTransform& Transform);  // parameters 0x40
    UFUNCTION() void ExecuteUbergraph_BP_ResourceNodeBase(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector GetHarvestFXLocation();  // parameters 0xC
    UFUNCTION(BlueprintCallable) void HitableHarvest(AIcarusPlayerCharacter* PlayerCharacter, int32 ResourceTake, FToolTypesEnum Tooltype);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void HitableHarvest_ByNonCharacter(int32 ResourceTake, UInventoryComponent* Inventory);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void InteractHarvest(FHitResult HitResult, AIcarusPlayerCharacter* PlayerCharacter);  // parameters 0x90
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void MULTI_PlayHarvestFX(FVector Location, AIcarusPlayerCharacter* Instigator);  // parameters 0x18
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void MULTI_PlayNodeDepletedFX(FVector Location);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void OnModifiersUpdated(UModifierStateComponent* ModifiedComponent, bool Removed);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void OnRep_ResourceCount();
    UFUNCTION(BlueprintCallable) void OnResourceCountChanged();
    UFUNCTION(BlueprintCallable) void PlayHarvestFX(FVector Location, AIcarusPlayerCharacter* Instigator);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void ScaleSeeds(float SeedMultiplier, TArray<FItemData>& Items, TArray<FItemData>& Scaled);  // parameters 0x28
    UFUNCTION(BlueprintCallable) void SetHasBlockingCollision(bool HasBlockingCollision);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void TryReplenishResource();
    UFUNCTION(BlueprintCallable) void UpdateNodeVisuals(bool& Success);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UserConstructionScript();
};
