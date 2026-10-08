// /Script/Icarus.VoxelResource
// Derives from: AIcarusActor > AActor > UObject
// size 0x5B0, declared in Icarus/Source/Icarus/Objects/VoxelResource.h

UCLASS(Config=Engine)
class AVoxelResource : public AIcarusActor
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bAllowReinitialisation;  // 0x02C0, size 0x1
    UPROPERTY(BlueprintAssignable) FOnVoxelLive OnVoxelLive;  // 0x02C8, size 0x10
    UPROPERTY(BlueprintAssignable) FOnVoxelMined OnVoxelMined;  // 0x02D8, size 0x10
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) UProceduralMeshComponent* GeneratedMeshComponent;  // 0x0350, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) USceneComponent* ReferenceMeshContainer;  // 0x0358, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) UStaticMeshComponent* NavmeshProxyComponent;  // 0x0360, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVoxelDistributionRegionRowHandle ResourcePool;  // 0x0378, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVoxelSetupDataRowHandle VoxelSetupRow;  // 0x03F0, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bUseMaterialFromRow;  // 0x0408, size 0x1
    UPROPERTY(Replicated, ReplicatedUsing) FVoxelSetupDataRowHandle NonDeterministicVoxelSetup;  // 0x040C, size 0x18
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
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float ResourceVolume;  // 0x0458, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float TotalResourceCount;  // 0x045C, size 0x4
    UPROPERTY(Replicated, ReplicatedUsing) FVoxelState VoxelState;  // 0x04A0, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInterface* MiningDecalMaterial;  // 0x04D0, size 0x8
    UPROPERTY(Instanced) UDecalComponent* MiningDecal;  // 0x04D8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bUseVertexColourMasks;  // 0x0580, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float UVProjectionIslandDetectionRadius;  // 0x0584, size 0x4
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UFLODActorComponent* FLODActorComponent;  // 0x05A0, size 0x8

    // Not reflected: the engine's scripting cannot see these.
    TSoftObjectPtr<UMaterialInterface> PendingMaterial;  // 0x02E8, private
    FPendingTypeChange PendingTypeChange;  // 0x0310, private
    TArray<FVector,TSizedDefaultAllocator<32> > ReferenceMeshOrigin;  // 0x0368, protected
    TMap<FIntVector,FVoxelDataType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIntVector,FVoxelDataType,0> > VoxelMap;  // 0x0390, protected
    TSharedPtr<FVoxelCornerMap,0> CornerMap;  // 0x03E0, protected
    bool bHasResourceTypeOverride;  // 0x0409, protected
    bool bDisableDeterministicGeneration;  // 0x0424, protected
    const EUVWrapMethod UVWrapMethod;  // 0x0425, protected
    const float BaseResourceCount;  // 0x0428, protected
    const float VoxelVolumeScaleStandardSize;  // 0x0450, protected
    const float VoxelVolumeScaleDivider;  // 0x0454, protected
    FString VoxelCacheKey;  // 0x0460, protected
    FBoxCenterAndExtent VoxelGridCenterAndExtent;  // 0x0470, protected
    FIntVector DebugVoxelCoordinate;  // 0x0490, protected
    FVoxelState LastVoxelState;  // 0x04B8, protected
    FMeshSectionData PendingMeshInfo;  // 0x04E0, protected
    FVoxelThreadSafeEnum VoxelThreadState;  // 0x0548, protected
    int32 LastThreadState;  // 0x0560, protected
    TWeakObjectPtr<AIcarusPlayerController,FWeakObjectPtr> LastHitController;  // 0x0564, protected
    TWeakObjectPtr<AActor,FWeakObjectPtr> LastHitActor;  // 0x056C, protected
    float LastHitEfficiency;  // 0x0574, protected
    float FinalHitResourceMultiplier;  // 0x0578, protected
    float FinalHitPyriticCrustPercent;  // 0x057C, protected
    int32 TotalUnminedVoxels;  // 0x0588, protected
    int32 CurrentUnminedVoxels;  // 0x058C, protected
    int32 DatabaseOverrideUnminedVoxels;  // 0x0590, protected
    int32 NumResourcesGranted;  // 0x0594, protected
    bool bDropItemRewards;  // 0x0598, protected

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
