// /Script/Engine.AnimInstance
// Derives from: UObject
// size 0x2C0, declared in Engine/Source/Runtime/Engine/Classes/Animation/AnimInstance.h

UCLASS(Transient)
class UAnimInstance : public UObject
{
public:
    UPROPERTY(Transient) USkeleton* CurrentSkeleton;  // 0x0028, size 0x8
    UPROPERTY(EditAnywhere) TEnumAsByte<ERootMotionMode> RootMotionMode;  // 0x0030, size 0x1
    UPROPERTY() uint8 bUseMultiThreadedAnimationUpdate : 1;  // 0x0031, mask 0x01
    UPROPERTY() uint8 bUsingCopyPoseFromMesh : 1;  // 0x0031, mask 0x02
    UPROPERTY(EditAnywhere) uint8 bReceiveNotifiesFromLinkedInstances : 1;  // 0x0031, mask 0x10
    UPROPERTY(EditAnywhere) uint8 bPropagateNotifiesToLinkedInstances : 1;  // 0x0031, mask 0x20
    UPROPERTY(Transient) uint8 bQueueMontageEvents : 1;  // 0x0031, mask 0x40
    UPROPERTY(BlueprintAssignable) FOnMontageBlendingOutStartedMCDelegate OnMontageBlendingOut;  // 0x0038, size 0x10
    UPROPERTY(BlueprintAssignable) FOnMontageStartedMCDelegate OnMontageStarted;  // 0x0048, size 0x10
    UPROPERTY(BlueprintAssignable) FOnMontageEndedMCDelegate OnMontageEnded;  // 0x0058, size 0x10
    UPROPERTY(BlueprintAssignable) FOnAllMontageInstancesEndedMCDelegate OnAllMontageInstancesEnded;  // 0x0068, size 0x10
    UPROPERTY(Transient) FAnimNotifyQueue NotifyQueue;  // 0x0100, size 0x70
    UPROPERTY(Transient) TArray<FAnimNotifyEvent> ActiveAnimNotifyState;  // 0x0170, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    uint8 : 1 bNeedsUpdate;  // 0x0031
    uint8 : 1 bCreatedByLinkedAnimGraph;  // 0x0031
    TArray<FAnimMontageInstance *,TSizedDefaultAllocator<32> > MontageInstances;  // 0x0078
    TMap<UAnimMontage *,FAnimMontageInstance *,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UAnimMontage *,FAnimMontageInstance *,0> > ActiveMontagesMap;  // 0x0088, protected
    TArray<FQueuedMontageBlendingOutEvent,TSizedDefaultAllocator<32> > QueuedMontageBlendingOutEvents;  // 0x00D8, private
    TArray<FQueuedMontageEndedEvent,TSizedDefaultAllocator<32> > QueuedMontageEndedEvents;  // 0x00E8, private
    ETeleportType PendingDynamicResetTeleportType;  // 0x00F8
    FGraphTraversalCounter DebugDataCounter;  // 0x0180
    TMap<FName,FMontageActiveSlotTracker,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMontageActiveSlotTracker,0> > SlotWeightTracker;  // 0x0190, private
    TMap<FName,TMulticastDelegate<void __cdecl(void),FDefaultDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TMulticastDelegate<void __cdecl(void),FDefaultDelegateUserPolicy>,0> > ExternalNotifyHandlers;  // 0x01E0, private
    FAnimMontageInstance * RootMotionMontageInstance;  // 0x0230, private
    TArray<UAnimInstance::FQueuedRootMotionBlend,TSizedDefaultAllocator<32> > RootMotionBlendQueue;  // 0x0238, private
    FRootMotionMovementParams ExtractedRootMotion;  // 0x0250, private
    FAnimInstanceProxy * AnimInstanceProxy;  // 0x0290, protected
    FPlayMontageAnimNotifyDelegate OnPlayMontageNotifyBegin;  // 0x0298
    FPlayMontageAnimNotifyDelegate OnPlayMontageNotifyEnd;  // 0x02A8

    UFUNCTION(BlueprintImplementableEvent) void BlueprintBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void BlueprintInitializeAnimation();
    UFUNCTION(BlueprintImplementableEvent) void BlueprintLinkedAnimationLayersInitialized();
    UFUNCTION(BlueprintImplementableEvent) void BlueprintPostEvaluateAnimation();
    UFUNCTION(BlueprintImplementableEvent) void BlueprintUpdateAnimation(float DeltaTimeX);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float CalculateDirection(const FVector& Velocity, const FRotator& BaseRotation) const;  // parameters 0x1C
    UFUNCTION(BlueprintCallable) void ClearMorphTargets();
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetActiveCurveNames(EAnimCurveType CurveType, TArray<FName>& OutNames) const;  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetAllCurveNames(TArray<FName>& OutNames) const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) UAnimMontage* GetCurrentActiveMontage() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) FName GetCurrentStateName(int32 MachineIndex);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetCurveValue(FName CurveName) const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetInstanceAssetPlayerLength(int32 AssetPlayerIndex);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetInstanceAssetPlayerTime(int32 AssetPlayerIndex);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetInstanceAssetPlayerTimeFraction(int32 AssetPlayerIndex);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetInstanceAssetPlayerTimeFromEnd(int32 AssetPlayerIndex);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetInstanceAssetPlayerTimeFromEndFraction(int32 AssetPlayerIndex);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetInstanceCurrentStateElapsedTime(int32 MachineIndex);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetInstanceMachineWeight(int32 MachineIndex);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetInstanceStateWeight(int32 MachineIndex, int32 StateIndex);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetInstanceTransitionCrossfadeDuration(int32 MachineIndex, int32 TransitionIndex);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetInstanceTransitionTimeElapsed(int32 MachineIndex, int32 TransitionIndex);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetInstanceTransitionTimeElapsedFraction(int32 MachineIndex, int32 TransitionIndex);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) UAnimInstance* GetLinkedAnimGraphInstanceByTag(FName InTag) const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetLinkedAnimGraphInstancesByTag(FName InTag, TArray<UAnimInstance*>& OutLinkedInstances) const;  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) UAnimInstance* GetLinkedAnimLayerInstanceByClass(TSubclassOf<UAnimInstance> InClass) const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) UAnimInstance* GetLinkedAnimLayerInstanceByGroup(FName InGroup) const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) UAnimInstance* GetLinkedAnimLayerInstanceByGroupAndClass(FName InGroup, TSubclassOf<UAnimInstance> InClass) const;  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetLinkedAnimLayerInstancesByGroup(FName InGroup, TArray<UAnimInstance*>& OutLinkedInstances) const;  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) AActor* GetOwningActor() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) USkeletalMeshComponent* GetOwningComponent() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetPropagateNotifiesToLinkedInstances() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetReceiveNotifiesFromLinkedInstances() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetRelevantAnimLength(int32 MachineIndex, int32 StateIndex);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetRelevantAnimTime(int32 MachineIndex, int32 StateIndex);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetRelevantAnimTimeFraction(int32 MachineIndex, int32 StateIndex);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetRelevantAnimTimeRemaining(int32 MachineIndex, int32 StateIndex);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetRelevantAnimTimeRemainingFraction(int32 MachineIndex, int32 StateIndex);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) FMarkerSyncAnimPosition GetSyncGroupPosition(FName InSyncGroupName) const;  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetTimeToClosestMarker(FName SyncGroup, FName MarkerName, float& OutMarkerTime) const;  // parameters 0x15
    UFUNCTION(BlueprintCallable, BlueprintPure) bool HasMarkerBeenHitThisFrame(FName SyncGroup, FName MarkerName) const;  // parameters 0x11
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsAnyMontagePlaying() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsPlayingSlotAnimation(UAnimSequenceBase* Asset, FName SlotNodeName) const;  // parameters 0x11
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsSyncGroupBetweenMarkers(FName InSyncGroupName, FName PreviousMarker, FName NextMarker, bool bRespectMarkerOrder) const;  // parameters 0x1A
    UFUNCTION(BlueprintCallable) void LinkAnimClassLayers(TSubclassOf<UAnimInstance> InClass);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void LinkAnimGraphByTag(FName InTag, TSubclassOf<UAnimInstance> InClass);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void LockAIResources(bool bLockMovement, bool LockAILogic);  // parameters 0x2
    UFUNCTION(BlueprintCallable, BlueprintPure) float Montage_GetBlendTime(UAnimMontage* Montage) const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) FName Montage_GetCurrentSection(UAnimMontage* Montage) const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) bool Montage_GetIsStopped(UAnimMontage* Montage) const;  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) float Montage_GetPlayRate(UAnimMontage* Montage) const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) float Montage_GetPosition(UAnimMontage* Montage) const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) bool Montage_IsActive(UAnimMontage* Montage) const;  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) bool Montage_IsPlaying(UAnimMontage* Montage) const;  // parameters 0x9
    UFUNCTION(BlueprintCallable) void Montage_JumpToSection(FName SectionName, UAnimMontage* Montage);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void Montage_JumpToSectionsEnd(FName SectionName, UAnimMontage* Montage);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void Montage_Pause(UAnimMontage* Montage);  // parameters 0x8
    UFUNCTION(BlueprintCallable) float Montage_Play(UAnimMontage* MontageToPlay, float InPlayRate, EMontagePlayReturnType ReturnValueType, float InTimeToStartMontageAt, bool bStopAllMontages);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) void Montage_Resume(UAnimMontage* Montage);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void Montage_SetNextSection(FName SectionNameToChange, FName NextSection, UAnimMontage* Montage);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void Montage_SetPlayRate(UAnimMontage* Montage, float NewPlayRate);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void Montage_SetPosition(UAnimMontage* Montage, float NewPosition);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void Montage_Stop(float InBlendOutTime, UAnimMontage* Montage);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void Montage_StopGroupByName(float InBlendOutTime, FName GroupName);  // parameters 0xC
    UFUNCTION(BlueprintCallable) float PlaySlotAnimation(UAnimSequenceBase* Asset, FName SlotNodeName, float BlendInTime, float BlendOutTime, float InPlayRate, int32 LoopCount);  // parameters 0x24
    UFUNCTION(BlueprintCallable) UAnimMontage* PlaySlotAnimationAsDynamicMontage(UAnimSequenceBase* Asset, FName SlotNodeName, float BlendInTime, float BlendOutTime, float InPlayRate, int32 LoopCount, float BlendOutTriggerTime, float InTimeToStartMontageAt);  // parameters 0x30
    UFUNCTION(BlueprintCallable) void ResetDynamics(ETeleportType InTeleportType);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SavePoseSnapshot(FName SnapshotName);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetMorphTarget(FName MorphTargetName, float Value);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void SetPropagateNotifiesToLinkedInstances(bool bSet);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetReceiveNotifiesFromLinkedInstances(bool bSet);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetRootMotionMode(TEnumAsByte<ERootMotionMode> Value);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SnapshotPose(FPoseSnapshot& Snapshot);  // parameters 0x38
    UFUNCTION(BlueprintCallable) void StopSlotAnimation(float InBlendOutTime, FName SlotNodeName);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) APawn* TryGetPawnOwner() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable) void UnlinkAnimClassLayers(TSubclassOf<UAnimInstance> InClass);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void UnlockAIResources(bool bUnlockMovement, bool UnlockAILogic);  // parameters 0x2

    // Virtual functions that start here:
    //   CanRunParallelWork, CreateAnimInstanceProxy, DestroyAnimInstanceProxy, DisplayDebugInstance
    //   GetLODLevel, HandleNotify, Montage_Advance, Montage_UpdateWeight, NativeBeginPlay
    //   NativeInitializeAnimation, NativePostEvaluateAnimation, NativeUninitializeAnimation
    //   NativeUpdateAnimation, NativeUpdateAnimation_WorkerThread, OnMontageInstanceStopped
    //   OnUROPreInterpolation, OnUROPreInterpolation_AnyThread, OnUROSkipTickAnimation, PreUpdateAnimation
    //   SavePoseSnapshot, ShouldTriggerAnimNotifyState, SnapshotPose, TryGetPawnOwner
};
