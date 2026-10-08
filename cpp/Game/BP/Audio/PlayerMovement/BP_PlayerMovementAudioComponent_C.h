// /Game/BP/Audio/PlayerMovement/BP_PlayerMovementAudioComponent.BP_PlayerMovementAudioComponent_C
// Derives from: UPlayerMovementAudioComponent > UActorComponent > UObject
// size 0x319, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_PlayerMovementAudioComponent_C : public UPlayerMovementAudioComponent
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00B8, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) USkeletalMeshComponent* SkeletalMesh;  // 0x00C0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FRuntimeFloatCurve DummyCustomCurve;  // 0x00C8, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TArray<FBoneAudioSetting> BoneSettings;  // 0x0150, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FName BackpackAttachPoint;  // 0x0160, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool Debug;  // 0x0168, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FDebugFloatHistory> DebugFloatHistory;  // 0x0170, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FVector2D DebugWindowSize;  // 0x0180, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TArray<FVector> DebugOffsetsFromPlayer;  // 0x0188, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FBoneAudio> BoneAudio;  // 0x0198, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool BoneAudioEnabled;  // 0x01A8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_IcarusPlayerCharacterSurvival_C* Player;  // 0x01B0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FName FocusedItemAttachPoint;  // 0x01B8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FName WorldMovementAttachPoint;  // 0x01C0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* WorldMovementEvent;  // 0x01C8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* EnterWaterEvent;  // 0x01D0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* EnterLavaEvent;  // 0x01D8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* ExitWaterEvent;  // 0x01E0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* StartSwimmingEvent;  // 0x01E8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* StopSwimmingEvent;  // 0x01F0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 ChestSlotIndex;  // 0x01F8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 PantsSlotIndex;  // 0x01FC, size 0x4
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) USkeletalMeshComponent* FPMesh;  // 0x0200, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UFMODAudioComponent* WorldMovementComponent;  // 0x0208, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UFMODEvent* BackpackFootstepEvent;  // 0x0210, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) FItemAudioDataRowHandle BackpackRowHandle;  // 0x0218, size 0x18
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) FItemAudioDataRowHandle UtilityRowHandle;  // 0x0230, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UFMODEvent* FocusedItemFootstepEvent;  // 0x0248, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool PlayerOnGround;  // 0x0250, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool PlayerSwimming;  // 0x0251, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool PlayerInWater;  // 0x0252, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool PlayerIsOnMount;  // 0x0253, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool InUpdateRange;  // 0x0254, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 BackpackSlotIndex;  // 0x0258, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float UpdateDistanceThresholdSquared;  // 0x025C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsLocalPlayer;  // 0x0260, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float MaxWaterDepth;  // 0x0264, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EPlayerFoliageFMODParam CurrentFoliageType;  // 0x0268, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<EPhysicalSurface> CurrentWaterType;  // 0x0269, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LastEnteredWaterTime;  // 0x026C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MinTimeInWaterToPlaySwimSound;  // 0x0270, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float SwimmingChangedCooldownLength;  // 0x0274, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SwimmingChangedCooldownEndTime;  // 0x0278, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FVector WaterImmersionTraceStartOffset;  // 0x027C, size 0xC
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) FArmourSetsEnum ChestArmourType;  // 0x0288, size 0x10
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) FArmourSetsEnum LegsArmourType;  // 0x0298, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float FoliageTraceRadiusBuffer;  // 0x02A8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float FoliageCheckFrequencyLocalPlayer;  // 0x02AC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float FoliageCheckFrequencyOtherPlayer;  // 0x02B0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle ClothCollisionUpdateTimerHandle;  // 0x02B8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float HighestClothHit;  // 0x02C0, size 0x4
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UFMODAudioComponent* ClothHitAudioComponent;  // 0x02C8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* ClothCollisionFMODEvent;  // 0x02D0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FVector2D ClothHitRange;  // 0x02D8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float ClothCollisionUpdateFrequency;  // 0x02E0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* LadderFootFMODEvent;  // 0x02E8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* LadderHandFMODEvent;  // 0x02F0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LastLadderPosition;  // 0x02F8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UBP_LadderClimbAudioDataBase_C* LadderNotifyData;  // 0x0300, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FName FocusedItemFootstepAnimSoundName;  // 0x0308, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* PlayerEnterSaddleSound;  // 0x0310, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EWaterStoredFMODParam Water_Stored_Value;  // 0x0318, size 0x1, named "Water Stored Value"

    UFUNCTION(BlueprintCallable) void CheckForFakeAnimNotifies();
    UFUNCTION(BlueprintCallable) void DistanceCheck();
    UFUNCTION() void ExecuteUbergraph_BP_PlayerMovementAudioComponent(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetEnterWaterEvent(TEnumAsByte<EPhysicalSurface> Surface, UFMODEvent*& Event);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void GetFoliageEnumFromTagContainer(FGameplayTagContainer TagContainer, EPlayerFoliageFMODParam& FoliageType);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetSocketForAppendage(TEnumAsByte<EAudioPlayerAppendageType> Appendage, FName& SocketName);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void Initialise();
    UFUNCTION(BlueprintCallable) void InitialiseBoneAudio();
    UFUNCTION(BlueprintCallable) void OnBackpackItemChanged(FItemsStaticRowHandle Item);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void OnClothCollision(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);  // parameters 0xAC
    UFUNCTION(BlueprintCallable) void OnConnectedPlayerInitialised(const FConnectedPlayer& ConnectedPlayer);  // parameters 0x38
    UFUNCTION(BlueprintCallable) void OnEquipmentUpdated(UInventory* Inventory, int32 Location);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void OnFocusedItemUpdated(AIcarusItem* FocusedItem);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnFootstep(TEnumAsByte<EFootstepType> FootstepType, TEnumAsByte<EPlayerAudioStance> PlayerStance);  // parameters 0x2
    UFUNCTION(BlueprintCallable) void OnPlayerDeath(UActorState* ActorState);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnRep_BackpackRowHandle();
    UFUNCTION(BlueprintCallable) void OnRep_ChestArmourType();
    UFUNCTION(BlueprintCallable) void OnRep_LegsArmourType();
    UFUNCTION(BlueprintCallable) void OnRep_UtilityRowHandle();
    UFUNCTION(BlueprintCallable) void OnSeatChanged();
    UFUNCTION(BlueprintCallable) void OnUtilityItemChanged(FItemsStaticRowHandle Item);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void PerspectiveChanged();
    UFUNCTION(BlueprintCallable) void Play_Mount_Saddle_Audio();  // named "Play Mount Saddle Audio"
    UFUNCTION(BlueprintCallable) void PlayLadderClimbNotify(FLadderClimbAnimNotifyData Data);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void PlayLandInWaterSound();
    UFUNCTION(BlueprintCallable, BlueprintPure) void PlayerIsMoving(bool& IsMoving);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetClothHitComponentPlayState(bool ShouldPlay);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetUnderwater(bool Underwater);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void ShouldLadderNotifyPlay(FLadderClimbAnimNotifyData NotifyData, float Position, float LastPosition, bool IsReversePlay, bool& ShouldPlay);  // parameters 0x12
    UFUNCTION(BlueprintCallable) void StartWorldMovementComponent();
    UFUNCTION(BlueprintCallable) void SwimmingChanged(bool Swimming);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void TraceForFoliage(EPlayerFoliageFMODParam& FoliageType);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void TraceForLadder(USkeletalMeshComponent* Mesh, TEnumAsByte<EAudioPlayerAppendageType> Appendage, bool& LadderFound, TEnumAsByte<EPhysicalSurface>& Surface);  // parameters 0xB
    UFUNCTION(BlueprintCallable) void TraceForWaterImmersion(bool& InWater, float& Immersion, TEnumAsByte<EPhysicalSurface>& WaterType);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void TryPlayBackpackFootstep();
    UFUNCTION(BlueprintCallable) void TryPlayFocusedItemFootstep(TEnumAsByte<EFootstepType> FootstepType, TEnumAsByte<EPlayerAudioStance> PlayerStance);  // parameters 0x2
    UFUNCTION(BlueprintCallable) void UnderwaterChanged(bool Underwater);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void UpdateBackpackAudio();
    UFUNCTION(BlueprintCallable) void UpdateBoneParameters(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void UpdateClothCollision();
    UFUNCTION(BlueprintCallable) void UpdateFoliage();
    UFUNCTION(BlueprintCallable) void UpdateGroundState(bool& GroundStateChanged);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void UpdateWaterImmersion();
    UFUNCTION(BlueprintCallable) void UpdateWorldMovementParameters();
};
