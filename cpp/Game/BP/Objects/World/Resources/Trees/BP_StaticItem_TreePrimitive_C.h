// /Game/BP/Objects/World/Resources/Trees/BP_StaticItem_TreePrimitive.BP_StaticItem_TreePrimitive_C
// Derives from: AStaticItem > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x838, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_StaticItem_TreePrimitive_C : public AStaticItem
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0580, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UExperienceComponent* Experience;  // 0x0588, size 0x8
    UPROPERTY() float KillFireTimeline_FireTemperatureMultiplier_A5931A634B2ED32ECBDFACA3307BB127;  // 0x0590, size 0x4
    UPROPERTY() TEnumAsByte<ETimelineDirection> KillFireTimeline__Direction_A5931A634B2ED32ECBDFACA3307BB127;  // 0x0594, size 0x1
    UPROPERTY(Instanced, BlueprintReadWrite) UTimelineComponent* KillFireTimeline;  // 0x0598, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool RequiresSubdivide;  // 0x05A0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float AngularDampingZ;  // 0x05A4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemRewardsRowHandle RewardsRowHandle;  // 0x05A8, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool SubdivideImmediately;  // 0x05C0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool SubdivideCopyMeshTransform;  // 0x05C1, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TreePrimitiveSubdivideMeshes SubdivideMeshes;  // 0x05C8, size 0x30
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FVector2D AudioCooldownLengthRange;  // 0x05F8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float AudioImpulseThreshold;  // 0x0600, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float AudioImpulseRangeMax;  // 0x0604, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float AudioCooldownEndTime;  // 0x0608, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* CollisionFMODEvent;  // 0x0610, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float HitEventsLifespan;  // 0x0618, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float DefaultMass;  // 0x061C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UFMODEvent* FMODEvent_Split;  // 0x0620, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float RewardMultiplier;  // 0x0628, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemData ScaledItem;  // 0x0630, size 0x1F0
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool SubdivideRaycastPosition;  // 0x0820, size 0x1
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) UPhysicalMaterial* PhysicalMaterialOverride;  // 0x0828, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float InfectedBarkRewardMulti;  // 0x0830, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 TotalWoodSpawnedToRouteToParent;  // 0x0834, size 0x4

    UFUNCTION() void BndEvt__StaticMeshRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);  // parameters 0xAC
    UFUNCTION(BlueprintCallable) void DisableHitEvents();
    UFUNCTION() void ExecuteUbergraph_BP_StaticItem_TreePrimitive(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GenerateCoal(int32 WoodAmount);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GenerateInfectedBark(int32 BaseWoodAmount);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GenerateNaturalResources(int32 WoodAmount);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GenerateRefinedWood(int32 WoodAmount);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Initialize(FItemRewardsRowHandle RewardsRowHandle, bool SubdivideImmediately, bool SubdivideCopyMeshTransform, TreePrimitiveSubdivideMeshes SubdivideMeshes, UStaticMeshComponent* Instigator, bool EnableHitEvents, float AngularDampingZ, float MaxHealth, bool SubdivideRaycastPosition, UPhysicalMaterial* PhysicalMaterialOverride);  // parameters 0x70
    UFUNCTION() void KillFireTimeline__FinishedFunc();
    UFUNCTION() void KillFireTimeline__UpdateFunc();
    UFUNCTION(BlueprintCallable) void LegendChainsawSetHighlight(AIcarusPlayerCharacter* Player, AIcarusItem* IcarusItem);  // parameters 0x10
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void MULTI_PlaySubdivideFX(float Mass, int32 Pieces);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnActorStateDeath(UActorState* ActorState);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnRep_PhysicalMaterialOverride();
    UFUNCTION(BlueprintCallable) void OnRep_RequiresSubdivide();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ResolveSubdivideTraits();
    UFUNCTION(BlueprintCallable) void ScaleItemReward(FItemData In, float AdditionalMultiplier, FItemData& Out);  // parameters 0x3E8
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void SetupFireParams(float FireSpread, float FireTemperature, FVector LocalFireOrigin, FVector LocalBoundsSize);  // parameters 0x20
    UFUNCTION(BlueprintCallable) FItemData TryGrantFrostedAlteration(UIcarusStatContainer* StatContainer, const FItemData& ItemData);  // parameters 0x3E8
    UFUNCTION(BlueprintCallable) void TryPlayCollisionSound(FVector Impulse, FHitResult& Hit);  // parameters 0x94
    UFUNCTION(BlueprintCallable) void TryPlaySubdivideFX();
    UFUNCTION(BlueprintCallable) void TrySubdivide();
    UFUNCTION(BlueprintCallable) void UpdateAngularDamping(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UserConstructionScript();
};
