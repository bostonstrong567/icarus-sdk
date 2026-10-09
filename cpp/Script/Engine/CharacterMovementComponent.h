// /Script/Engine.CharacterMovementComponent
// Derives from: UPawnMovementComponent > UNavMovementComponent > UMovementComponent > UActorComponent > UObject
// size 0xAF0, declared in Engine/Source/Runtime/Engine/Classes/GameFramework/CharacterMovementComponent.h

UCLASS(Config=Engine)
class UCharacterMovementComponent : public UPawnMovementComponent, public IRVOAvoidanceInterface, public INetworkPredictionInterface
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float GravityScale;  // 0x0150, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxStepHeight;  // 0x0154, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float JumpZVelocity;  // 0x0158, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float JumpOffJumpZFactor;  // 0x015C, size 0x4
    UPROPERTY(BlueprintReadOnly) TEnumAsByte<EMovementMode> MovementMode;  // 0x0168, size 0x1
    UPROPERTY(BlueprintReadOnly) uint8 CustomMovementMode;  // 0x0169, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) ENetworkSmoothingMode NetworkSmoothingMode;  // 0x016A, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float GroundFriction;  // 0x016C, size 0x4
    FQuat OldBaseQuat;  // 0x0170, not reflected
    FVector OldBaseLocation;  // 0x0180, not reflected
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxWalkSpeed;  // 0x018C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxWalkSpeedCrouched;  // 0x0190, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxSwimSpeed;  // 0x0194, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxFlySpeed;  // 0x0198, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxCustomMovementSpeed;  // 0x019C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxAcceleration;  // 0x01A0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MinAnalogWalkSpeed;  // 0x01A4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float BrakingFrictionFactor;  // 0x01A8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float BrakingFriction;  // 0x01AC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float BrakingSubStepTime;  // 0x01B0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float BrakingDecelerationWalking;  // 0x01B4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float BrakingDecelerationFalling;  // 0x01B8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float BrakingDecelerationSwimming;  // 0x01BC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float BrakingDecelerationFlying;  // 0x01C0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float AirControl;  // 0x01C4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float AirControlBoostMultiplier;  // 0x01C8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float AirControlBoostVelocityThreshold;  // 0x01CC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FallingLateralFriction;  // 0x01D0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float CrouchedHalfHeight;  // 0x01D4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Buoyancy;  // 0x01D8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float PerchRadiusThreshold;  // 0x01DC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float PerchAdditionalHeight;  // 0x01E0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRotator RotationRate;  // 0x01E4, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bUseSeparateBrakingFriction : 1;  // 0x01F0, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bApplyGravityWhileJumping : 1;  // 0x01F0, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bUseControllerDesiredRotation : 1;  // 0x01F0, mask 0x04
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOrientRotationToMovement : 1;  // 0x01F0, mask 0x08
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bSweepWhileNavWalking : 1;  // 0x01F0, mask 0x10
    UPROPERTY(EditAnywhere) uint8 bEnableScopedMovementUpdates : 1;  // 0x01F0, mask 0x80
    uint8 : 1 bNetworkSmoothingComplete;  // 0x01F1, not reflected
    UPROPERTY(EditAnywhere) uint8 bEnableServerDualMoveScopedMovementUpdates : 1;  // 0x01F1, mask 0x01
    UPROPERTY() uint8 bForceMaxAccel : 1;  // 0x01F1, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bRunPhysicsWithNoController : 1;  // 0x01F1, mask 0x04
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bForceNextFloorCheck : 1;  // 0x01F1, mask 0x08
    UPROPERTY() uint8 bShrinkProxyCapsule : 1;  // 0x01F1, mask 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bCanWalkOffLedges : 1;  // 0x01F1, mask 0x20
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bCanWalkOffLedgesWhenCrouching : 1;  // 0x01F1, mask 0x40
    uint8 : 1 bNetworkLargeClientCorrection;  // 0x01F2, not reflected
    UPROPERTY(EditAnywhere) uint8 bNetworkSkipProxyPredictionOnNetUpdate : 1;  // 0x01F2, mask 0x02
    UPROPERTY(EditAnywhere) uint8 bNetworkAlwaysReplicateTransformUpdateTimestamp : 1;  // 0x01F2, mask 0x04
    UPROPERTY() uint8 bDeferUpdateMoveComponent : 1;  // 0x01F2, mask 0x08
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bEnablePhysicsInteraction : 1;  // 0x01F2, mask 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bTouchForceScaledToMass : 1;  // 0x01F2, mask 0x20
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bPushForceScaledToMass : 1;  // 0x01F2, mask 0x40
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bPushForceUsingZOffset : 1;  // 0x01F2, mask 0x80
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bScalePushForceToVelocity : 1;  // 0x01F3, mask 0x01
    UPROPERTY(Instanced) USceneComponent* DeferredUpdatedMoveComponent;  // 0x01F8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxOutOfWaterStepHeight;  // 0x0200, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float OutofWaterZ;  // 0x0204, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Mass;  // 0x0208, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float StandingDownwardForceScale;  // 0x020C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float InitialPushForceFactor;  // 0x0210, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float PushForceFactor;  // 0x0214, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float PushForcePointZOffsetFactor;  // 0x0218, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TouchForceFactor;  // 0x021C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MinTouchForce;  // 0x0220, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxTouchForce;  // 0x0224, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float RepulsionForce;  // 0x0228, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxSimulationTimeStep;  // 0x029C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MaxSimulationIterations;  // 0x02A0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MaxJumpApexAttemptsPerSimulation;  // 0x02A4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxDepenetrationWithGeometry;  // 0x02A8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxDepenetrationWithGeometryAsProxy;  // 0x02AC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxDepenetrationWithPawn;  // 0x02B0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxDepenetrationWithPawnAsProxy;  // 0x02B4, size 0x4
    UPROPERTY(EditAnywhere) float NetworkSimulatedSmoothLocationTime;  // 0x02B8, size 0x4
    UPROPERTY(EditAnywhere) float NetworkSimulatedSmoothRotationTime;  // 0x02BC, size 0x4
    UPROPERTY(EditAnywhere) float ListenServerNetworkSimulatedSmoothLocationTime;  // 0x02C0, size 0x4
    UPROPERTY(EditAnywhere) float ListenServerNetworkSimulatedSmoothRotationTime;  // 0x02C4, size 0x4
    UPROPERTY(EditAnywhere) float NetProxyShrinkRadius;  // 0x02C8, size 0x4
    UPROPERTY(EditAnywhere) float NetProxyShrinkHalfHeight;  // 0x02CC, size 0x4
    UPROPERTY(EditAnywhere) float NetworkMaxSmoothUpdateDistance;  // 0x02D0, size 0x4
    UPROPERTY(EditAnywhere) float NetworkNoSmoothUpdateDistance;  // 0x02D4, size 0x4
    UPROPERTY(EditAnywhere) float NetworkMinTimeBetweenClientAckGoodMoves;  // 0x02D8, size 0x4
    UPROPERTY(EditAnywhere) float NetworkMinTimeBetweenClientAdjustments;  // 0x02DC, size 0x4
    UPROPERTY(EditAnywhere) float NetworkMinTimeBetweenClientAdjustmentsLargeCorrection;  // 0x02E0, size 0x4
    UPROPERTY(EditAnywhere) float NetworkLargeClientCorrectionDistance;  // 0x02E4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LedgeCheckThreshold;  // 0x02E8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float JumpOutOfWaterPitch;  // 0x02EC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FFindFloorResult CurrentFloor;  // 0x02F0, size 0x94
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<EMovementMode> DefaultLandMovementMode;  // 0x0384, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<EMovementMode> DefaultWaterMovementMode;  // 0x0385, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bMaintainHorizontalGroundVelocity : 1;  // 0x0387, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bImpartBaseVelocityX : 1;  // 0x0387, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bImpartBaseVelocityY : 1;  // 0x0387, mask 0x04
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bImpartBaseVelocityZ : 1;  // 0x0387, mask 0x08
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bImpartBaseAngularVelocity : 1;  // 0x0387, mask 0x10
    UPROPERTY(EditAnywhere, Transient, BlueprintReadWrite) uint8 bJustTeleported : 1;  // 0x0387, mask 0x20
    UPROPERTY(Transient) uint8 bNetworkUpdateReceived : 1;  // 0x0387, mask 0x40
    UPROPERTY(Transient) uint8 bNetworkMovementModeChanged : 1;  // 0x0387, mask 0x80
    UPROPERTY(EditAnywhere, Transient, BlueprintReadWrite) uint8 bIgnoreClientMovementErrorChecksAndCorrection : 1;  // 0x0388, mask 0x01
    UPROPERTY(EditAnywhere, Transient, BlueprintReadWrite) uint8 bServerAcceptClientAuthoritativePosition : 1;  // 0x0388, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bNotifyApex : 1;  // 0x0388, mask 0x04
    UPROPERTY() uint8 bCheatFlying : 1;  // 0x0388, mask 0x08
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bWantsToCrouch : 1;  // 0x0388, mask 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bCrouchMaintainsBaseLocation : 1;  // 0x0388, mask 0x20
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bIgnoreBaseRotation : 1;  // 0x0388, mask 0x40
    UPROPERTY() uint8 bFastAttachedMove : 1;  // 0x0388, mask 0x80
    uint8 : 1 bIsNavWalkingOnServer;  // 0x0389, not reflected
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bAlwaysCheckFloor : 1;  // 0x0389, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bUseFlatBaseForFloorChecks : 1;  // 0x0389, mask 0x02
    UPROPERTY() uint8 bPerformingJumpOff : 1;  // 0x0389, mask 0x04
    UPROPERTY() uint8 bWantsToLeaveNavWalking : 1;  // 0x0389, mask 0x08
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bUseRVOAvoidance : 1;  // 0x0389, mask 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bRequestedMoveUseAcceleration : 1;  // 0x0389, mask 0x20
    UPROPERTY(Transient) uint8 bWasSimulatingRootMotion : 1;  // 0x0389, mask 0x80
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bAllowPhysicsRotationDuringAnimRootMotion : 1;  // 0x038A, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float AvoidanceConsiderationRadius;  // 0x039C, size 0x4
    UPROPERTY(Transient) FVector RequestedVelocity;  // 0x03A0, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 AvoidanceUID;  // 0x03AC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FNavAvoidanceMask AvoidanceGroup;  // 0x03B0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FNavAvoidanceMask GroupsToAvoid;  // 0x03B4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FNavAvoidanceMask GroupsToIgnore;  // 0x03B8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float AvoidanceWeight;  // 0x03BC, size 0x4
    UPROPERTY() FVector PendingLaunchVelocity;  // 0x03C0, size 0xC
    FNavLocation CachedNavLocation;  // 0x03D0, not reflected
    FHitResult CachedProjectedNavMeshHitResult;  // 0x03E8, not reflected
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float NavMeshProjectionInterval;  // 0x0470, size 0x4
    UPROPERTY(Transient) float NavMeshProjectionTimer;  // 0x0474, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float NavMeshProjectionInterpSpeed;  // 0x0478, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float NavMeshProjectionHeightScaleUp;  // 0x047C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float NavMeshProjectionHeightScaleDown;  // 0x0480, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float NavWalkingFloorDistTolerance;  // 0x0484, size 0x4
    UPROPERTY() FCharacterMovementComponentPostPhysicsTickFunction PostPhysicsTickFunction;  // 0x0488, size 0x30
    UPROPERTY() float MinTimeBetweenTimeStampResets;  // 0x04D0, size 0x4
    UPROPERTY(Transient) FRootMotionSourceGroup CurrentRootMotion;  // 0x0980, size 0x38
    UPROPERTY(Transient) FRootMotionSourceGroup ServerCorrectionRootMotion;  // 0x09B8, size 0x38
    TArray<FRootMotionServerToLocalIDMapping,TInlineAllocator<16,TSizedDefaultAllocator<32> > > RootMotionIDMappings;  // 0x09F0, not reflected
    UPROPERTY(Transient) FRootMotionMovementParams RootMotionParams;  // 0x0A80, size 0x40
    UPROPERTY(Transient) FVector AnimRootMotionVelocity;  // 0x0AC0, size 0xC
    TDelegate<FTransform __cdecl(FTransform const &,UCharacterMovementComponent *),FDefaultDelegateUserPolicy> ProcessRootMotionPreConvertToWorld;  // 0x0AD0, not reflected
    TDelegate<FTransform __cdecl(FTransform const &,UCharacterMovementComponent *),FDefaultDelegateUserPolicy> ProcessRootMotionPostConvertToWorld;  // 0x0AE0, not reflected
protected:
    UPROPERTY(Transient) ACharacter* CharacterOwner;  // 0x0148, size 0x8
    UPROPERTY() uint8 bMovementInProgress : 1;  // 0x01F0, mask 0x40
    UPROPERTY() FVector Acceleration;  // 0x022C, size 0xC
    UPROPERTY() FQuat LastUpdateRotation;  // 0x0240, size 0x10
    UPROPERTY() FVector LastUpdateLocation;  // 0x0250, size 0xC
    UPROPERTY() FVector LastUpdateVelocity;  // 0x025C, size 0xC
    UPROPERTY(Transient) float ServerLastTransformUpdateTimeStamp;  // 0x0268, size 0x4
    UPROPERTY(Transient) float ServerLastClientGoodMoveAckTime;  // 0x026C, size 0x4
    UPROPERTY(Transient) float ServerLastClientAdjustmentTime;  // 0x0270, size 0x4
    UPROPERTY() FVector PendingImpulseToApply;  // 0x0274, size 0xC
    UPROPERTY() FVector PendingForceToApply;  // 0x0280, size 0xC
    UPROPERTY() float AnalogInputModifier;  // 0x028C, size 0x4
    float LastStuckWarningTime;  // 0x0290, not reflected
    uint32 StuckWarningCountSinceNotify;  // 0x0294, not reflected
    int32 NumJumpApexAttempts;  // 0x0298, not reflected
    uint8 : 1 bDeferUpdateBasedMovement;  // 0x038A, not reflected
    uint8 : 1 bUseRVOPostProcess;  // 0x038A, not reflected
    UPROPERTY(Transient) uint8 bHasRequestedVelocity : 1;  // 0x038A, mask 0x02
    UPROPERTY(Transient) uint8 bRequestedMoveWithMaxSpeed : 1;  // 0x038A, mask 0x04
    UPROPERTY(Transient) uint8 bWasAvoidanceUpdated : 1;  // 0x038A, mask 0x08
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bProjectNavMeshWalking : 1;  // 0x038A, mask 0x40
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bProjectNavMeshOnBothWorldChannels : 1;  // 0x038A, mask 0x80
    FVector AvoidanceLockVelocity;  // 0x038C, not reflected
    float AvoidanceLockTimer;  // 0x0398, not reflected
    FNetworkPredictionData_Client_Character * ClientPredictionData;  // 0x04B8, not reflected
    FNetworkPredictionData_Server_Character * ServerPredictionData;  // 0x04C0, not reflected
    FRandomStream RandomStream;  // 0x04C8, not reflected
    float LastTimeStampResetServerTime;  // 0x04D4, not reflected
private:
    UPROPERTY(EditAnywhere) float WalkableFloorAngle;  // 0x0160, size 0x4
    UPROPERTY(EditAnywhere) float WalkableFloorZ;  // 0x0164, size 0x4
    uint8 : 1 bNeedsSweepWhileWalkingUpdate;  // 0x01F0, not reflected
    UPROPERTY(Transient) TEnumAsByte<EMovementMode> GroundMovementMode;  // 0x0386, size 0x1
    FCharacterNetworkMoveDataContainer DefaultNetworkMoveDataContainer;  // 0x04D8, not reflected
    FCharacterNetworkMoveDataContainer * NetworkMoveDataContainerPtr;  // 0x05F0, not reflected
    FNetBitWriter ServerMoveBitWriter;  // 0x05F8, not reflected
    FNetBitReader ServerMoveBitReader;  // 0x06C0, not reflected
    FCharacterNetworkMoveData * CurrentNetworkMoveData;  // 0x0780, not reflected
    FCharacterMoveResponseDataContainer DefaultMoveResponseDataContainer;  // 0x0788, not reflected
    FCharacterMoveResponseDataContainer * MoveResponseDataContainerPtr;  // 0x07F0, not reflected
    FNetBitWriter MoveResponseBitWriter;  // 0x07F8, not reflected
    FNetBitReader MoveResponseBitReader;  // 0x08C0, not reflected
public:
    UFUNCTION(BlueprintCallable) void AddForce(FVector Force);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void AddImpulse(FVector Impulse, bool bVelocityChange);  // parameters 0xD
    UFUNCTION(BlueprintCallable) void CalcVelocity(float DeltaTime, float Friction, bool bFluid, float BrakingDeceleration);  // parameters 0x10
    UFUNCTION() void CapsuleTouched(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);  // parameters 0xA8
    UFUNCTION(BlueprintCallable) void ClearAccumulatedForces();
    UFUNCTION(BlueprintCallable) void DisableMovement();
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetAnalogInputModifier() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) ACharacter* GetCharacterOwner() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector GetCurrentAcceleration() const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector GetImpartedMovementBaseVelocity() const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector GetLastUpdateLocation() const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) FRotator GetLastUpdateRotation() const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector GetLastUpdateVelocity() const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetMaxAcceleration() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetMaxBrakingDeceleration() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetMaxJumpHeight() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetMaxJumpHeightWithJumpTime() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetMinAnalogSpeed() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) UPrimitiveComponent* GetMovementBase() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetPerchRadiusThreshold() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetValidPerchRadius() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsWalkable(const FHitResult& Hit) const;  // parameters 0x89
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsWalking() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) void K2_ComputeFloorDist(FVector CapsuleLocation, float LineDistance, float SweepDistance, float SweepRadius, FFindFloorResult& FloorResult) const;  // parameters 0xAC
    UFUNCTION(BlueprintCallable, BlueprintPure) void K2_FindFloor(FVector CapsuleLocation, FFindFloorResult& FloorResult) const;  // parameters 0xA0
    UFUNCTION(BlueprintCallable, BlueprintPure) float K2_GetModifiedMaxAcceleration() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float K2_GetWalkableFloorAngle() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float K2_GetWalkableFloorZ() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetAvoidanceEnabled(bool bEnable);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetAvoidanceGroup(int32 GroupFlags);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetAvoidanceGroupMask(const FNavAvoidanceMask& GroupMask);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetGroupsToAvoid(int32 GroupFlags);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetGroupsToAvoidMask(const FNavAvoidanceMask& GroupMask);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetGroupsToIgnore(int32 GroupFlags);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetGroupsToIgnoreMask(const FNavAvoidanceMask& GroupMask);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetMovementMode(TEnumAsByte<EMovementMode> NewMovementMode, uint8 NewCustomMode);  // parameters 0x2
    UFUNCTION(BlueprintCallable) void SetWalkableFloorAngle(float InWalkableFloorAngle);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetWalkableFloorZ(float InWalkableFloorZ);  // parameters 0x4

    // Virtual functions that start here:
    //   AddForce, AddImpulse, AdjustFloorHeight, AdjustProxyCapsuleSize, ApplyAccumulatedForces
    //   ApplyDownwardForce, ApplyImpactPhysicsForces, ApplyNetworkMovementMode, ApplyRepulsionForce
    //   ApplyRequestedMove, ApplyVelocityBraking, BoostAirControl, CalcAnimRootMotionVelocity
    //   CalcAvoidanceVelocity, CalcRootMotionVelocity, CalcVelocity, CallMovementUpdateDelegate
    //   CallServerMove, CallServerMovePacked, CanAttemptJump, CanCrouchInCurrentState, CanDelaySendingMove
    //   CanStepUp, CanWalkOffLedges, CapsuleTouched, CheckFall, CheckLedgeDirection, CheckWaterJump
    //   ClearAccumulatedForces, ClientAckGoodMove, ClientAckGoodMove_Implementation, ClientAdjustPosition
    //   ClientAdjustPosition_Implementation, ClientAdjustRootMotionPosition
    //   ClientAdjustRootMotionPosition_Implementation, ClientAdjustRootMotionSourcePosition
    //   ClientAdjustRootMotionSourcePosition_Implementation, ClientHandleMoveResponse
    //   ClientUpdatePositionAfterServerUpdate, ClientVeryShortAdjustPosition
    //   ClientVeryShortAdjustPosition_Implementation, ComputeAnalogInputModifier, ComputeFloorDist
    //   ComputeGroundMovementDelta, ComputeOrientToMovementRotation, ComputePerchResult
    //   ConstrainAnimRootMotionVelocity, ConstrainInputAcceleration, ControlledCharacterMove, Crouch
    //   DisableMovement, DisplayDebug, DoJump, FindBestNavMeshLocation, FindFloor, FindNavFloor
    //   FloorSweepTest, FlushServerMoves, ForceReplicationUpdate, GetAirControl, GetBestDirectionOffActor
    //   GetClientNetSendDeltaTime, GetDeltaRotation, GetFallingLateralAcceleration
    //   GetImpartedMovementBaseVelocity, GetLedgeMove, GetMaxAcceleration, GetMaxBrakingDeceleration
    //   GetMaxJumpHeight, GetMaxJumpHeightWithJumpTime, GetMinAnalogSpeed, GetModifiedMaxAcceleration
    //   GetMovementName, GetNetworkSafeRandomAngleDegrees, HandlePendingLaunch, HandleSlopeBoosting
    //   HandleSwimmingWallHit, HandleWalkingOffLedge, HasValidData, ImmersionDepth, IsValidLandingSpot
    //   IsWalkable, IsWithinEdgeTolerance, JumpOff, JumpOutOfWater, K2_ComputeFloorDist, K2_FindFloor
    //   K2_GetModifiedMaxAcceleration, Launch, LimitAirControl, MaintainHorizontalGroundVelocity
    //   MaybeSaveBaseLocation, MaybeUpdateBasedMovement, MoveAlongFloor, MoveAutonomous, MoveSmooth
    //   NewFallVelocity, NotifyJumpApex, OnCharacterStuckInGeometry, OnClientCorrectionReceived
    //   OnClientTimeStampResetDetected, OnMovementModeChanged, OnMovementUpdated
    //   OnRootMotionSourceBeingApplied, OnTimeDiscrepancyDetected, OnUnableToFollowBaseMove
    //   PackNetworkMovementMode, PerformAirControlForPathFollowing, PerformMovement, PhysCustom
    //   PhysFalling, PhysFlying, PhysNavWalking, PhysSwimming, PhysWalking, PhysicsRotation
    //   PostPhysicsTickComponent, PostProcessAvoidanceVelocity, ProcessClientTimeStampForTimeDiscrepancy
    //   ProcessLanded, ProjectLocationFromNavMesh, ReplicateMoveToServer, RoundAcceleration
    //   SaveBaseLocation, ScaleInputAcceleration, ServerCheckClientError
    //   ServerExceedsAllowablePositionError, ServerMove, ServerMoveDual, ServerMoveDualHybridRootMotion
    //   ServerMoveDualHybridRootMotion_Implementation, ServerMoveDualHybridRootMotion_Validate
    //   ServerMoveDual_Implementation, ServerMoveDual_Validate, ServerMoveHandleClientError, ServerMoveOld
    //   ServerMoveOld_Implementation, ServerMoveOld_Validate, ServerMove_HandleMoveData
    //   ServerMove_Implementation, ServerMove_PerformMovement, ServerMove_Validate
    //   ServerShouldUseAuthoritativePosition, SetBase, SetDefaultMovementMode, SetMovementMode
    //   SetNavWalkingPhysics, SetPostLandedPhysics, ShouldCancelAdaptiveReplication, ShouldCatchAir
    //   ShouldCheckForValidLandingSpot, ShouldComputeAccelerationToReachRequestedVelocity
    //   ShouldComputePerchResult, ShouldJumpOutOfWater, ShouldLimitAirControl
    //   ShouldPerformAirControlForPathFollowing, ShouldRemainVertical, ShouldUsePackedMovementRPCs
    //   SimulateMovement, SimulatedTick, SmoothClientPosition, StartFalling, StartNewPhysics, StepUp
    //   TryToLeaveNavWalking, UnCrouch, UnpackNetworkMovementMode, UpdateBasedMovement, UpdateBasedRotation
    //   UpdateCharacterStateAfterMovement, UpdateCharacterStateBeforeMovement, UpdateFloorFromAdjustment
    //   UpdateFromCompressedFlags, UpdateProxyAcceleration, VerifyClientTimeStamp, VisualizeMovement
};
