// /Script/Icarus.VoxelResource
// Derives from: AIcarusActor > AActor > UObject
// size 0x5B0, declared in Icarus/Source/Icarus/Objects/VoxelResource.h

UCLASS(Config=Engine)
class AVoxelResource : public AIcarusActor
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bAllowReinitialisation;  // 0x02C0, size 0x1
    UPROPERTY(BlueprintAssignable) FOnVoxelLive OnVoxelLive;  // 0x02C8, size 0x10
    UPROPERTY(BlueprintAssignable) FOnVoxelMined OnVoxelMined;  // 0x02D8, size 0x10
protected:
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) UProceduralMeshComponent* GeneratedMeshComponent;  // 0x0350, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) USceneComponent* ReferenceMeshContainer;  // 0x0358, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) UStaticMeshComponent* NavmeshProxyComponent;  // 0x0360, size 0x8
    TArray<FVector,TSizedDefaultAllocator<32> > ReferenceMeshOrigin;  // 0x0368, not reflected
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVoxelDistributionRegionRowHandle ResourcePool;  // 0x0378, size 0x18
    TMap<FIntVector,FVoxelDataType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIntVector,FVoxelDataType,0> > VoxelMap;  // 0x0390, not reflected
    TSharedPtr<FVoxelCornerMap,0> CornerMap;  // 0x03E0, not reflected
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVoxelSetupDataRowHandle VoxelSetupRow;  // 0x03F0, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bUseMaterialFromRow;  // 0x0408, size 0x1
    bool bHasResourceTypeOverride;  // 0x0409, not reflected
    UPROPERTY(Replicated, ReplicatedUsing) FVoxelSetupDataRowHandle NonDeterministicVoxelSetup;  // 0x040C, size 0x18
    bool bDisableDeterministicGeneration;  // 0x0424, not reflected
    const EUVWrapMethod UVWrapMethod;  // 0x0425, not reflected
    const float BaseResourceCount;  // 0x0428, not reflected
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float VoxelSize;  // 0x042C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float VoxelSmoothing;  // 0x0430, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ExteriorNormalSmoothing;  // 0x0434, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 DebugInfoOutputMode;  // 0x0438, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 VoxelLife;  // 0x043C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 VoxelInstanceSeed;  // 0x0440, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bUseVoxelCache;  // 0x0444, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bUseComplexCache;  // 0x0445, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float AutoDestroyPercentage;  // 0x0448, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bWasMinedInstantly;  // 0x044C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bCanBeMinedInstantly;  // 0x044D, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bGrantZeroXP;  // 0x044E, size 0x1
    const float VoxelVolumeScaleStandardSize;  // 0x0450, not reflected
    const float VoxelVolumeScaleDivider;  // 0x0454, not reflected
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float ResourceVolume;  // 0x0458, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float TotalResourceCount;  // 0x045C, size 0x4
    FString VoxelCacheKey;  // 0x0460, not reflected
    FBoxCenterAndExtent VoxelGridCenterAndExtent;  // 0x0470, not reflected
    FIntVector DebugVoxelCoordinate;  // 0x0490, not reflected
    UPROPERTY(Replicated, ReplicatedUsing) FVoxelState VoxelState;  // 0x04A0, size 0x18
    FVoxelState LastVoxelState;  // 0x04B8, not reflected
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInterface* MiningDecalMaterial;  // 0x04D0, size 0x8
    UPROPERTY(Instanced) UDecalComponent* MiningDecal;  // 0x04D8, size 0x8
    FMeshSectionData PendingMeshInfo;  // 0x04E0, not reflected
    FVoxelThreadSafeEnum VoxelThreadState;  // 0x0548, not reflected
    int32 LastThreadState;  // 0x0560, not reflected
    TWeakObjectPtr<AIcarusPlayerController,FWeakObjectPtr> LastHitController;  // 0x0564, not reflected
    TWeakObjectPtr<AActor,FWeakObjectPtr> LastHitActor;  // 0x056C, not reflected
    float LastHitEfficiency;  // 0x0574, not reflected
    float FinalHitResourceMultiplier;  // 0x0578, not reflected
    float FinalHitPyriticCrustPercent;  // 0x057C, not reflected
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bUseVertexColourMasks;  // 0x0580, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float UVProjectionIslandDetectionRadius;  // 0x0584, size 0x4
    int32 TotalUnminedVoxels;  // 0x0588, not reflected
    int32 CurrentUnminedVoxels;  // 0x058C, not reflected
    int32 DatabaseOverrideUnminedVoxels;  // 0x0590, not reflected
    int32 NumResourcesGranted;  // 0x0594, not reflected
    bool bDropItemRewards;  // 0x0598, not reflected
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UFLODActorComponent* FLODActorComponent;  // 0x05A0, size 0x8
private:
    TSoftObjectPtr<UMaterialInterface> PendingMaterial;  // 0x02E8, not reflected
    FPendingTypeChange PendingTypeChange;  // 0x0310, not reflected
public:
    UFUNCTION(BlueprintCallable) void AddMinedSpheres(const TArray<FVoxelMinedSphere>& Spheres);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void ChangeDebugCoordinate(FIntVector Coordinate);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) TArray<FVoxelMinedSphere> GetMinedSpheres() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetRemainingResources() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetTotalResourceCount() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetVoxelFullyMined() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) EVoxelMinedState GetVoxelMinedState() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) void Initialise();
    UFUNCTION() void OnActorDamaged(FIcarusDamagePacket DamagePacket);  // parameters 0xD8
    UFUNCTION() void OnAsycMaterialLoadComplete();
    UFUNCTION() void OnFLODReveal(UFLODActorComponent* Component, AActor* Actor, const FTransform& Transform);  // parameters 0x40
    UFUNCTION() void OnRep_NonDeterministicVoxelSetup();
    UFUNCTION() void OnRep_VoxelState();
    UFUNCTION() void OnThreadStateChanged(int32 Flags);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void OnVoxelCompleted();
    UFUNCTION(BlueprintCallable) void ReadOrGenerateVoxelCache();
    UFUNCTION(BlueprintCallable) void Reinitialise();
    UFUNCTION(BlueprintCallable) void ResetVoxelMaterial();
    UFUNCTION(BlueprintNativeEvent) void ResourcesMined(float ResourceMinedCount, AIcarusPlayerController* LastHitPlayerController);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetDisableDeterministicGeneration(bool bShouldDisable);  // parameters 0x1
    UFUNCTION() void SetNonDeterministicVoxelSetup(const FVoxelSetupDataRowHandle& NewSetup);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void SetVoxelMaterial(UMaterialInterface* Material);  // parameters 0x8
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void UpdateExperienceComponent(const FItemTemplateRowHandle& ForResourceType);  // parameters 0x18
};
