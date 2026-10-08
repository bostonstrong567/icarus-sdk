// /Game/BP/Objects/World/Items/Deployables/Defences/BP_Basic_Turret.BP_Basic_Turret_C
// Derives from: ABP_Deployable_PowerToggleableBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x8C0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Basic_Turret_C : public ABP_Deployable_PowerToggleableBase_C, public IAITargetable, public IInventoryModerator
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0738, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* RangeDisplay;  // 0x0740, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UChildActorComponent* PerceptionProxy;  // 0x0748, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* NPCTarget;  // 0x0750, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight;  // 0x0758, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DEP_Top_Light_Basic;  // 0x0760, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* PlacementSegment;  // 0x0768, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionLocation_C* BP_UIProjectionLocation;  // 0x0770, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Bracket;  // 0x0778, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* YawPivot;  // 0x0780, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* PitchPivot;  // 0x0788, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UGenericAITargetComponent* GenericAITarget;  // 0x0790, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCameraComponent* Camera;  // 0x0798, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UArrowComponent* Arrow;  // 0x07A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Muzzle;  // 0x07A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Gun;  // 0x07B0, size 0x8
    UPROPERTY() float RecoilTimeline_Alpha_B71F448C40E368FA50AEA1A459CC20E5;  // 0x07B8, size 0x4
    UPROPERTY() TEnumAsByte<ETimelineDirection> RecoilTimeline__Direction_B71F448C40E368FA50AEA1A459CC20E5;  // 0x07BC, size 0x1
    UPROPERTY(Instanced, BlueprintReadWrite) UTimelineComponent* RecoilTimeline;  // 0x07C0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UNiagaraSystem* FireParticle;  // 0x07C8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<AActor*> TargetsInRange;  // 0x07D0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* SelectedTarget;  // 0x07E0, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool HasAmmo;  // 0x07E8, size 0x1
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool HasTarget;  // 0x07E9, size 0x1
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool HasLock;  // 0x07EA, size 0x1
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool NoTargetsInRange;  // 0x07EB, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HasPower;  // 0x07EC, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRotator CurrentTurrentRotation;  // 0x07F0, size 0xC
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) FRotator TargetTurrentRotation;  // 0x07FC, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ShotsToFire;  // 0x0808, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MuzzleFireCoolDownTime;  // 0x080C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MuzzleIndividualShotCoolDown;  // 0x0810, size 0x4
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) int32 InventoryAmmoAmount;  // 0x0814, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FItemsStaticRowHandle> ValidAmmoTypes;  // 0x0818, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInstanceDynamic* PlacementSegmentMaterial;  // 0x0828, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTurretRowHandle TURRET_ROW_HANDLE;  // 0x0830, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MAX_MUZZLE_PITCH;  // 0x0848, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MIN_MUZZLE_PITCH;  // 0x084C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MAX_MUZZLE_YAW;  // 0x0850, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MUZZLE_MOVE_SPEED;  // 0x0854, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MUZZLE_RETURN_SPEED;  // 0x0858, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float PERMIT_BEGIN_FIRE_ANGLE;  // 0x085C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MUZZLE_BURST_FIRE_SHOTS;  // 0x0860, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MUZZLE_TARGET_CHECK_TIME;  // 0x0864, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MUZZLE_COOL_DOWN_PERIOD;  // 0x0868, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MUZZLE_BURST_FIRE_RATE;  // 0x086C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float IdleTimer;  // 0x0870, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_ProxyPerceptionPawn_C* PerceptionProxyPawn;  // 0x0878, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor LastAmmoCounterColour;  // 0x0880, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LastAmmoCounterPercent;  // 0x0890, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxDeployedYaw;  // 0x0894, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MinDeployedYaw;  // 0x0898, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxDeployedPitch;  // 0x089C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MinDeployedPitch;  // 0x08A0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UDestructibleMesh* DM_Gun;  // 0x08A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FAIRelationshipsRowHandle> HostileRelationships;  // 0x08B0, size 0x10

    UFUNCTION(BlueprintCallable) void ApplySpread(FRotator BaseDirection, FRotator& OutSpreadDirection);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void ApplyTurretStats(FItemsStaticRowHandle Ammo, FItemData& ItemData);  // parameters 0x208
    UFUNCTION(BlueprintCallable) void ClampMinMaxRotation(FRotator InRotation, FRotator& OutRotation);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void Client_UpdateTurretRotation(float DeltaTime);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ConditionalFire(float DeltaTime);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ConditionalRepTargetRotation(FRotator NewRotation);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void ConsumeAmmo();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Deployable_Interact(AActor* Interactor);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void DoUpdate();
    UFUNCTION(BlueprintCallable) void EnergyNetworkStateUpdate(bool Active);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void Event_Actor_Broken();  // named "Event Actor Broken"
    UFUNCTION() void ExecuteUbergraph_BP_Basic_Turret(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FireAtTarget();
    UFUNCTION(BlueprintCallable) void GetAvailableTargets();
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) TArray<FCriticalHitLocation> GetCriticalHitBones() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable) void GetHasLock(bool& Lock);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void GetInventoryAmmoCount(int32& OutAmmoCount);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetInventoryAmmoType(FItemsStaticRowHandle& ItemType);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void GetMaxAngleToTarget(AActor* InTarget, float& MaxAngleOut);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void GetPercentActorHealth(AActor* Actor, int32& HealthPercentOut);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) FAIRelationshipsRowHandle GetRelationshipData() const;  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) int32 GetTargetAlertness() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) FVector GetTargetLocation() const;  // parameters 0xC
    UFUNCTION(BlueprintCallable) void GetValidAmmoTypes(TArray<FItemsStaticRowHandle>& ValidAmmoTypes);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void InitialisePerceptionProxy();
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool IsActorAlive() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool IsCriticalHitDisabled() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool IsHidden() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool IsSlotValidForItem(UInventoryComponent* Inventory, FInventoryIDEnum InventoryID, FItemData Item, int32 SlotIndex) const;  // parameters 0x20D
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool IsStealthBonusDamageDisabled() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) void IsTargetableFromMaxRotation(bool Location);  // parameters 0x1
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void MultiPlayAddAmmoAudio();
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void Multicast_PlayEffects();
    UFUNCTION(BlueprintCallable) void OnDeviceStartRunning();
    UFUNCTION(BlueprintCallable) void OnDeviceStopRunning();
    UFUNCTION(BlueprintCallable) void OnDoRebind();
    UFUNCTION(BlueprintCallable) void OnFiredProjectileHit(FHitResult Hit);  // parameters 0x88
    UFUNCTION(BlueprintCallable) void OnHighlightChanged(UHighlightableComponent* Highlightable, UPrimitiveComponent* Component, bool bHighlighted);  // parameters 0x11
    UFUNCTION(BlueprintCallable) void OnInventoryItemChanged(UInventory* Inventory, int32 Location);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void OnLoaded_CF4FB6C84552BC45838031BE1D8C4A99(UObject* Loaded);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnRep_HasAmmo();
    UFUNCTION(BlueprintCallable) void OnRep_HasLock();
    UFUNCTION(BlueprintCallable) void OnRep_HasTarget();
    UFUNCTION(BlueprintCallable) void OnRep_InventoryAmmoAmount();
    UFUNCTION(BlueprintCallable) void PickNewTarget();
    UFUNCTION(BlueprintCallable) void PickTarget();
    UFUNCTION(BlueprintCallable) void PlayLockOnTargetAudio();
    UFUNCTION(BlueprintCallable) void RandomlyAdjustForPerProjectileAccuracy(FVector2D InAccuracy, FRotator InRotator, FRotator& ModRotator);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void Rebind_Turret_Stats();  // named "Rebind Turret Stats"
    UFUNCTION(BlueprintCallable) void RecalcRotationExtents();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION() void RecoilTimeline__FinishedFunc();
    UFUNCTION() void RecoilTimeline__UpdateFunc();
    UFUNCTION(BlueprintCallable) void Rotate(USceneComponent* Component, bool YawRotation, float DeltaTime);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool ShouldOverrideTargetNeutrality(AActor* TargetActor, ERelationshipType& OutRelationshipType) const;  // parameters 0xA
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool StripItemTags(UInventoryComponent* Inventory, FInventoryIDEnum InventoryID, FItemData Item, int32 SlotIndex, FGameplayTagContainer& ItemTags) const;  // parameters 0x231
    UFUNCTION(BlueprintCallable) void TargetCheck(AActor* SelfTargetable, AActor* OtherActorTargetable, bool& Success);  // parameters 0x11
    UFUNCTION(BlueprintCallable) void UpdateAmmoCounter();
    UFUNCTION(BlueprintCallable) void UpdateHasAmmo();
    UFUNCTION(BlueprintCallable) void UpdateShotTimers(float DeltaTime);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void UpdateStatusLight();
    UFUNCTION(BlueprintCallable) void UpdateTurretRotation(float DeltaTime);  // parameters 0x4
};
