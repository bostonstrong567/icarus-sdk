// /Game/BP/Objects/World/Items/Deployables/AI/BP_GOAP_Corpse.BP_GOAP_Corpse_C
// Derives from: AIcarusGOAPCorpseBase > AIcarusCorpse > ASkeletalItem > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x799, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_GOAP_Corpse_C : public AIcarusGOAPCorpseBase, public ISlotableItem, public IBP_SecondaryWidgetInterface_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x05B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* Niagara_Flies;  // 0x05B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UInventoryComponent* Inventory;  // 0x05C0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FPoseSnapshot RagdollPose;  // 0x05C8, size 0x38
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool HasBeenSkinned;  // 0x0600, size 0x1
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool CurrentlyBeingHarvested;  // 0x0601, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemsStaticRowHandle CorpseItem;  // 0x0604, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName OnBackSimulateBelowBone;  // 0x061C, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector BackPositionOffset;  // 0x0624, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRotator BackRotationOffset;  // 0x0630, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) USkeletalMesh* BonesMesh;  // 0x0640, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) USkeletalMesh* CarcassMesh;  // 0x0648, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool IsSkeleton;  // 0x0650, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UPhysicsAsset* TPCarryPhysicsAsset;  // 0x0658, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle SettleTimer;  // 0x0660, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) FPoseSnapshot NetworkedPose;  // 0x0668, size 0x38
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) float MaxCorpseSettleTime;  // 0x06A0, size 0x4
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) FVector HackyFixForClients;  // 0x06A4, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UPhysicsAsset* FPCarryPhysicsAsset;  // 0x06B0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UAnimSequence* TPCarryAnim_CHA;  // 0x06B8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* HarvestBonesSound;  // 0x06C0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsBabyAnimal;  // 0x06C8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FItemData> HittableRewards;  // 0x06D0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<int32> RewardCount;  // 0x06E0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<int32> MaxCount;  // 0x06F0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusPlayerCharacter* LastInteractPlayer;  // 0x0700, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle AttachProjectilesTimer;  // 0x0708, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FItemData> Projectiles;  // 0x0710, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool EmptyCorpseWhenFinishedEating;  // 0x0720, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle SettleTickTimer;  // 0x0728, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInstance* CarcassGfurMatOverride;  // 0x0730, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTransform SlotableTransformRelativeOffset;  // 0x0740, size 0x30
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UNiagaraComponent* ExoticParticleSystem;  // 0x0770, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool PopulatedContents;  // 0x0778, size 0x1
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, SaveGame, BlueprintReadWrite) int32 CosmeticSkinIndex;  // 0x077C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemRewardsRowHandle BlackmarketRewards;  // 0x0780, size 0x18
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool AddDecayingCorpseModifier;  // 0x0798, size 0x1

    UFUNCTION(BlueprintCallable) void AddSessionFlagItems(TArray<FItemData>& Items);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void ApplyRottingModifier();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool AttachActorToSelf(AActor* AttachedActor);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void AttachedActorPickedUp(AIcarusItem* Item);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void BeginDelayedSettle();
    UFUNCTION(BlueprintCallable) void ConvertBones_LeatherToCarbonPaste(TArray<FItemData>& Items, TArray<FItemData>& Output);  // parameters 0x20, named "ConvertBones&LeatherToCarbonPaste"
    UFUNCTION(BlueprintCallable) void EmptyCorpse();
    UFUNCTION() void ExecuteUbergraph_BP_GOAP_Corpse(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ForceSettle();
    UFUNCTION(BlueprintCallable) void GenerateItem(FItemTemplateRowHandle Item, int32 Amount, FItemData& OutputItem);  // parameters 0x210
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) int32 GetNextUID();  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) FPoseSnapshot GetRagdollPose();  // parameters 0x38
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) void GetSpawnTransformOffset(FTransform& OutTransformOffset) const;  // parameters 0x30
    UFUNCTION(BlueprintCallable) void GetWidgetClass(TSubclassOf<UUserWidget>& Widget);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void HarvestBones(AIcarusPlayerController* PlayerController, float DamagePercent);  // parameters 0xC
    UFUNCTION(BlueprintImplementableEvent) void HideInstigator();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void InitialiseAttachedActors();
    UFUNCTION(BlueprintCallable) void IsSkeletonUpdated();
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void MULTI_PlayPickupFX(AIcarusPlayerCharacter* PickingUpPlayer);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnCorpseFocused(bool IsThirdPerson);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void OnDamaged(UActorState* ActorState, int32 DamageTaken, const FDamageEvent& DamageEvent, AController* Instigator, AActor* DamageCauser);  // parameters 0x30
    UFUNCTION(BlueprintCallable) void OnInstigatorEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void OnItemRemovedVerbose(UInventory* Inventory, int32 Location, const FItemData& Item);  // parameters 0x200
    UFUNCTION(BlueprintCallable) void OnRep_CosmeticSkinIndex();
    UFUNCTION(BlueprintCallable) void OnRep_HackyFixForClients();
    UFUNCTION(BlueprintCallable) void OnRep_HasBeenSkinned();
    UFUNCTION(BlueprintCallable) void OnRep_IsSkeleton();
    UFUNCTION(BlueprintCallable) void OnRep_NetworkedPose();
    UFUNCTION(BlueprintCallable) void OnSkinnedStateUpdated();
    UFUNCTION(BlueprintCallable) void PickupCorpse(ABP_IcarusPlayerCharacterSurvival_C* TargetPlayer);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void PlayBonesFullyHarvestedSound();
    UFUNCTION(BlueprintCallable) void PlayHarvestBonesEffects();
    UFUNCTION(BlueprintCallable) void PlayPickedUpSound(AIcarusPlayerCharacter* PickingUpPlayer);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void Populate_Contents(float Multiplier, AIcarusPlayerCharacter* Player, bool ForcePopulateCorpse);  // parameters 0x11, named "Populate Contents"
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SettleTick();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void SetupCorpseSettleTime(float NewMaxCorpseSettleTime);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void TryGenerateChilledAlteration(UIcarusStatContainer* StatContainer, FItemData ReturnValue1, FItemData& ItemData);  // parameters 0x3E8
    UFUNCTION(BlueprintCallable) void TryInitExoticFX();
    UFUNCTION(BlueprintCallable) void UpdateCosmeticMaterials();
    UFUNCTION(BlueprintCallable) void UpdateSkeletalMeshCarryPhysics(USkeletalMeshComponent* SkeletalMeshComponent);  // parameters 0x8
};
