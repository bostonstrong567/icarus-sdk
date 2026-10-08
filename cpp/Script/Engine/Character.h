// /Script/Engine.Character
// Derives from: APawn > AActor > UObject
// size 0x4C0, declared in Engine/Source/Runtime/Engine/Classes/GameFramework/Character.h

UCLASS(Config=Game)
class ACharacter : public APawn
{
public:
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) USkeletalMeshComponent* Mesh;  // 0x0280, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) UCharacterMovementComponent* CharacterMovement;  // 0x0288, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) UCapsuleComponent* CapsuleComponent;  // 0x0290, size 0x8
    UPROPERTY() FBasedMovementInfo BasedMovement;  // 0x0298, size 0x30
    UPROPERTY(Replicated, ReplicatedUsing) FBasedMovementInfo ReplicatedBasedMovement;  // 0x02C8, size 0x30
    UPROPERTY(Replicated) float AnimRootMotionTranslationScale;  // 0x02F8, size 0x4
    UPROPERTY() FVector BaseTranslationOffset;  // 0x02FC, size 0xC
    UPROPERTY() FQuat BaseRotationOffset;  // 0x0310, size 0x10
    UPROPERTY(Replicated) float ReplicatedServerLastTransformUpdateTimeStamp;  // 0x0320, size 0x4
    UPROPERTY(Replicated, ReplicatedUsing) float ReplayLastTransformUpdateTimeStamp;  // 0x0324, size 0x4
    UPROPERTY(Replicated) uint8 ReplicatedMovementMode;  // 0x0328, size 0x1
    UPROPERTY() bool bInBaseReplication;  // 0x0329, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CrouchedEyeHeight;  // 0x032C, size 0x4
    UPROPERTY(Replicated, ReplicatedUsing, BlueprintReadOnly) uint8 bIsCrouched : 1;  // 0x0330, mask 0x01
    UPROPERTY(Replicated, Transient) uint8 bProxyIsJumpForceApplied : 1;  // 0x0330, mask 0x02
    UPROPERTY(BlueprintReadOnly) uint8 bPressedJump : 1;  // 0x0330, mask 0x04
    UPROPERTY(Transient) uint8 bClientUpdating : 1;  // 0x0330, mask 0x08
    UPROPERTY(Transient) uint8 bClientWasFalling : 1;  // 0x0330, mask 0x10
    UPROPERTY(Transient) uint8 bClientResimulateRootMotion : 1;  // 0x0330, mask 0x20
    UPROPERTY(Transient) uint8 bClientResimulateRootMotionSources : 1;  // 0x0330, mask 0x40
    UPROPERTY() uint8 bSimGravityDisabled : 1;  // 0x0330, mask 0x80
    UPROPERTY(Transient) uint8 bClientCheckEncroachmentOnNetUpdate : 1;  // 0x0331, mask 0x01
    UPROPERTY(Transient) uint8 bServerMoveIgnoreRootMotion : 1;  // 0x0331, mask 0x02
    UPROPERTY(EditAnywhere, Transient, BlueprintReadOnly) uint8 bWasJumping : 1;  // 0x0331, mask 0x04
    UPROPERTY(EditAnywhere, Transient, BlueprintReadOnly) float JumpKeyHoldTime;  // 0x0334, size 0x4
    UPROPERTY(EditAnywhere, Transient, BlueprintReadOnly) float JumpForceTimeRemaining;  // 0x0338, size 0x4
    UPROPERTY(EditAnywhere, Transient, BlueprintReadOnly) float ProxyJumpForceStartedTime;  // 0x033C, size 0x4
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) float JumpMaxHoldTime;  // 0x0340, size 0x4
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) int32 JumpMaxCount;  // 0x0344, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 JumpCurrentCount;  // 0x0348, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 JumpCurrentCountPreJump;  // 0x034C, size 0x4
    UPROPERTY(BlueprintAssignable) FCharacterReachedApexSignature OnReachedJumpApex;  // 0x0358, size 0x10
    UPROPERTY(BlueprintAssignable) FMovementModeChangedSignature MovementModeChangedDelegate;  // 0x0378, size 0x10
    UPROPERTY(BlueprintAssignable) FCharacterMovementUpdatedSignature OnCharacterMovementUpdated;  // 0x0388, size 0x10
    UPROPERTY(Transient) FRootMotionSourceGroup SavedRootMotion;  // 0x0398, size 0x38
    UPROPERTY(Transient) FRootMotionMovementParams ClientRootMotionParams;  // 0x03D0, size 0x40
    UPROPERTY(Transient) TArray<FSimulatedRootMotionReplicatedMove> RootMotionRepMoves;  // 0x0410, size 0x10
    UPROPERTY(Replicated, ReplicatedUsing) FRepRootMotionMontage RepRootMotion;  // 0x0420, size 0x98

    // Not reflected: the engine's scripting cannot see these.
    uint32 NumActorOverlapEventsCounter;  // 0x0350
    FLandedSignature LandedDelegate;  // 0x0368

    UFUNCTION(BlueprintCallable) void CacheInitialMeshOffset(FVector MeshRelativeLocation, FRotator MeshRelativeRotation);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CanCrouch() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CanJump() const;  // parameters 0x1
    UFUNCTION(BlueprintNativeEvent) bool CanJumpInternal() const;  // parameters 0x1
    UFUNCTION(Client, BlueprintNativeEvent) void ClientAckGoodMove(float TimeStamp);  // parameters 0x4
    UFUNCTION(Client, BlueprintNativeEvent) void ClientAdjustPosition(float TimeStamp, FVector NewLoc, FVector NewVel, UPrimitiveComponent* NewBase, FName NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, uint8 ServerMovementMode);  // parameters 0x33
    UFUNCTION(Client, BlueprintNativeEvent) void ClientAdjustRootMotionPosition(float TimeStamp, float ServerMontageTrackPosition, FVector ServerLoc, FVector_NetQuantizeNormal ServerRotation, float ServerVelZ, UPrimitiveComponent* ServerBase, FName ServerBoneName, bool bHasBase, bool bBaseRelativePosition, uint8 ServerMovementMode);  // parameters 0x3B
    UFUNCTION(Client, BlueprintNativeEvent) void ClientAdjustRootMotionSourcePosition(float TimeStamp, FRootMotionSourceGroup ServerRootMotion, bool bHasAnimRootMotion, float ServerMontageTrackPosition, FVector ServerLoc, FVector_NetQuantizeNormal ServerRotation, float ServerVelZ, UPrimitiveComponent* ServerBase, FName ServerBoneName, bool bHasBase, bool bBaseRelativePosition, uint8 ServerMovementMode);  // parameters 0x7B
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void ClientCheatFly();
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void ClientCheatGhost();
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void ClientCheatWalk();
    UFUNCTION(Client, BlueprintNativeEvent) void ClientMoveResponsePacked(FCharacterMoveResponsePackedBits PackedBits);  // parameters 0x98
    UFUNCTION(Client, BlueprintNativeEvent) void ClientVeryShortAdjustPosition(float TimeStamp, FVector NewLoc, UPrimitiveComponent* NewBase, FName NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, uint8 ServerMovementMode);  // parameters 0x23
    UFUNCTION(BlueprintCallable) void Crouch(bool bClientSimulation);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetAnimRootMotionTranslationScale() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) FRotator GetBaseRotationOffsetRotator() const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector GetBaseTranslationOffset() const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) UAnimMontage* GetCurrentMontage() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) bool HasAnyRootMotion() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsJumpProvidingForce() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsPlayingNetworkedRootMotionMontage() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsPlayingRootMotion() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) void Jump();
    UFUNCTION(BlueprintImplementableEvent) void K2_OnEndCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void K2_OnMovementModeChanged(TEnumAsByte<EMovementMode> PrevMovementMode, TEnumAsByte<EMovementMode> NewMovementMode, uint8 PrevCustomMode, uint8 NewCustomMode);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void K2_OnStartCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void K2_UpdateCustomMovement(float DeltaTime);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void LaunchCharacter(FVector LaunchVelocity, bool bXYOverride, bool bZOverride);  // parameters 0xE
    UFUNCTION(BlueprintNativeEvent) void OnJumped();
    UFUNCTION(BlueprintImplementableEvent) void OnLanded(const FHitResult& Hit);  // parameters 0x88
    UFUNCTION(BlueprintImplementableEvent) void OnLaunched(FVector LaunchVelocity, bool bXYOverride, bool bZOverride);  // parameters 0xE
    UFUNCTION() void OnRep_IsCrouched();
    UFUNCTION() void OnRep_ReplayLastTransformUpdateTimeStamp();
    UFUNCTION() void OnRep_ReplicatedBasedMovement();
    UFUNCTION() void OnRep_RootMotion();
    UFUNCTION(BlueprintNativeEvent) void OnWalkingOffLedge(const FVector& PreviousFloorImpactNormal, const FVector& PreviousFloorContactNormal, const FVector& PreviousLocation, float TimeDelta);  // parameters 0x28
    UFUNCTION(BlueprintCallable) float PlayAnimMontage(UAnimMontage* AnimMontage, float InPlayRate, FName StartSectionName);  // parameters 0x18
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void RootMotionDebugClientPrintOnScreen(FString InString);  // parameters 0x10
    UFUNCTION(Server, BlueprintNativeEvent) void ServerMove(float TimeStamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, uint8 CompressedMoveFlags, uint8 ClientRoll, uint32 View, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode);  // parameters 0x39
    UFUNCTION(Server, BlueprintNativeEvent) void ServerMoveDual(float TimeStamp0, FVector_NetQuantize10 InAccel0, uint8 PendingFlags, uint32 View0, float TimeStamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, uint8 NewFlags, uint8 ClientRoll, uint32 View, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode);  // parameters 0x51
    UFUNCTION(Server, BlueprintNativeEvent) void ServerMoveDualHybridRootMotion(float TimeStamp0, FVector_NetQuantize10 InAccel0, uint8 PendingFlags, uint32 View0, float TimeStamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, uint8 NewFlags, uint8 ClientRoll, uint32 View, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode);  // parameters 0x51
    UFUNCTION(Server, BlueprintNativeEvent) void ServerMoveDualNoBase(float TimeStamp0, FVector_NetQuantize10 InAccel0, uint8 PendingFlags, uint32 View0, float TimeStamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, uint8 NewFlags, uint8 ClientRoll, uint32 View, uint8 ClientMovementMode);  // parameters 0x3D
    UFUNCTION(Server, BlueprintNativeEvent) void ServerMoveNoBase(float TimeStamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, uint8 CompressedMoveFlags, uint8 ClientRoll, uint32 View, uint8 ClientMovementMode);  // parameters 0x25
    UFUNCTION(Server, BlueprintNativeEvent) void ServerMoveOld(float OldTimeStamp, FVector_NetQuantize10 OldAccel, uint8 OldMoveFlags);  // parameters 0x11
    UFUNCTION(Server, BlueprintNativeEvent) void ServerMovePacked(FCharacterServerMovePackedBits PackedBits);  // parameters 0x98
    UFUNCTION(BlueprintCallable) void StopAnimMontage(UAnimMontage* AnimMontage);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void StopJumping();
    UFUNCTION(BlueprintCallable) void UnCrouch(bool bClientSimulation);  // parameters 0x1

    // Virtual functions that start here:
    //   ApplyDamageMomentum, BaseChange, CacheInitialMeshOffset, CanCrouch, CanJumpInternal_Implementation
    //   CheckJumpInput, ClearJumpInput, ClientCheatFly_Implementation, ClientCheatGhost_Implementation
    //   ClientCheatWalk_Implementation, Crouch, Falling, GetBaseRotationOffset, GetJumpMaxHoldTime
    //   IsJumpProvidingForce, Jump, Landed, LaunchCharacter, MoveBlockedBy, NotifyJumpApex, OnEndCrouch
    //   OnJumped_Implementation, OnMovementModeChanged, OnRep_IsCrouched, OnRep_ReplicatedBasedMovement
    //   OnStartCrouch, OnUpdateSimulatedPosition, OnWalkingOffLedge_Implementation, PlayAnimMontage
    //   ResetJumpState, RootMotionDebugClientPrintOnScreen_Implementation, SetBase, ShouldNotifyLanded
    //   StopAnimMontage, StopJumping, UnCrouch
};
