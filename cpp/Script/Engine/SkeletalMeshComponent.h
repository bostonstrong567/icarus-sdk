// /Script/Engine.SkeletalMeshComponent
// Derives from: USkinnedMeshComponent > UMeshComponent > UPrimitiveComponent > USceneComponent > UActorComponent > UObject
// size 0xED0, declared in Engine/Source/Runtime/Engine/Classes/Components/SkeletalMeshComponent.h

UCLASS(EditInlineNew, Config=Engine)
class USkeletalMeshComponent : public USkinnedMeshComponent, public IInterface_CollisionDataProvider
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(BlueprintReadOnly) TSubclassOf<UObject> AnimBlueprintGeneratedClass;  // 0x06A0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TSubclassOf<UAnimInstance> AnimClass;  // 0x06A8, size 0x8
    UPROPERTY(Transient) UAnimInstance* AnimScriptInstance;  // 0x06B0, size 0x8
    UPROPERTY(Transient) UAnimInstance* PostProcessAnimInstance;  // 0x06B8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSingleAnimationPlayData AnimationData;  // 0x06C0, size 0x18
    TArray<FTransform,TSizedDefaultAllocator<32> > BoneSpaceTransforms;  // 0x06D8, not reflected
    UPROPERTY(Transient) FVector RootBoneTranslation;  // 0x06E8, size 0xC
    UPROPERTY() FVector LineCheckBoundsScale;  // 0x06F4, size 0xC
    FBlendedHeapCurve AnimCurves;  // 0x0700, not reflected
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float GlobalAnimRateScale;  // 0x08B0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<EKinematicBonesUpdateToPhysics> KinematicBonesUpdateType;  // 0x08B4, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<EPhysicsTransformUpdateMode> PhysicsTransformUpdateMode;  // 0x08B5, size 0x1
    EClothingTeleportMode ClothTeleportMode;  // 0x08B6, not reflected
    uint8 : 1 bLocalSpaceKinematics;  // 0x08B9, not reflected
    uint8 : 1 bSimulationUpdatesChildTransforms;  // 0x08B9, not reflected
    UPROPERTY(EditAnywhere) uint8 bUpdateOverlapsOnAnimationFinalize : 1;  // 0x08B9, mask 0x04
    UPROPERTY(Transient) uint8 bHasValidBodies : 1;  // 0x08B9, mask 0x10
    UPROPERTY(Transient) uint8 bBlendPhysics : 1;  // 0x08B9, mask 0x20
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bEnablePhysicsOnDedicatedServer : 1;  // 0x08B9, mask 0x40
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bUpdateJointsFromAnimation : 1;  // 0x08B9, mask 0x80
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bDisableClothSimulation : 1;  // 0x08BA, mask 0x01
    int32 DeferredKinematicUpdateIndex;  // 0x08BC, not reflected
    uint8 : 1 bDeferredKinematicUpdate;  // 0x08C0, not reflected
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bCollideWithEnvironment : 1;  // 0x08C0, mask 0x80
    uint8 : 1 bPrevDisableClothSimulation;  // 0x08C1, not reflected
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bCollideWithAttachedChildren : 1;  // 0x08C1, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bLocalSpaceSimulation : 1;  // 0x08C1, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bResetAfterTeleport : 1;  // 0x08C1, mask 0x04
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bDeferKinematicBoneUpdate : 1;  // 0x08C1, mask 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bNoSkeletonUpdate : 1;  // 0x08C1, mask 0x20
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bPauseAnims : 1;  // 0x08C1, mask 0x40
    UPROPERTY(EditAnywhere) uint8 bUseRefPoseOnInitAnim : 1;  // 0x08C1, mask 0x80
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bEnablePerPolyCollision : 1;  // 0x08C2, mask 0x01
    UPROPERTY() uint8 bForceRefpose : 1;  // 0x08C2, mask 0x02
    UPROPERTY(Transient) uint8 bOnlyAllowAutonomousTickPose : 1;  // 0x08C2, mask 0x04
    UPROPERTY(Transient) uint8 bIsAutonomousTickPose : 1;  // 0x08C2, mask 0x08
    UPROPERTY() uint8 bOldForceRefPose : 1;  // 0x08C2, mask 0x10
    UPROPERTY() uint8 bShowPrePhysBones : 1;  // 0x08C2, mask 0x20
    UPROPERTY(Transient) uint8 bRequiredBonesUpToDate : 1;  // 0x08C2, mask 0x40
    UPROPERTY(Transient) uint8 bAnimTreeInitialised : 1;  // 0x08C2, mask 0x80
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bIncludeComponentLocationIntoBounds : 1;  // 0x08C3, mask 0x01
    UPROPERTY() uint8 bEnableLineCheckWithBounds : 1;  // 0x08C3, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bPropagateCurvesToSlaves : 1;  // 0x08C3, mask 0x04
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bSkipKinematicUpdateWhenInterpolating : 1;  // 0x08C3, mask 0x08
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bSkipBoundsUpdateWhenInterpolating : 1;  // 0x08C3, mask 0x10
    UPROPERTY(Transient) uint16 CachedAnimCurveUidVersion;  // 0x08C6, size 0x2
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float ClothBlendWeight;  // 0x08C8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bWaitForParallelClothTask;  // 0x08CC, size 0x1
    UPROPERTY(Transient) UBodySetup* BodySetup;  // 0x08E0, size 0x8
    int32 RagdollAggregateThreshold;  // 0x08E8, not reflected
    float ClothMaxDistanceScale;  // 0x08EC, not reflected
    UPROPERTY(BlueprintAssignable) FConstraintBrokenSignature OnConstraintBroken;  // 0x08F0, size 0x10
    UPROPERTY(EditAnywhere) TSubclassOf<UClothingSimulationFactory> ClothingSimulationFactory;  // 0x0900, size 0x8
    TArray<USkeletalMeshComponent::FPendingRadialForces,TSizedDefaultAllocator<32> > PendingRadialForces;  // 0x0908, not reflected
    USkeletalMeshComponent::<unnamed-type-RootBodyData> RootBodyData;  // 0x0920, not reflected
    TArray<unsigned short,TSizedDefaultAllocator<32> > RequiredBones;  // 0x0960, not reflected
    TArray<unsigned short,TSizedDefaultAllocator<32> > FillComponentSpaceTransformsRequiredBones;  // 0x0970, not reflected
    TArray<FBodyInstance *,TSizedDefaultAllocator<32> > Bodies;  // 0x0980, not reflected
    TArray<FConstraintInstance *,TSizedDefaultAllocator<32> > Constraints;  // 0x0990, not reflected
    FPhysicsAggregateHandle_PhysX Aggregate;  // 0x09A0, not reflected
    FSkeletalMeshComponentClothTickFunction ClothTickFunction;  // 0x09A8, not reflected
    UPROPERTY(BlueprintAssignable) FOnAnimInitialized OnAnimInitialized;  // 0x0B10, size 0x10
    FOnBoneTransformsFinalized OnBoneTransformsFinalized;  // 0x0B20, not reflected
protected:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TEnumAsByte<EAnimationMode> AnimationMode;  // 0x08B7, size 0x1
    uint8 : 1 bClothingSimulationSuspended;  // 0x08C3, not reflected
    uint8 : 1 bNotifySyncComponentToRBPhysics;  // 0x08C3, not reflected
    TMap<int,FClothSimulData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FClothSimulData,0> > CurrentSimulationData;  // 0x0A60, not reflected
    FSkeletalMeshComponentEndPhysicsTickFunction EndPhysicsTickFunction;  // 0x0B30, not reflected
private:
    UPROPERTY(Transient) TArray<UAnimInstance*> LinkedInstances;  // 0x0730, size 0x10
    UPROPERTY(Transient) TArray<FTransform> CachedBoneSpaceTransforms;  // 0x0740, size 0x10
    UPROPERTY(Transient) TArray<FTransform> CachedComponentSpaceTransforms;  // 0x0750, size 0x10
    FBlendedHeapCurve CachedCurve;  // 0x0760, not reflected
    FHeapCustomAttributes CachedAttributes;  // 0x0790, not reflected
    FHeapCustomAttributes CustomAttributes;  // 0x0820, not reflected
    ETeleportType PendingTeleportType;  // 0x08B8, not reflected
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bDisablePostProcessBlueprint : 1;  // 0x08B9, mask 0x01
    uint8 : 1 bBindClothToMasterComponent;  // 0x08C0, not reflected
    uint8 : 1 bPendingClothCollisionUpdate;  // 0x08C0, not reflected
    uint8 : 1 bPendingClothTransformUpdate;  // 0x08C0, not reflected
    UPROPERTY(EditAnywhere) uint8 bDisableRigidBodyAnimNode : 1;  // 0x08C0, mask 0x02
    UPROPERTY(EditAnywhere) uint8 bAllowAnimCurveEvaluation : 1;  // 0x08C0, mask 0x04
    UPROPERTY(Deprecated) uint8 bDisableAnimCurves : 1;  // 0x08C0, mask 0x08
    UPROPERTY(Transient) uint8 bNeedsQueuedAnimEventsDispatched : 1;  // 0x08C3, mask 0x80
    uint8 : 1 bPostEvaluatingAnimation;  // 0x08C4, not reflected
    UPROPERTY(Transient) TArray<FName> DisallowedAnimCurves;  // 0x08D0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TeleportDistanceThreshold;  // 0x09D8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TeleportRotationThreshold;  // 0x09DC, size 0x4
    float ClothTeleportCosineThresholdInRad;  // 0x09E0, not reflected
    float ClothTeleportDistThresholdSquared;  // 0x09E4, not reflected
    UPROPERTY(Transient) uint32 LastPoseTickFrame;  // 0x09E8, size 0x4
    FMatrix PrevRootBoneMatrix;  // 0x09F0, not reflected
    IClothingSimulation * ClothingSimulation;  // 0x0A30, not reflected
    IClothingSimulationContext * ClothingSimulationContext;  // 0x0A38, not reflected
    UPROPERTY(Transient) UClothingSimulationInteractor* ClothingInteractor;  // 0x0A40, size 0x8
    TArray<USkeletalMeshComponent::FClothCollisionSource,TSizedDefaultAllocator<32> > ClothCollisionSources;  // 0x0A48, not reflected
    TRefCountPtr<FGraphEvent> ParallelClothTask;  // 0x0A58, not reflected
    TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0> > MorphTargetCurves;  // 0x0AB0, not reflected
    TArray<unsigned short,TSizedDefaultAllocator<32> > CachedCurveUIDList;  // 0x0B00, not reflected
    TRefCountPtr<FGraphEvent> ParallelAnimationEvaluationTask;  // 0x0B60, not reflected
    TRefCountPtr<FGraphEvent> ParallelBlendPhysicsCompletionTask;  // 0x0B68, not reflected
    FAnimationEvaluationContext AnimEvaluationContext;  // 0x0B70, not reflected
    FHeapCustomAttributes[2] AttributesArray;  // 0x0D60, not reflected
    TMulticastDelegate<void __cdecl(void),FDefaultDelegateUserPolicy> OnSkelMeshPhysicsCreated;  // 0x0E80, not reflected
    TMulticastDelegate<void __cdecl(void),FDefaultDelegateUserPolicy> OnSkelMeshPhysicsTeleported;  // 0x0E98, not reflected
    TMulticastDelegate<void __cdecl(void),FDefaultDelegateUserPolicy> OnBoneTransformsFinalizedMC;  // 0x0EB0, not reflected
public:
    UFUNCTION(BlueprintCallable) void AccumulateAllBodiesBelowPhysicsBlendWeight(const FName& InBoneName, float AddPhysicsBlendWeight, bool bSkipCustomPhysicsType);  // parameters 0xD
    UFUNCTION(BlueprintCallable) void AddForceToAllBodiesBelow(FVector Force, FName BoneName, bool bAccelChange, bool bIncludeSelf);  // parameters 0x16
    UFUNCTION(BlueprintCallable) void AddImpulseToAllBodiesBelow(FVector Impulse, FName BoneName, bool bVelChange, bool bIncludeSelf);  // parameters 0x16
    UFUNCTION(BlueprintCallable) void AllowAnimCurveEvaluation(FName NameOfCurve, bool bAllow);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void BindClothToMasterPoseComponent();
    UFUNCTION(BlueprintCallable) void BreakConstraint(FVector Impulse, FVector HitLocation, FName InBoneName);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void ClearMorphTargets();
    UFUNCTION(BlueprintCallable) FName FindConstraintBoneName(int32 ConstraintIndex);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void ForceClothNextUpdateTeleport();
    UFUNCTION(BlueprintCallable) void ForceClothNextUpdateTeleportAndReset();
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetAllowRigidBodyAnimNode() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetAllowedAnimCurveEvaluate() const;  // parameters 0x1
    UFUNCTION() TSubclassOf<UObject> GetAnimClass();  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) UAnimInstance* GetAnimInstance() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) TEnumAsByte<EAnimationMode> GetAnimationMode() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetBoneMass(FName BoneName, bool bScaleMass) const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetClothMaxDistanceScale() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) UClothingSimulationInteractor* GetClothingSimulationInteractor() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable) void GetCurrentJointAngles(FName InBoneName, float& Swing1Angle, float& TwistAngle, float& Swing2Angle);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetDisableAnimCurves() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetDisablePostProcessBlueprint() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) bool GetFloatAttribute(const FName& BoneName, const FName& AttributeName, float DefaultValue, float& OutValue, ECustomBoneAttributeLookup LookupType);  // parameters 0x1A
    UFUNCTION(BlueprintCallable) bool GetFloatAttribute_Ref(const FName& BoneName, const FName& AttributeName, float& OutValue, ECustomBoneAttributeLookup LookupType);  // parameters 0x16
    UFUNCTION(BlueprintCallable) bool GetIntegerAttribute(const FName& BoneName, const FName& AttributeName, int32 DefaultValue, int32& OutValue, ECustomBoneAttributeLookup LookupType);  // parameters 0x1A
    UFUNCTION(BlueprintCallable) bool GetIntegerAttribute_Ref(const FName& BoneName, const FName& AttributeName, int32& OutValue, ECustomBoneAttributeLookup LookupType);  // parameters 0x16
    UFUNCTION(BlueprintCallable, BlueprintPure) UAnimInstance* GetLinkedAnimGraphInstanceByTag(FName InTag) const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetLinkedAnimGraphInstancesByTag(FName InTag, TArray<UAnimInstance*>& OutLinkedInstances) const;  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) UAnimInstance* GetLinkedAnimLayerInstanceByClass(TSubclassOf<UAnimInstance> InClass) const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) UAnimInstance* GetLinkedAnimLayerInstanceByGroup(FName InGroup) const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetMorphTarget(FName MorphTargetName) const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetPlayRate() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetPosition() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) UAnimInstance* GetPostProcessInstance() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector GetSkeletalCenterOfMass() const;  // parameters 0xC
    UFUNCTION(BlueprintCallable) bool GetStringAttribute(const FName& BoneName, const FName& AttributeName, FString DefaultValue, FString& OutValue, ECustomBoneAttributeLookup LookupType);  // parameters 0x32
    UFUNCTION(BlueprintCallable) bool GetStringAttribute_Ref(const FName& BoneName, const FName& AttributeName, FString& OutValue, ECustomBoneAttributeLookup LookupType);  // parameters 0x22
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetTeleportDistanceThreshold() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetTeleportRotationThreshold() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) bool HasValidAnimationInstance() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) bool IsBodyGravityEnabled(FName BoneName);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsClothingSimulationSuspended() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsPlaying() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool K2_GetClosestPointOnPhysicsAsset(const FVector& WorldPosition, FVector& ClosestWorldPosition, FVector& Normal, FName& BoneName, float& Distance) const;  // parameters 0x31
    UFUNCTION(BlueprintCallable) void LinkAnimClassLayers(TSubclassOf<UAnimInstance> InClass);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void LinkAnimGraphByTag(FName InTag, TSubclassOf<UAnimInstance> InClass);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OverrideAnimationData(UAnimationAsset* InAnimToPlay, bool bIsLooping, bool bIsPlaying, float Position, float PlayRate);  // parameters 0x14
    UFUNCTION(BlueprintCallable) void Play(bool bLooping);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void PlayAnimation(UAnimationAsset* NewAnimToPlay, bool bLooping);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void ResetAllBodiesSimulatePhysics();
    UFUNCTION(BlueprintCallable) void ResetAllowedAnimCurveEvaluation();
    UFUNCTION(BlueprintCallable) void ResetAnimInstanceDynamics(ETeleportType InTeleportType);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void ResetClothTeleportMode();
    UFUNCTION(BlueprintCallable) void ResumeClothingSimulation();
    UFUNCTION(BlueprintCallable) void SetAllBodiesBelowPhysicsBlendWeight(const FName& InBoneName, float PhysicsBlendWeight, bool bSkipCustomPhysicsType, bool bIncludeSelf);  // parameters 0xE
    UFUNCTION(BlueprintCallable) void SetAllBodiesBelowSimulatePhysics(const FName& InBoneName, bool bNewSimulate, bool bIncludeSelf);  // parameters 0xA
    UFUNCTION(BlueprintCallable) void SetAllBodiesPhysicsBlendWeight(float PhysicsBlendWeight, bool bSkipCustomPhysicsType);  // parameters 0x5
    UFUNCTION(BlueprintCallable) void SetAllBodiesSimulatePhysics(bool bNewSimulate);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetAllMotorsAngularDriveParams(float InSpring, float InDamping, float InForceLimit, bool bSkipCustomPhysicsType);  // parameters 0xD
    UFUNCTION(BlueprintCallable) void SetAllMotorsAngularPositionDrive(bool bEnableSwingDrive, bool bEnableTwistDrive, bool bSkipCustomPhysicsType);  // parameters 0x3
    UFUNCTION(BlueprintCallable) void SetAllMotorsAngularVelocityDrive(bool bEnableSwingDrive, bool bEnableTwistDrive, bool bSkipCustomPhysicsType);  // parameters 0x3
    UFUNCTION(BlueprintCallable) void SetAllowAnimCurveEvaluation(bool bInAllow);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetAllowRigidBodyAnimNode(bool bInAllow, bool bReinitAnim);  // parameters 0x2
    UFUNCTION(BlueprintCallable) void SetAllowedAnimCurvesEvaluation(const TArray<FName>& List, bool bAllow);  // parameters 0x11
    UFUNCTION(BlueprintCallable) void SetAngularLimits(FName InBoneName, float Swing1LimitAngle, float TwistLimitAngle, float Swing2LimitAngle);  // parameters 0x14
    UFUNCTION(BlueprintCallable) void SetAnimClass(TSubclassOf<UObject> NewClass);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetAnimation(UAnimationAsset* NewAnimToPlay);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetAnimationMode(TEnumAsByte<EAnimationMode> InAnimationMode);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetBodyNotifyRigidBodyCollision(bool bNewNotifyRigidBodyCollision, FName BoneName);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void SetClothMaxDistanceScale(float Scale);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetConstraintProfile(FName JointName, FName ProfileName, bool bDefaultIfNotFound);  // parameters 0x11
    UFUNCTION(BlueprintCallable) void SetConstraintProfileForAll(FName ProfileName, bool bDefaultIfNotFound);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void SetDisableAnimCurves(bool bInDisableAnimCurves);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetDisablePostProcessBlueprint(bool bInDisablePostProcess);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetEnableBodyGravity(bool bEnableGravity, FName BoneName);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void SetEnableGravityOnAllBodiesBelow(bool bEnableGravity, FName BoneName, bool bIncludeSelf);  // parameters 0xD
    UFUNCTION(BlueprintCallable) void SetEnablePhysicsBlending(bool bNewBlendPhysics);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetMorphTarget(FName MorphTargetName, float Value, bool bRemoveZeroWeight);  // parameters 0xD
    UFUNCTION(BlueprintCallable) void SetNotifyRigidBodyCollisionBelow(bool bNewNotifyRigidBodyCollision, FName BoneName, bool bIncludeSelf);  // parameters 0xD
    UFUNCTION(BlueprintCallable) void SetPhysicsBlendWeight(float PhysicsBlendWeight);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetPlayRate(float Rate);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetPosition(float InPos, bool bFireNotifies);  // parameters 0x5
    UFUNCTION(BlueprintCallable) void SetTeleportDistanceThreshold(float Threshold);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetTeleportRotationThreshold(float Threshold);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetUpdateAnimationInEditor(bool NewUpdateState);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetUpdateClothInEditor(bool NewUpdateState);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SnapshotPose(FPoseSnapshot& Snapshot);  // parameters 0x38
    UFUNCTION(BlueprintCallable) void Stop();
    UFUNCTION(BlueprintCallable) void SuspendClothingSimulation();
    UFUNCTION(BlueprintCallable) void TermBodiesBelow(FName ParentBoneName);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void ToggleDisablePostProcessBlueprint();
    UFUNCTION(BlueprintCallable) void UnbindClothFromMasterPoseComponent(bool bRestoreSimulationSpace);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void UnlinkAnimClassLayers(TSubclassOf<UAnimInstance> InClass);  // parameters 0x8

    // Virtual functions that start here:
    //   AddForceToAllBodiesBelow, AddImpulseToAllBodiesBelow, CheckClothTeleport
    //   CompleteParallelAnimationEvaluation, InitAnim, IsWindEnabled, K2_SetAnimInstanceClass
    //   NotifySkelControlBeyondLimit, OnSyncComponentToRBPhysics, RegisterEndPhysicsTick, SetAnimClass
    //   SetBodyNotifyRigidBodyCollision, SetNotifyRigidBodyCollisionBelow, ShouldRunClothTick
    //   SkelMeshCompOnParticleSystemFinished
};
