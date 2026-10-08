// /Game/BP/Objects/World/Items/Deployables/BP_Gravestone.BP_Gravestone_C
// Derives from: AGravestoneBase > AIcarusCorpse > ASkeletalItem > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x915, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Gravestone_C : public AGravestoneBase, public IBP_TooltipWidgetInterface_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x06D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionComponent_GraveStone_C* BP_UIProjectionComponent_GraveStoneProxyMesh;  // 0x06D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* GraveStoneProxyMesh;  // 0x06E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UAudioContextComponent* AudioContext;  // 0x06E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionLocation_C* BP_UIProjectionLocation;  // 0x06F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionComponent_GraveStone_C* BP_UIProjectionComponent_GraveStone;  // 0x06F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVocalisationComponent* Vocalisation;  // 0x0700, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) FName UserId;  // 0x0708, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool IsMale;  // 0x0710, size 0x1
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FPlayerStateUpdated PlayerStateUpdated;  // 0x0718, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle SettleTimer;  // 0x0728, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxCorpseSettleTime;  // 0x0730, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FPoseSnapshot RagdollPose;  // 0x0738, size 0x38
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) FPoseSnapshot NetworkedPose;  // 0x0770, size 0x38
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool NeedsArmourUpdate;  // 0x07A8, size 0x1
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UHighlightableComponent* HighlightableComponent;  // 0x07B0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FGravestoneData TempData;  // 0x07B8, size 0xE0
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FVocalisationsRowHandle DeathVocalisation;  // 0x0898, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* RagdollAudioEvent;  // 0x08B0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float RagdollAudioUpdateFrequency;  // 0x08B8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle RagdollAudioUpdateTimer;  // 0x08C0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FName RagdollAudioSocket;  // 0x08C8, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UFMODAudioComponent* RagdollAudioComponent;  // 0x08D0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float RagdollAudioLastCollisionTime;  // 0x08D8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float RagdollAudioNoCollisionTimeoutLength;  // 0x08DC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<USkeletalMesh> TPMeshSoftReference;  // 0x08E0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector CachedBagPosition;  // 0x0908, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool StartedRagDollNoAnchor;  // 0x0914, size 0x1

    UFUNCTION(BlueprintCallable) void Apply_Cosmetics();  // named "Apply Cosmetics"
    UFUNCTION(BlueprintCallable) void AttachProjectiles(USceneComponent* CharacterRoot, AActor* ProjectileOwnerToIgnore);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void AttachProjectilesNextFrame(USceneComponent* CharacterRoot, AActor* ProjectileOwnerToIgnore);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void BeginDelayedSettle();
    UFUNCTION(BlueprintCallable) void BeginRagdoll();
    UFUNCTION() void BndEvt__SkeletalMeshRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);  // parameters 0xAC
    UFUNCTION(BlueprintCallable) void DoPoseSnapshot();
    UFUNCTION() void ExecuteUbergraph_BP_Gravestone(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ForceSettle();
    UFUNCTION(BlueprintCallable) void GetGravestoneData(FGravestoneData& Data);  // parameters 0xE0
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetGravestoneInventory(UInventory*& Inventory);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) FPoseSnapshot GetRagdollPose();  // parameters 0x38
    UFUNCTION(BlueprintCallable) void GetTooltipClassOverride(TSoftClassPtr<UHuntingWidget>& ClassOverride);  // parameters 0x28
    UFUNCTION(BlueprintCallable) void GetTooltipRenderLocation(FHitResult InteractableHit, FVector& WorldLocation) const;  // parameters 0x94
    UFUNCTION(BlueprintCallable) void HandleAssignedPlayer();
    UFUNCTION(BlueprintCallable) void HaveTerrainAnchorPositionBag();
    UFUNCTION(BlueprintImplementableEvent) void HideInstigator();
    UFUNCTION(BlueprintCallable) void InitMeshes(AIcarusPlayerCharacter* Player);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void Interaction_Loot(AActor* Instigator);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void Interaction_Revive(AActor* Instigator);  // parameters 0x8
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void NetMulticast_Unstuck(FVector NewLocation);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void OnConnectedPlayerInitialised(const FConnectedPlayer& ConnectedPlayer);  // parameters 0x38
    UFUNCTION(BlueprintCallable) void OnReloadAssignedPlayerKill();
    UFUNCTION(BlueprintImplementableEvent) void OnRep_AssignedPlayerCharacterID();
    UFUNCTION(BlueprintImplementableEvent) void OnRep_GravestoneData();
    UFUNCTION(BlueprintCallable) void OnRep_NetworkedPose();
    UFUNCTION(BlueprintImplementableEvent) void OnRep_PlayerArmour();
    UFUNCTION(BlueprintCallable) void PlayRagdollAudio(FHitResult& Hit);  // parameters 0x88
    UFUNCTION(BlueprintCallable) void PlayerStateUpdated__DelegateSignature();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Revive(float HealthRestoredPercent);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Scream();
    UFUNCTION(BlueprintCallable) void ServerHandleAssignedPlayer();
    UFUNCTION(BlueprintCallable) void SetPlayerGravestone(ABP_IcarusPlayerControllerSurvival_C* PlayerController, FPoseSnapshot DeathPose, FVector DeathVelocity);  // parameters 0x4C
    UFUNCTION(BlueprintCallable) void StopRagdollAudio();
    UFUNCTION(BlueprintCallable) void TerrainAnchorChanged();
    UFUNCTION(BlueprintCallable) void UpdateHighlightMeshes(UHighlightableComponent* Highlightable, UPrimitiveComponent* Component, bool bHighlighted);  // parameters 0x11
    UFUNCTION(BlueprintCallable) void UpdatePlayerArmour();
    UFUNCTION(BlueprintCallable) void UpdateRagdollAudio();
};
