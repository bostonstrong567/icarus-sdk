// /Game/BP/Player/BP_IcarusPlayerCharacterSpace.BP_IcarusPlayerCharacterSpace_C
// Derives from: AIcarusPlayerCharacterSpace > AIcarusPlayerCharacter > AIcarusCharacter > ACharacter > APawn > AActor > UObject
// size 0x10B0, a blueprint class, blueprint

UCLASS(Config=Game)
class ABP_IcarusPlayerCharacterSpace_C : public AIcarusPlayerCharacterSpace
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0BA0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_ItemManipulationComponent_C* BP_ItemManipulationComponent;  // 0x0BA8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPhysicsConstraintComponent* PhysicsConstraintR;  // 0x0BB0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPhysicsConstraintComponent* PhysicsConstraintL;  // 0x0BB8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPostProcessComponent* HighlightablePostProcess;  // 0x0BC0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UWidgetComponent* PlayerNameWidget;  // 0x0BC8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCameraComponent* Camera;  // 0x0BD0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UParticleSystemComponent* ParticleSystem;  // 0x0BD8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPhysicalAnimationComponent* PhysicalAnimation;  // 0x0BE0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool DebuggingMovement;  // 0x0BE8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float RotationSpeed;  // 0x0BEC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool SprintPressed;  // 0x0BF0, size 0x1
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) FVector ReplicatedLocation;  // 0x0BF4, size 0xC
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) FVector ReplicatedVelocity;  // 0x0C00, size 0xC
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UPrimitiveComponent* Current_Hit_Component;  // 0x0C10, size 0x8, named "Current Hit Component"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool NearSurface;  // 0x0C18, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle InteractionTimer;  // 0x0C20, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemData RightHandItem_Data;  // 0x0C28, size 0x1F0
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) AIcarusItem* FocusedItem;  // 0x0E18, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) U_3RD_CHA_RIG_Space_AnimBP_C* AnimInstanceBP;  // 0x0E20, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ControllerRoll;  // 0x0E28, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float RollAccelerationWhenGripped;  // 0x0E2C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float RollAccelerationWhenFloating;  // 0x0E30, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float RollDecelerationWhenFloating;  // 0x0E34, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 TouchCheckCount;  // 0x0E38, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float TouchTurnRatio;  // 0x0E3C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float TouchForwardConeRatio;  // 0x0E40, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float TouchTraceLength;  // 0x0E44, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SquareArmRange;  // 0x0E48, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float GripMagnetismStrength;  // 0x0E4C, size 0x4
    UPROPERTY(EditAnywhere, Transient, BlueprintReadWrite) float ThrowTime;  // 0x0E50, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ThrowSpeed;  // 0x0E54, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float GrippingMoveSpeed;  // 0x0E58, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float GrippingSprintSpeed;  // 0x0E5C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UCurveFloat* GripOrientationStrengthCurve;  // 0x0E60, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool LookLocked;  // 0x0E68, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Acceleration;  // 0x0E6C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FloatingAcceleration;  // 0x0E70, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Deceleration;  // 0x0E74, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FloatingDeceleration;  // 0x0E78, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FloatingSpeed;  // 0x0E7C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Use6DOFMovement;  // 0x0E80, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector OffsetVelocity;  // 0x0E84, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Grounded;  // 0x0E90, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float GroundedMoveSpeed;  // 0x0E94, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float GroundedSprintSpeed;  // 0x0E98, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector GroundUpAxis;  // 0x0E9C, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float GroundUpStrength;  // 0x0EA8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRotator TargetRotation;  // 0x0EAC, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool DebuggingPrediction;  // 0x0EB8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemData InventoryItem;  // 0x0EC0, size 0x1F0

    UFUNCTION(BlueprintCallable) void AddGripTargetMagnetism(bool ForLeftHand, bool StillHasValidGripTargets, FVector& MagnetismVector, bool& MagnetismActive);  // parameters 0x11
    UFUNCTION(BlueprintCallable) void AddReactionImpulseToGrippedComponent(bool ForLeftHand, FVector Impulse);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void AutoOrientUsingConstraint(bool ForLeftHand);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void CalculatePhysics(bool IgnoreLocalUp, HabMovementStateStruct LastMovementState, FVector& OutDeltaVelocity);  // parameters 0x40
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CheckArmAngle(bool ForLeftHand, const FVector& Location, const FTransform& ActorTransform) const;  // parameters 0x41
    UFUNCTION(BlueprintCallable) void CheckHandGrip(bool ForLeftHand, HabHandStateStruct CurrentHandState, TArray<UPrimitiveComponent*>& GripTargets, TArray<HabHandStateStruct>& TouchHandStates, FTransform ActorTransform, FVector Velocity, float CurrentTime, HabHandStateStruct& OutHandState);  // parameters 0xD0
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CheckIfTouchingSurface(const HabHandStateStruct& LeftHandState, const HabHandStateStruct& RightHandState, float Use6DOFMovement) const;  // parameters 0x65
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool ConsumeFocusedItem(int32 Amount);  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool DropItem(const FItemData& InventoryItem);  // parameters 0x1F1
    UFUNCTION(BlueprintCallable) void EquipmentItemChanged(UInventory* Inventory, int32 Location);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void EquipmentUpdated();
    UFUNCTION() void ExecuteUbergraph_BP_IcarusPlayerCharacterSpace(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FOVApplied(float Value);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FilterGripTargets(TArray<AActor*>& Array, TArray<UPrimitiveComponent*>& FilteredArray);  // parameters 0x20
    UFUNCTION(BlueprintCallable) bool FindGripTargets(float SearchRadius, FVector ActorLocation, bool Debugging, TArray<UPrimitiveComponent*>& OutComponents);  // parameters 0x29
    UFUNCTION(BlueprintCallable) void FindSurfaceTouches(FTransform ActorTransform, bool Debugging, int32 CheckCount, TArray<HabHandStateStruct>& HandStates);  // parameters 0x48
    UFUNCTION(BlueprintCallable, BlueprintPure) void Get6DOFMovement(float& Use6DOFMovement) const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetBestHandMode(const HabHandStateStruct& LeftHandState, const HabHandStateStruct& RightHandState, TEnumAsByte<ESpaceHandGripMode>& HandMode, bool& Reaching) const;  // parameters 0x62
    UFUNCTION(BlueprintCallable) void GetBestHandStateFromGripTargets(TArray<UPrimitiveComponent*>& Array, bool ForLeftHand, FTransform ActorTransform, FVector Velocity, bool& FoundHandState, HabHandStateStruct& HandState);  // parameters 0x90
    UFUNCTION(BlueprintCallable) void GetBestHandStateGromTouch(TArray<HabHandStateStruct>& Array, bool ForLeftHand, FTransform ActorTransform, FVector Velocity, bool& FoundHandState, HabHandStateStruct& HandState);  // parameters 0x90
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) UCameraComponent* GetFirstPersonCamera() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) USkeletalMeshComponent* GetFirstPersonMesh() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) TEnumAsByte<ESpaceHandGripMode> GetHandMode(bool ForLeftHand) const;  // parameters 0x2
    UFUNCTION(BlueprintCallable, BlueprintPure) HabHandStateStruct GetHandState(bool ForLeftHand) const;  // parameters 0x38
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) UItemManipulationComponent* GetItemManipulationComponent() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetMaxSpeed(HabMovementStateStruct MovementState) const;  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) USkeletalMeshComponent* GetVisibleCharacterMesh();  // parameters 0x8
    UFUNCTION(BlueprintCallable) void InitialiseInventories();
    UFUNCTION() void InpActEvt_AltFire_K2Node_InputActionEvent_3(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_AltFire_K2Node_InputActionEvent_4(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_Fire_K2Node_InputActionEvent_5(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_Fire_K2Node_InputActionEvent_6(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_Interact_K2Node_InputActionEvent_7(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_Interact_K2Node_InputActionEvent_8(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_Jump_K2Node_InputActionEvent_0(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_Sprint_K2Node_InputActionEvent_1(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_Sprint_K2Node_InputActionEvent_2(FKey Key);  // parameters 0x18
    UFUNCTION() void InpAxisEvt_LookRight_K2Node_InputAxisEvent_5(float AxisValue);  // parameters 0x4
    UFUNCTION() void InpAxisEvt_LookUp_K2Node_InputAxisEvent_4(float AxisValue);  // parameters 0x4
    UFUNCTION() void InpAxisEvt_MoveForward_K2Node_InputAxisEvent_0(float AxisValue);  // parameters 0x4
    UFUNCTION() void InpAxisEvt_MoveRight_K2Node_InputAxisEvent_1(float AxisValue);  // parameters 0x4
    UFUNCTION() void InpAxisEvt_MoveUp_K2Node_InputAxisEvent_2(float AxisValue);  // parameters 0x4
    UFUNCTION() void InpAxisEvt_RollRight_K2Node_InputAxisEvent_6(float AxisValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void InteractHeld();
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsAnyMovementInput() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsAnyRotationInput() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool IsHabCharacter();  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) void IsHandReaching(bool ForLeftHand, bool& Return_Value) const;  // parameters 0x2
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsHandStateValid(bool ForLeftHand, const HabHandStateStruct& HandState, FTransform ActorTransform) const;  // parameters 0x71
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsTouchingSurface() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) void IsUsing6DOFMovement(bool& Use6DOFMovement) const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) HabMovementStateStruct MakeMovementStateFromCurrentData();  // parameters 0x30
    UFUNCTION(BlueprintCallable) FVector MakeTargetLocation(bool ForLeftHand, FTransform ActorTransform, FVector Velocity);  // parameters 0x58
    UFUNCTION(BlueprintCallable) void MoveCharacterWithPhysics(bool IgnoreLocalUp);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void MovementPhysicsTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void MovementPrediction();
    UFUNCTION(BlueprintCallable) void MovementReplicationTick(float Delta);  // parameters 0x4
    UFUNCTION(BlueprintCallable, Server, Reliable) void NotifyLocationUpdated(FVector CurrentLocation);  // parameters 0xC
    UFUNCTION(BlueprintCallable, Server, Reliable) void NotifyRotationUpdated(FRotator NewRotation);  // parameters 0xC
    UFUNCTION(BlueprintCallable, Server, Reliable) void NotifyVelocityUpdated(FVector CurrentLocation);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void OnBlendOut_A0EE5E9E4EEAC509BB86ABBACC336206(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnCompleted_A0EE5E9E4EEAC509BB86ABBACC336206(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnEquipmentUpdated();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool OnFocusItem(const FItemData& InventoryItem);  // parameters 0x1F1
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool OnInteractableLineTraceHit(const FHitResult& HitResult);  // parameters 0x89
    UFUNCTION(BlueprintCallable) void OnInterrupted_A0EE5E9E4EEAC509BB86ABBACC336206(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnNotifyBegin_A0EE5E9E4EEAC509BB86ABBACC336206(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnNotifyEnd_A0EE5E9E4EEAC509BB86ABBACC336206(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnRep_FocusedItem();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool OnUnFocusItem(int32 ItemLocation);  // parameters 0x5
    UFUNCTION(BlueprintCallable) float PerformRollSmoothing(float TargetRollValue);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool PickupItem(AIcarusItem* Item);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void PlayMontage(UAnimMontage* Montage, UAnimMontage* FP_Montage, bool LockMotion, FName StartingSection, FName FP_StartingSection, float PlaySpeed);  // parameters 0x28
    UFUNCTION() void PreCharacterDestruction();
    UFUNCTION(BlueprintCallable) void PredictMovementForFrames(int32 FramesToPredict, HabMovementStateStruct InitialState, TArray<HabMovementStateStruct>& OutMovementStateArray, TArray<HabHandStateStruct>& OutLeftHandArray, TArray<HabHandStateStruct>& OutRightHandArray);  // parameters 0x68
    UFUNCTION(BlueprintCallable) void PredictMovementState(HabMovementStateStruct LastMovementState, HabHandStateStruct LastLeftHand, HabHandStateStruct LastRightHand, HabMovementStateStruct& NewMovementState, HabHandStateStruct& NewLeftHand, HabHandStateStruct& NewRightHand);  // parameters 0x120
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceivePossessed(AController* NewController);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable, Server, Reliable) void ServerPlayerAction(EActionableEventType ActionType, EActionableTrigger Trigger);  // parameters 0x2
    UFUNCTION(BlueprintCallable) void Set6DOFMovementRatio(float Use6DOFMovement);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetAnimHandHit(bool ForLeftHand, HabHandStateStruct NewHandState);  // parameters 0x38
    UFUNCTION(BlueprintCallable) void SetAnimHandMode(bool ForLeftHand, TEnumAsByte<ESpaceHandGripMode> NewHandMode, bool Reaching);  // parameters 0x3
    UFUNCTION(BlueprintCallable) void SetConstraintActive(bool ForLeftHand, bool NewActive);  // parameters 0x2
    UFUNCTION(BlueprintCallable) void SetMeshMontagePlayRate(USkeletalMeshComponent* Mesh, float PlayRate);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void SetMontagePlayRate(float PlayRate);  // parameters 0x4
    UFUNCTION(BlueprintCallable, Server) void StartThrow();
    UFUNCTION(BlueprintCallable) bool TraceGround(FHitResult& OutHit, FVector& Location);  // parameters 0x98
    UFUNCTION(BlueprintCallable) void UpdateCapsuleRotation(float DeltaTime);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void UpdateCharacterVisuals();
    UFUNCTION(BlueprintCallable) void UpdateGripAutoOrientLocation();
    UFUNCTION(BlueprintCallable) void UpdateGripAutoOrientRoll();
    UFUNCTION(BlueprintCallable) void UpdateHandDistance(bool Index);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void UpdateHeadRotation(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void UpdateMeshVisibility();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UserConstructionScript();
};
