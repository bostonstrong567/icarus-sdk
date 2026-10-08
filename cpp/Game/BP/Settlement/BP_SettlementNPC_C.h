// /Game/BP/Settlement/BP_SettlementNPC.BP_SettlementNPC_C
// Derives from: ASettlementNPCCharacter > AIcarusNPCCharacter > AIcarusCharacter > ACharacter > APawn > AActor > UObject
// size 0xBE9, a blueprint class, blueprint

UCLASS(Config=Game)
class ABP_SettlementNPC_C : public ASettlementNPCCharacter, public IHighlightableCustomiserInterface_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0B10, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionLocation_C* BP_UIProjectionLocation;  // 0x0B18, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionComponent_SettlementNPC_C* BP_UIProjectionComponent_SettlementNPC;  // 0x0B20, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight;  // 0x0B28, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* SK_Lantern;  // 0x0B30, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCameraComponent* Camera;  // 0x0B38, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHighlightableComponent* Highlightable;  // 0x0B40, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UInteractableComponent* Interactable;  // 0x0B48, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) TEnumAsByte<SettlementNPC_AnimState> CurrentAnimState;  // 0x0B50, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* ViewTargetActor;  // 0x0B58, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector_NetQuantize CurrentTargetLocation;  // 0x0B60, size 0xC
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) FVector_NetQuantize LastKnownTargetLocation;  // 0x0B6C, size 0xC
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool IsADS;  // 0x0B78, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSettlementNPCRolesRowHandle GuardRole;  // 0x0B7C, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSettlementNPCTask CachedCurrentTask;  // 0x0B94, size 0x54
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool UseCombatAnims;  // 0x0BE8, size 0x1

    UFUNCTION(BlueprintCallable) void AnimStateUpdated();
    UFUNCTION() void ExecuteUbergraph_BP_SettlementNPC(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FindNewViewTarget();
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) AActor* GetCurrentAnimationTarget() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetCurrentTaskMontage(UAnimMontage*& TaskMontage) const;  // parameters 0x8
    UFUNCTION(BlueprintCallable) void GetDefaultAnimState(TEnumAsByte<SettlementNPC_AnimState>& OutAnimState);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void GetDescription(FText& Description);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void GetDisplayName(FText& Name);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void GetNextMoveLocation(FVector& Out);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool GetOverrideMoveSpeedMappingMultiplier(float& OutMultiplier) const;  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) FAIRelationshipsRowHandle GetRelationshipData() const;  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsPointWithinFOV(FVector TargetLocation, float DotLimit);  // parameters 0x11
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void OnActorDeath(UActorState* ActorStateIn);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void OnAddedToSettlement(ASettlement* Settlement);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void OnCharacterDamaged(FIcarusDamagePacket DamagePacket);  // parameters 0xD8
    UFUNCTION(BlueprintImplementableEvent) void OnCurrentTaskUpdated();
    UFUNCTION(BlueprintImplementableEvent) void OnHeldItemUpdated();
    UFUNCTION(BlueprintCallable) void OnHighlightChanged(UHighlightableComponent* Highlightable, UPrimitiveComponent* Component, bool bHighlighted);  // parameters 0x11
    UFUNCTION(BlueprintCallable) void OnLoaded_1351EC27429EE53A456E08A45806914A(UObject* Loaded);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnLoaded_57A4B8AA43054B1276FD228332D70349(UObject* Loaded);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnMontageEnded(UAnimMontage* Montage, bool bInterrupted);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void OnMontageStarted(UAnimMontage* Montage);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void OnOwningSettlementReady(ASettlement* Settlement);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void OnRecordUpdated();
    UFUNCTION(BlueprintCallable) void OnRep_CurrentAnimState();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceivePossessed(AController* NewController);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void SetupAI(FAISetupRowHandle AISetupData, FEpicCreaturesRowHandle EpicCreatureSetup);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool ShouldOverrideTargetNeutrality(AActor* TargetActor, ERelationshipType& OutRelationshipType) const;  // parameters 0xA
    UFUNCTION(BlueprintCallable) void Update_Blackboard_Properties();  // named "Update Blackboard Properties"
    UFUNCTION(BlueprintCallable) void UpdateLanternAttachment();
    UFUNCTION(BlueprintCallable) void UpdateLanternVisibility();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UserConstructionScript();
};
