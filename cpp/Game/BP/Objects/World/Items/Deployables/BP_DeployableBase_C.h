// /Game/BP/Objects/World/Items/Deployables/BP_DeployableBase.BP_DeployableBase_C
// Derives from: ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x722, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_DeployableBase_C : public ADeployable, public IBP_CaveComponentInterface_C, public IBP_SecondaryWidgetInterface_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x05C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SphereHelper_Crude_Oil;  // 0x05C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusSplineConnectionComponent_Crude_Oil_C* BP_IcarusSplineConnectionComponent_Crude_Oil;  // 0x05D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* AudioLocation;  // 0x05D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SphereHelper_Fuel;  // 0x05E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SphereHelper_Electric;  // 0x05E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SphereHelper_Water;  // 0x05F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusSplineConnectionComponent_Fuel_C* BP_IcarusSplineConnectionComponent_Fuel;  // 0x05F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusSplineConnectionComponent_Electric_C* BP_IcarusSplineConnectionComponent_Electric;  // 0x0600, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusSplineConnectionComponent_Water_C* BP_IcarusSplineConnectionComponent_Water;  // 0x0608, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* SplineConnectors;  // 0x0610, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UShelteredModifierComponent* ShelteredModifier;  // 0x0618, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UAudioContextComponent* AudioContext;  // 0x0620, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBoxComponent* WeightColliderBox;  // 0x0628, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* ProxyMeshes;  // 0x0630, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_ShelteredComponent_C* BP_ShelteredComponent;  // 0x0638, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* DeployableSM;  // 0x0640, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* DeployableSK;  // 0x0648, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 LastHealth;  // 0x0650, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LastShelter;  // 0x0654, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UFMODEvent* DamagedAudio;  // 0x0658, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UFMODEvent* BrokenAudio;  // 0x0660, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UNiagaraSystem* DestructionParticle;  // 0x0668, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UDestructibleMesh* DestructibleMesh;  // 0x0670, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) FTransform RelativeTransform;  // 0x0680, size 0x30
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool OverflowBagHandled;  // 0x06B0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float AudioOcclusion;  // 0x06B4, size 0x4
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool IsInteractedWith;  // 0x06B8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSet<AActor*> CurrentInteractors;  // 0x06C0, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FVector ItemSlottedAudioLocationOffset;  // 0x0710, size 0xC
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool GeneratorStateActive;  // 0x071C, size 0x1
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool ProcessorStateActive;  // 0x071D, size 0x1
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool ServerIsInCave;  // 0x071E, size 0x1
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool InvolvedInQuest;  // 0x071F, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Include_Self;  // 0x0720, size 0x1, named "Include Self"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool CustomHighlightableSetup;  // 0x0721, size 0x1

    UFUNCTION(BlueprintCallable) void Clear_Weather_Resource_Modifiers();  // named "Clear Weather Resource Modifiers"
    UFUNCTION(BlueprintCallable) void CreateOverflowBag(bool IncludeSelf, EIcarusActorDestroyReason DestroyReason);  // parameters 0x2
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Deployable_Interact(AActor* Interactor);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void Deployable_Pickup(AActor* Instigator, bool& PickedUp);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Deployable_StopInteract(AActor* Interactor);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void DestroyIcarusActorInternal(EIcarusActorDestroyReason Reason);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void Event_Actor_Broken();  // named "Event Actor Broken"
    UFUNCTION(BlueprintCallable) void Event_Damaged(UActorState* ActorState, int32 DamageTaken, const FDamageEvent& DamageEvent, AController* Instigator, AActor* DamageCauser);  // parameters 0x30, named "Event Damaged"
    UFUNCTION(BlueprintCallable) void EventFoundationDestroyed(ABuildingBase* Building, EBuildingDestroyReason DestroyReason);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void EventFoundationReplaced(ABuildingBase* NewBuilding);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void EventItemAddedToSlot(FVector Slot, AIcarusItem* NewItem);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void EventOnDestroyed(AActor* DestroyedActor);  // parameters 0x8
    UFUNCTION() void ExecuteUbergraph_BP_DeployableBase(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GeneratorStateUpdate(bool Active);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void GetDeployableSetup(FDeployableSetupRowHandle& DeployableSetup);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetDestructibleActorSpawnTransform(FTransform& SpawnTransform) const;  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool GetIsInCave() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) void GetWidgetClass(TSubclassOf<UUserWidget>& Widget);  // parameters 0x8
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable, BlueprintPure) void IsFunctional(bool& bFunctional);  // parameters 0x1
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void MULTI_BrokenEffects();
    UFUNCTION(BlueprintCallable, NetMulticast) void MULTI_ItemAddedToSlot(FVector SlotLocation, FItemsStaticRowHandle Item);  // parameters 0x24
    UFUNCTION(BlueprintCallable, NetMulticast) void MULTI_OnItemVacuumed(FItemsStaticRowHandle Item);  // parameters 0x18
    UFUNCTION(BlueprintCallable, NetMulticast) void MULTI_OnRepaired();
    UFUNCTION(BlueprintCallable) void OnBecomeInteractedWith();
    UFUNCTION(BlueprintCallable) void OnGeneratorActiveStateUpdated(bool IsActive);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void OnNoLongerInteractedWith();
    UFUNCTION(BlueprintCallable) void OnProcessorStateUpdated(bool bIsActive);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void OnRep_GeneratorStateActive();
    UFUNCTION(BlueprintCallable) void OnRep_IsInteractedWith();
    UFUNCTION(BlueprintCallable) void OnRep_ProcessorStateActive();
    UFUNCTION(BlueprintImplementableEvent) void OnRestoreFoundationFromDatabase(AIcarusActor* FoundationFromDatabase);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void PlayBrokenAudio();
    UFUNCTION(BlueprintCallable) void PlayDamagedAudio(UActorState* ActorState, int32 DamageTaken, EIcarusDamageType DamageType);  // parameters 0xD
    UFUNCTION(BlueprintCallable) void PlayItemAddedAudio(FItemsStaticRowHandle Item);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void PlayItemSlottedAudio(FVector Location, FItemsStaticRowHandle Item);  // parameters 0x24
    UFUNCTION(BlueprintCallable) void PlayRepairedAudio();
    UFUNCTION(BlueprintCallable) void ProcessorStateUpdate(bool Active);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveDestroyed();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void RefreshFoundationBinds(AActor* New_Foundation);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void RepairObject(AIcarusPlayerCharacter* Player);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetCaveState(bool IsInCave, AActor* CaveActor);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetComponentAndChildrenMobility(USceneComponent* Component, TEnumAsByte<EComponentMobility> Mobility);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void SetNewFoundationActor(AActor* NewFoundation);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void UpdateHighlightable(UHighlightableComponent* Highlightable, UPrimitiveComponent* Component, bool bHighlighted);  // parameters 0x11
    UFUNCTION(BlueprintCallable) void VacuumItems(AActor* Instigator, FItemsStaticRowHandle ItemsStaticRowHandle, int32 Count, FInventoryIDEnum InventoryId);  // parameters 0x38
    UFUNCTION(BlueprintCallable) void Zero_Fillable_Stored();  // named "Zero Fillable Stored"
};
