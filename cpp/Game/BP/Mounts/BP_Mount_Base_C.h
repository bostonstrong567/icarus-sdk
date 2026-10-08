// /Game/BP/Mounts/BP_Mount_Base.BP_Mount_Base_C
// Derives from: AIcarusMountCharacter > AIcarusNPCGOAPCharacter > AIcarusNPCCharacter > AIcarusCharacter > ACharacter > APawn > AActor > UObject
// size 0xF32, a blueprint class, blueprint

UCLASS(Abstract, Config=Game)
class ABP_Mount_Base_C : public AIcarusMountCharacter, public IBP_CreatureAudio_AnimNotify_Interface_C, public IPossessTargetInterface, public IBP_MountInterface_C, public IInventoryModerator, public IBP_CaveComponentInterface_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0C10, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* JuvenileSpawnLocation;  // 0x0C18, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UGeneticsComponent* Genetics;  // 0x0C20, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_JumpLerpComponent_C* BP_JumpLerpComponent;  // 0x0C28, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* PsuedoSaddle;  // 0x0C30, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionLocation_C* ProjectionLocation_Status;  // 0x0C38, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionComponent_MountStatus_C* BP_UIProjectionComponent_MountStatus;  // 0x0C40, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStomachComponent* Stomach;  // 0x0C48, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* CargoInventoryOverflow;  // 0x0C50, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USphereComponent* WeightCollider;  // 0x0C58, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_Weight_C* BP_Weight;  // 0x0C60, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_GroundSurfaceChecker_C* SurfaceChecker;  // 0x0C68, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UAIVocalisationComponent* AIVocalisation;  // 0x0C70, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UAudioOcclusionCharacterComponent* AudioOcclusionCharacter;  // 0x0C78, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_CreatureAudioComponent_C* BP_CreatureAudioComponent;  // 0x0C80, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UAudioContextCreatureComponent* AudioContextCreature;  // 0x0C88, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_Flammable_Actor_C* BP_Flammable_Actor;  // 0x0C90, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionComponent_MountTooltip_C* BP_UIProjectionComponent_MountTooltip;  // 0x0C98, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHighlightableComponent* Highlightable;  // 0x0CA0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UInteractableComponent* Interactable;  // 0x0CA8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UInventoryComponent* Inventory;  // 0x0CB0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_SwimmingComponent_C* BP_SwimmingComponent;  // 0x0CB8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCapsuleComponent* ClothAffector;  // 0x0CC0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USphereComponent* HeadBlocker;  // 0x0CC8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UGFurComponent* GFur;  // 0x0CD0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UChildActorComponent* ChildActor_Seat;  // 0x0CD8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FMontageNotify MontageNotify;  // 0x0CE0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName AttackNotify;  // 0x0CF0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FMontageComplete MontageComplete;  // 0x0CF8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EMovementState DefaultMovementState;  // 0x0D08, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EMovementState SprintingMovementState;  // 0x0D09, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UBehaviorTree* AttackBehaviour;  // 0x0D10, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UContextMenuWidget* CurrentRadialMenu;  // 0x0D18, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName ContextBehaviour_Follow;  // 0x0D20, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName ContextBehaviour_Wander;  // 0x0D28, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName ContextBehaviour_Stand;  // 0x0D30, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName ContextBehaviour_Sit;  // 0x0D38, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName ContextBehaviour_Passive;  // 0x0D40, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName ContextBehaviour_Defensive;  // 0x0D48, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName ContextBehaviour_Aggressive;  // 0x0D50, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* ViewTargetActor;  // 0x0D58, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName SaddleAttachSocketName;  // 0x0D60, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) EAIAudioState CurrentAudioState;  // 0x0D68, size 0x1
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) FSaddlesRowHandle SaddleData;  // 0x0D6C, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AController* LastController;  // 0x0D88, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName MovementStateKey;  // 0x0D90, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName CombatStateKey;  // 0x0D98, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FModifierUpdated ModifierUpdated;  // 0x0DA0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_MountPreview_C* MountPreview;  // 0x0DB0, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UUMG_UserInterface_Base_C* UserInterfaceRef;  // 0x0DB8, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UIcarusLinkedActorPanelBase* MountInventoryInterface;  // 0x0DC0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName AnchorLocationKey;  // 0x0DC8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName FootstepVfxBone_FL;  // 0x0DD0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName FootstepVfxBone_FR;  // 0x0DD8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName FootstepVfxBone_BL;  // 0x0DE0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName FootstepVfxBone_BR;  // 0x0DE8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName JumpVfxBone_Root;  // 0x0DF0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UNiagaraSystem* FrontFootVfx;  // 0x0DF8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UNiagaraSystem* RearFootVfx;  // 0x0E00, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UNiagaraSystem* JumpVfx;  // 0x0E08, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EMountMovementBehaviourState DefaultMountMovementBehaviour;  // 0x0E10, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EMountCombatBehaviourState DefaultMountCombatBehaviour;  // 0x0E11, size 0x1
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, SaveGame, BlueprintReadWrite) int32 CosmeticSkinIndex;  // 0x0E14, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool SupportsSkinVariation;  // 0x0E18, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HaveStatsUpdated;  // 0x0E19, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 UpdatedSkinIndex;  // 0x0E1C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle RetryTeleportTimer;  // 0x0E20, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LastTeleportTime;  // 0x0E28, size 0x4
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) int32 LastLevelAchieved;  // 0x0E2C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle FrozenTeleportTimer;  // 0x0E30, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EMountConsumptionBehaviourState DefaultMountConsumptionBehaviour;  // 0x0E38, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HasPerformedInitialCosmeticUpdate;  // 0x0E39, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 TempSprintSpeedStatUID;  // 0x0E3C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EMountGrazingBehaviourState DefaultMountGrazingBehaviour;  // 0x0E40, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float InitialLogicPauseTime;  // 0x0E44, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle FallingOutOfWorldTimer;  // 0x0E48, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TimeStartedFalling;  // 0x0E50, size 0x4
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool IsInCave;  // 0x0E54, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TimeSpentFalling;  // 0x0E58, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FGameplayTag, UBehaviorTree*> CachedSubtreeOverrides;  // 0x0E60, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MontagePlaySpeed;  // 0x0EB0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSubclassOf<UMatineeCameraShake> FootstepScreenShake;  // 0x0EB8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FootstepScreenShakeMinSpeed;  // 0x0EC0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FootstepInnerRadius;  // 0x0EC4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FootstepOuterRadius;  // 0x0EC8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName ActionMontageSection;  // 0x0ECC, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle AlternateAttackCooldownTimer;  // 0x0ED8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FGameplayTag, UBehaviorTree*> AdditionalDynamicSubtreeOverrides;  // 0x0EE0, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ShouldPromptForNameOnClaim;  // 0x0F30, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ShouldBroadcastChatMessageOnDeath;  // 0x0F31, size 0x1

    UFUNCTION(BlueprintCallable) void AlternateAttackCooldownElapsed();
    UFUNCTION(BlueprintCallable) void ApplySaddleFurCullingMask(TSoftObjectPtr<UTexture2D> CullingMask);  // parameters 0x28
    UFUNCTION(BlueprintCallable) void BakeInventoryPreviewToTexture(bool BakeToTemporaryTexture, UTextureRenderTarget2D*& TemporaryTexture);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool CanJumpInternal() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) void CheckMountFallingOutOfWorld();
    UFUNCTION(BlueprintCallable) void CleanupInstigatorNPC();
    UFUNCTION(BlueprintCallable) void CloseRadialMenu();
    UFUNCTION(BlueprintCallable) void CreateCargoDropBag();
    UFUNCTION(BlueprintCallable) void CreateMenuItem(AContextMenuFactory* ContextMenuFactory, FContextMenuItemData& ContextMenuItemData, int32 ItemIndex);  // parameters 0xBC
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Dismounted(AIcarusPlayerCharacter* Player);  // parameters 0x8
    UFUNCTION() void ExecuteUbergraph_BP_Mount_Base(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FindNewOwner();
    UFUNCTION(BlueprintCallable) void FindNewViewTarget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool FreezeNPC();  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) void GenerateContextMenuItemDataForCombatState(EMountCombatBehaviourState CombatState, FContextMenuItemData& ContextMenuItemData);  // parameters 0xB8
    UFUNCTION(BlueprintCallable, BlueprintPure) void GenerateContextMenuItemDataForMovementState(EMountMovementBehaviourState MovementState, FContextMenuItemData& ContextMenuItemData);  // parameters 0xB8
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) FAISetupRowHandle GetAISetupRowHandle() const;  // parameters 0x18
    UFUNCTION(BlueprintCallable) void GetAdditionalWidgetForHUD(UUserWidget*& OutUserWidget);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetCarcassStats(TArray<FIcarusStatReplicated>& Custom_Stats) const;  // parameters 0x10
    UFUNCTION(BlueprintCallable) void GetContextMenuItems(TArray<FContextMenuItemData>& MenuItems);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) AActor* GetCurrentAnimationTarget() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) FVector GetDamageSourceLocation(UAnimMontage* Montage, FName SectionName);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetDesiredCombatState(EMountCombatBehaviourState& MovementState);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetDesiredMovementState(EMountMovementBehaviourState& MovementState);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetDistanceToFollowTarget() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) UInventoryComponent* GetInventoryComponent();  // parameters 0x8
    UFUNCTION(BlueprintCallable) void GetMountCombatBehaviour(EMountCombatBehaviourState& CombatBehaviour);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void GetMountConsumptionBehaviour(EMountConsumptionBehaviourState& ConsumptionBehaviour);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void GetMountGrazingBehaviour(EMountGrazingBehaviourState& GrazingBehaviour);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void GetMountMovementBehaviour(EMountMovementBehaviourState& MovementBehaviour);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetNextToggleCombatState(EMountCombatBehaviourState& CombatState);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetNextToggleMovementState(EMountMovementBehaviourState& MovementState);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool GetPassengerSeatActors(TArray<ASeatBase*>& Seat);  // parameters 0x11
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool GetSeatActor(ASeatBase*& Seat);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void GrantBestiaryProgressOnLevel(int32 Level);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable) void InitaliseDynamicBehaviourTreeInjection();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void InitialiseBehaviourTree();
    UFUNCTION(BlueprintCallable) void InitialiseSaddle(TSubclassOf<AActor> SaddleActorClass, FItemData SaddleItem);  // parameters 0x1F8
    UFUNCTION() void InpActEvt_Crouch_K2Node_InputActionEvent_0(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_Crouch_K2Node_InputActionEvent_1(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_Sprint_K2Node_InputActionEvent_2(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_Sprint_K2Node_InputActionEvent_3(FKey Key);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsPointWithinFOV(FVector TargetLocation, float DotLimit) const;  // parameters 0x11
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool IsSlotValidForItem(UInventoryComponent* Inventory, FInventoryIDEnum InventoryID, FItemData Item, int32 SlotIndex) const;  // parameters 0x20D
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool IsThirdPersonToggleBlocked() const;  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void K2_OnMovementModeChanged(TEnumAsByte<EMovementMode> PrevMovementMode, TEnumAsByte<EMovementMode> NewMovementMode, uint8 PrevCustomMode, uint8 NewCustomMode);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Local_PlayActionMontage(UAnimMontage* Montage, float PlayRate, FName Section);  // parameters 0x14
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void MULTI_OnHurt();
    UFUNCTION(BlueprintCallable) void ModifierUpdated__DelegateSignature(UModifierStateComponent* ModifiedComponent, bool Removed);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void MontageComplete__DelegateSignature();
    UFUNCTION(BlueprintCallable) void MontageNotify__DelegateSignature(UAnimMontage* Montage, FName NotifyName);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void MountCombatBehaviourUpdated(EMountCombatBehaviourState NewCombatBehaviour);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void MountConsumptionBehaviourUpdated(EMountConsumptionBehaviourState NewConsumptionBehaviour);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void MountGrazingBehaviourUpdated(EMountGrazingBehaviourState NewGrazingBehaviour);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void MountMovementBehaviourUpdated(EMountMovementBehaviourState NewMovementBehaviour);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Mounted(AIcarusPlayerCharacter* Player);  // parameters 0x8
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void Multicast_AbortMontage(UAnimMontage* Montage);  // parameters 0x8
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void Multicast_ActorDeath();
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void Multicast_PlayActionMontage(UAnimMontage* Montage, float PlayRate, FName Section);  // parameters 0x14
    UFUNCTION(BlueprintImplementableEvent) void OnActorDeath(UActorState* ActorStateIn);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnAttackNotify(UAnimMontage* Montage, FName NotifyName);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnBakePreviewComplete(bool bSuccess);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void OnBlendOut_D92ED5DE406A623B2F92C8AE8A3BAC96(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnCharacterSlidingUpdated();
    UFUNCTION(BlueprintCallable) void OnCompleted_D92ED5DE406A623B2F92C8AE8A3BAC96(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnContextMenuItemSelected(FName ItemIdentifier, int32 ItemPayload);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void OnDisplayHidden();
    UFUNCTION(BlueprintCallable) void OnFootstepAnimNotify(TEnumAsByte<ECreatureFootstepType> FootstepType, TEnumAsByte<ECreatureFootstepDirection> FootstepDirection);  // parameters 0x2
    UFUNCTION(BlueprintCallable) void OnGeneticsUpdated();
    UFUNCTION(BlueprintCallable) void OnInterrupted_D92ED5DE406A623B2F92C8AE8A3BAC96(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnItemUpdated(UInventory* Inventory, int32 Location);  // parameters 0xC
    UFUNCTION(BlueprintImplementableEvent) void OnJumped();
    UFUNCTION(BlueprintCallable) void OnLoaded_2B8B2B624CE5F97DAE6892B71FC1EF80(UObject* Loaded);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnLoaded_2B8B2B624CE5F97DAE6892B75B49357D(UObject* Loaded);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnLoaded_4228A280491960ACB36ABABC56C2BB4C(UObject* Loaded);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnLoaded_CB2AA5F94482EB4F2280E595F48EE7C8(UObject* Loaded);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void OnModifiersUpdated(UModifierStateComponent* ModifiedComponent, bool Removed);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void OnNotifyBegin_D92ED5DE406A623B2F92C8AE8A3BAC96(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnNotifyEnd_D92ED5DE406A623B2F92C8AE8A3BAC96(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnRagdollSettled();
    UFUNCTION(BlueprintCallable) void OnRep_CosmeticSkinIndex();
    UFUNCTION(BlueprintCallable) void OnRep_CurrentAudioState();
    UFUNCTION(BlueprintCallable) void OnRep_SaddleData();
    UFUNCTION(BlueprintCallable) void OnStatContainerUpdated();
    UFUNCTION(BlueprintCallable) void OnTeleportLocationFound(UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus> QueryStatus);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void OnVocalisationAnimNotify(EAIVocalisationType VocalisationType);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void OpenMountInventory(AController* Controller);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OpenRadialBehaviourMenu(AActor* Instigator);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void OwnerCharacterUpdated();
    UFUNCTION(BlueprintCallable) void PerformAlternateAttack();
    UFUNCTION(BlueprintCallable) void PlayFootstepParticleEffects(TEnumAsByte<ECreatureFootstepType> Footstep_Type, TEnumAsByte<ECreatureFootstepDirection> Footstep_Direction);  // parameters 0x2
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void ReceiveAnyDamage(float Damage, UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);  // parameters 0x20
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void ReceivePossessed(AController* NewController);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveUnpossessed(AController* OldController);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void ResolveAudioState(EAIAudioState& State);  // parameters 0x1
    UFUNCTION(BlueprintCallable, Server, Reliable) void Server_PerformAlternateAttack();
    UFUNCTION(BlueprintCallable, Server, Reliable) void Server_PlayActionMontage(UAnimMontage* Montage, FStaminaActionCostsRowHandle StaminaCost, float PlayRate, FName Section);  // parameters 0x2C
    UFUNCTION(BlueprintCallable) void SetCaveState(bool IsInCave, AActor* CaveActor);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void SetDesiredCombatState(EMountCombatBehaviourState DesiredState);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void SetDesiredConsumptionState(EMountConsumptionBehaviourState DesiredState);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void SetDesiredGrazingState(EMountGrazingBehaviourState DesiredState);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void SetDesiredMovementState(EMountMovementBehaviourState DesiredState);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetupGeneticsSkinVariation();
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool ShouldOverrideTargetNeutrality(AActor* TargetActor, ERelationshipType& OutRelationshipType) const;  // parameters 0xA
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void SpawnHitEffects(FTransform SpawnTransform, TEnumAsByte<EPhysicalSurface> HitSurface, AActor* HitActor);  // parameters 0x40
    UFUNCTION(BlueprintCallable) void SpawnJuvenile();
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool StripItemTags(UInventoryComponent* Inventory, FInventoryIDEnum InventoryID, FItemData Item, int32 SlotIndex, FGameplayTagContainer& ItemTags) const;  // parameters 0x231
    UFUNCTION(BlueprintCallable) void SynchroniseBlackboardBehaviourState();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void TeleportToSafeLocation(const FVector& NewWorldLocation);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void TickStatUpdate();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool TryAlternateAttack();  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool TryAttack();  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool TryJump();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void TrySetupPassengerSeats();
    UFUNCTION(BlueprintCallable) void TrySetupSaddleCosmetics();
    UFUNCTION(BlueprintCallable) void TryTeleportToOwner();
    UFUNCTION(BlueprintCallable) void TryTeleportWhileFrozen();
    UFUNCTION(BlueprintCallable) void UnbindFromCosmeticStatUpdate();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool UnfreezeNPC();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void UpdateAudioState();
    UFUNCTION(BlueprintCallable) void UpdateAvoidance();
    UFUNCTION(BlueprintCallable) void UpdateBlackboardValues();
    UFUNCTION(BlueprintCallable) void UpdateCosmeticMaterials();
    UFUNCTION(BlueprintCallable) void UpdateItemOverflowTransform();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UserConstructionScript();
    UFUNCTION(BlueprintCallable) void ValidateGenetics();
};
