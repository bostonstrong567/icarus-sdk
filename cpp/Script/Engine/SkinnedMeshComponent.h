// /Script/Engine.SkinnedMeshComponent
// Derives from: UMeshComponent > UPrimitiveComponent > USceneComponent > UActorComponent > UObject
// size 0x6A0, declared in Engine/Source/Runtime/Engine/Classes/Components/SkinnedMeshComponent.h

UCLASS(Abstract, EditInlineNew, Config=Engine)
class USkinnedMeshComponent : public UMeshComponent, public ILODSyncInterface
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) USkeletalMesh* SkeletalMesh;  // 0x0480, size 0x8
    UPROPERTY(Instanced, BlueprintReadOnly) TWeakObjectPtr<USkinnedMeshComponent> MasterPoseComponent;  // 0x0488, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TArray<ESkinCacheUsage> SkinCacheUsage;  // 0x0490, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TArray<FVertexOffsetUsage> VertexOffsetUsage;  // 0x04A0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UPhysicsAsset* PhysicsAssetOverride;  // 0x05A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 ForcedLodModel;  // 0x05B0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 MinLodModel;  // 0x05B4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float StreamingDistanceMultiplier;  // 0x05C0, size 0x4
    UPROPERTY(Transient) TArray<FSkelMeshComponentLODInfo> LODInfo;  // 0x05D0, size 0x10
    UPROPERTY(EditAnywhere, Config, Interp, BlueprintReadWrite) EVisibilityBasedAnimTickOption VisibilityBasedAnimTickOption;  // 0x0604, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bOverrideMinLod : 1;  // 0x0606, mask 0x08
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bUseBoundsFromMasterPoseComponent : 1;  // 0x0606, mask 0x10
    UPROPERTY() uint8 bForceWireframe : 1;  // 0x0606, mask 0x20
    UPROPERTY(Deprecated) uint8 bDisplayBones : 1;  // 0x0606, mask 0x40
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bDisableMorphTarget : 1;  // 0x0606, mask 0x80
    UPROPERTY() uint8 bHideSkin : 1;  // 0x0607, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bPerBoneMotionBlur : 1;  // 0x0607, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bComponentUseFixedSkelBounds : 1;  // 0x0607, mask 0x04
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bConsiderAllBodiesForBounds : 1;  // 0x0607, mask 0x08
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bSyncAttachParentLOD : 1;  // 0x0607, mask 0x10
    UPROPERTY(Transient) uint8 bCanHighlightSelectedSections : 1;  // 0x0607, mask 0x20
    UPROPERTY(Transient) uint8 bRecentlyRendered : 1;  // 0x0607, mask 0x40
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bCastCapsuleDirectShadow : 1;  // 0x0607, mask 0x80
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bCastCapsuleIndirectShadow : 1;  // 0x0608, mask 0x01
    UPROPERTY(Transient) uint8 bCPUSkinning : 1;  // 0x0608, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bEnableUpdateRateOptimizations : 1;  // 0x0608, mask 0x04
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bDisplayDebugUpdateRateOptimizations : 1;  // 0x0608, mask 0x08
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bRenderStatic : 1;  // 0x0608, mask 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bIgnoreMasterPoseComponentLOD : 1;  // 0x0608, mask 0x20
    UPROPERTY(Transient) uint8 bCachedLocalBoundsUpToDate : 1;  // 0x0609, mask 0x01
    UPROPERTY(Transient) uint8 bForceMeshObjectUpdate : 1;  // 0x0609, mask 0x04
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float CapsuleIndirectShadowMinVisibility;  // 0x060C, size 0x4
    UPROPERTY(Transient) FBoxSphereBounds CachedWorldSpaceBounds;  // 0x0620, size 0x1C
    UPROPERTY(Transient) FMatrix CachedWorldToLocalTransform;  // 0x0640, size 0x40

    // Not reflected: the engine's scripting cannot see these.
    TArray<FTransform,TSizedDefaultAllocator<32> >[2] ComponentSpaceTransformsArray;  // 0x04B0, private
    TArray<unsigned char,TSizedDefaultAllocator<32> > PreviousBoneVisibilityStates;  // 0x04D0, protected
    TArray<FTransform,TSizedDefaultAllocator<32> > PreviousComponentSpaceTransformsArray;  // 0x04E0, protected
    int32 CurrentEditableComponentTransforms;  // 0x04F0, protected
    int32 CurrentReadComponentTransforms;  // 0x04F4, protected
    uint32 CurrentBoneTransformRevisionNumber;  // 0x04F8, protected
    int32 MasterBoneMapCacheCount;  // 0x04FC, protected
    TArray<TWeakObjectPtr<USkinnedMeshComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32> > SlavePoseComponents;  // 0x0500, protected
    TArray<int,TSizedDefaultAllocator<32> > MasterBoneMap;  // 0x0510, protected
    TMap<int,USkinnedMeshComponent::FMissingMasterBoneCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,USkinnedMeshComponent::FMissingMasterBoneCacheEntry,0> > MissingMasterBoneMap;  // 0x0520, protected
    TSortedMap<FName,FName,TSizedDefaultAllocator<32>,FNameFastLess> SocketOverrideLookup;  // 0x0570, protected
    FSkelMeshRefPoseOverride * RefPoseOverride;  // 0x0580, protected
    TArray<FActiveMorphTarget,TSizedDefaultAllocator<32> > ActiveMorphTargets;  // 0x0588
    TArray<float,TSizedDefaultAllocator<32> > MorphTargetWeights;  // 0x0598
    int32 PredictedLODLevel;  // 0x05B8
    float MaxDistanceFactor;  // 0x05BC
    float ExternalInterpolationAlpha;  // 0x05C4, protected
    float ExternalDeltaTime;  // 0x05C8, protected
    TArray<unsigned char,TSizedDefaultAllocator<32> >[2] BoneVisibilityStates;  // 0x05E0, protected
    ERHIFeatureLevel::Type CachedSceneFeatureLevel;  // 0x0600, protected
    uint8 ExternalTickRate;  // 0x0605, protected
    uint8 : 1 bHasValidBoneTransform;  // 0x0606, protected
    uint8 : 1 bSkinWeightProfileSet;  // 0x0606, protected
    uint8 : 1 bSkinWeightProfilePending;  // 0x0606, protected
    uint8 : 1 bDoubleBufferedComponentSpaceTransforms;  // 0x0608, protected
    uint8 : 1 bNeedToFlipSpaceBaseBuffers;  // 0x0608, protected
    uint8 : 1 bBoneVisibilityDirty;  // 0x0609, protected
    uint8 : 1 bExternalTickRateControlled;  // 0x0609, protected
    uint8 : 1 bExternalInterpolate;  // 0x0609, protected
    uint8 : 1 bExternalUpdate;  // 0x0609, protected
    uint8 : 1 bExternalEvaluationRateLimited;  // 0x0609, protected
    FSkeletalMeshObject * MeshObject;  // 0x0610
    FName CurrentSkinWeightProfileName;  // 0x0618, protected
    TDelegate<void __cdecl(FAnimUpdateRateParameters *),FDefaultDelegateUserPolicy> OnAnimUpdateRateParamsCreated;  // 0x0680
    FAnimUpdateRateParameters * AnimUpdateRateParams;  // 0x0690

    UFUNCTION(BlueprintCallable, BlueprintPure) bool BoneIsChildOf(FName BoneName, FName ParentBoneName) const;  // parameters 0x11
    UFUNCTION(BlueprintCallable) void ClearSkinWeightOverride(int32 LODIndex);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ClearSkinWeightProfile();
    UFUNCTION(BlueprintCallable) void ClearVertexColorOverride(int32 LODIndex);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) FName FindClosestBone_K2(FVector TestLocation, FVector& BoneLocation, float IgnoreScale, bool bRequirePhysicsAsset) const;  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetBoneIndex(FName BoneName) const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) FName GetBoneName(int32 BoneIndex) const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) FName GetCurrentSkinWeightProfileName() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) FTransform GetDeltaTransformFromRefPose(FName BoneName, FName BaseName) const;  // parameters 0x40
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetForcedLOD() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetNumBones() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetNumLODs() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) FName GetParentBone(FName BoneName) const;  // parameters 0x10
    UFUNCTION(BlueprintCallable) FVector GetRefPosePosition(int32 BoneIndex);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) FName GetSocketBoneName(FName InSocketName) const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetTwistAndSwingAngleOfDeltaRotationFromRefPose(FName BoneName, float& OutTwistAngle, float& OutSwingAngle) const;  // parameters 0x11
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetVertexOffsetUsage(int32 LODIndex) const;  // parameters 0x8
    UFUNCTION(BlueprintCallable) void HideBoneByName(FName BoneName, TEnumAsByte<EPhysBodyOp> PhysBodyOption);  // parameters 0x9
    UFUNCTION(BlueprintCallable) bool IsBoneHiddenByName(FName BoneName);  // parameters 0x9
    UFUNCTION(BlueprintCallable) bool IsMaterialSectionShown(int32 MaterialID, int32 LODIndex);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsUsingSkinWeightProfile() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetCapsuleIndirectShadowMinVisibility(float NewValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetCastCapsuleDirectShadow(bool bNewValue);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetCastCapsuleIndirectShadow(bool bNewValue);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetForcedLOD(int32 InNewForcedLOD);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetMasterPoseComponent(USkinnedMeshComponent* NewMasterBoneComponent, bool bForceUpdate);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void SetMinLOD(int32 InNewMinLOD);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetPhysicsAsset(UPhysicsAsset* NewPhysicsAsset, bool bForceReInit);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void SetPostSkinningOffsets(int32 LODIndex, TArray<FVector> Offsets);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void SetPreSkinningOffsets(int32 LODIndex, TArray<FVector> Offsets);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void SetRenderStatic(bool bNewValue);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetSkeletalMesh(USkeletalMesh* NewMesh, bool bReinitPose);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void SetSkinWeightOverride(int32 LODIndex, const TArray<FSkelMeshSkinWeightInfo>& SkinWeights);  // parameters 0x18
    UFUNCTION(BlueprintCallable) bool SetSkinWeightProfile(FName InProfileName);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void SetVertexColorOverride_LinearColor(int32 LODIndex, const TArray<FLinearColor>& VertexColors);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void SetVertexOffsetUsage(int32 LODIndex, int32 Usage);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void ShowAllMaterialSections(int32 LODIndex);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ShowMaterialSection(int32 MaterialID, int32 SectionIndex, bool bShow, int32 LODIndex);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void TransformFromBoneSpace(FName BoneName, FVector InPosition, FRotator InRotation, FVector& OutPosition, FRotator& OutRotation);  // parameters 0x38
    UFUNCTION(BlueprintCallable, BlueprintPure) void TransformToBoneSpace(FName BoneName, FVector InPosition, FRotator InRotation, FVector& OutPosition, FRotator& OutRotation) const;  // parameters 0x38
    UFUNCTION(BlueprintCallable) void UnHideBoneByName(FName BoneName);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void UnloadSkinWeightProfile(FName InProfileName);  // parameters 0x8

    // Virtual functions that start here:
    //   AddSlavePoseComponent, AllocateTransformData, ClearRefPoseOverride, DeallocateTransformData
    //   DispatchParallelTickPose, FinalizeBoneTransform, FindMorphTarget, GetRefPoseOverride, HideBone
    //   IsPlayingNetworkedRootMotionMontage, IsPlayingRootMotion, IsPlayingRootMotionFromEverything
    //   PostInitMeshObject, RefreshBoneTransforms, RefreshMorphTargets, RemoveSlavePoseComponent
    //   SetPhysicsAsset, SetPredictedLODLevel, SetRefPoseOverride, SetSkeletalMesh, ShouldCPUSkin
    //   ShouldTickPose, ShouldUpdateTransform, TickPose, UnHideBone, UpdateLODStatus, UpdateSlaveComponent
    //   UpdateVisualizeLODString
};
