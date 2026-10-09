// /Script/Engine.SkeletalMesh
// Derives from: UStreamableRenderAsset > UObject
// size 0x3A0, declared in Engine/Source/Runtime/Engine/Classes/Engine/SkeletalMesh.h

UCLASS()
class USkeletalMesh : public UStreamableRenderAsset, public IInterface_CollisionDataProvider, public IInterface_AssetUserData, public INodeMappingProviderInterface
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) USkeleton* Skeleton;  // 0x0080, size 0x8
    UPROPERTY(EditAnywhere, Transient, BlueprintReadWrite) TArray<FSkeletalMaterial> Materials;  // 0x00D8, size 0x10
    UPROPERTY(EditAnywhere) TArray<FBoneMirrorInfo> SkelMirrorTable;  // 0x00E8, size 0x10
    UPROPERTY(EditAnywhere) FPerPlatformInt MinLod;  // 0x0158, size 0x4
    UPROPERTY(EditAnywhere) FPerPlatformBool DisableBelowMinLodStripping;  // 0x015C, size 0x1
    UPROPERTY(EditAnywhere) TEnumAsByte<EAxis> SkelMirrorAxis;  // 0x015D, size 0x1
    UPROPERTY(EditAnywhere) TEnumAsByte<EAxis> SkelMirrorFlipAxis;  // 0x015E, size 0x1
    uint8 : 1 bHasActiveClothingAssets;  // 0x015F, not reflected
    UPROPERTY(Deprecated) uint8 bUseFullPrecisionUVs : 1;  // 0x015F, mask 0x01
    UPROPERTY(Deprecated) uint8 bUseHighPrecisionTangentBasis : 1;  // 0x015F, mask 0x02
    UPROPERTY() uint8 bHasBeenSimplified : 1;  // 0x015F, mask 0x04
    UPROPERTY() uint8 bHasVertexColors : 1;  // 0x015F, mask 0x08
    UPROPERTY(EditAnywhere) uint8 bEnablePerPolyCollision : 1;  // 0x015F, mask 0x20
    UPROPERTY(Transient) UBodySetup* BodySetup;  // 0x0160, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UPhysicsAsset* PhysicsAsset;  // 0x0168, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UPhysicsAsset* ShadowPhysicsAsset;  // 0x0170, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TArray<UNodeMappingContainer*> NodeMappingData;  // 0x0178, size 0x10
    UPROPERTY(EditAnywhere) uint8 bSupportRayTracing : 1;  // 0x0188, mask 0x01
    UPROPERTY(BlueprintReadWrite) TArray<UMorphTarget*> MorphTargets;  // 0x0190, size 0x10
    FRenderCommandFence ReleaseResourcesFence;  // 0x01A0, not reflected
    FReferenceSkeleton RefSkeleton;  // 0x01B0, not reflected
    TMap<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0> > MorphTargetIndexMap;  // 0x02B8, not reflected
    TArray<FMatrix,TSizedDefaultAllocator<32> > RefBasesInvMatrix;  // 0x0308, not reflected
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TSubclassOf<UAnimInstance> PostProcessAnimBlueprint;  // 0x0318, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UClothingAssetBase*> MeshClothingAssets;  // 0x0320, size 0x10
protected:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FVector PositiveBoundsExtension;  // 0x00C0, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FVector NegativeBoundsExtension;  // 0x00CC, size 0xC
    UPROPERTY(EditAnywhere) FSkeletalMeshSamplingInfo SamplingInfo;  // 0x0330, size 0x30
    UPROPERTY(EditAnywhere) TArray<UAssetUserData*> AssetUserData;  // 0x0360, size 0x10
    UPROPERTY(EditAnywhere) TArray<FSkinWeightProfileInfo> SkinWeightProfiles;  // 0x0390, size 0x10
private:
    TUniquePtr<FSkeletalMeshRenderData,TDefaultDelete<FSkeletalMeshRenderData> > SkeletalMeshRenderData;  // 0x0078, not reflected
    UPROPERTY(Transient) FBoxSphereBounds ImportedBounds;  // 0x0088, size 0x1C
    UPROPERTY(Transient) FBoxSphereBounds ExtendedBounds;  // 0x00A4, size 0x1C
    UPROPERTY(EditAnywhere) TArray<FSkeletalMeshLODInfo> LODInfo;  // 0x00F8, size 0x10
    TMap<FName,USkeletalMesh::FSocketInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,USkeletalMesh::FSocketInfo,0> > SocketMap;  // 0x0108, not reflected
    UPROPERTY() TArray<USkeletalMeshSocket*> Sockets;  // 0x0370, size 0x10
    TArray<FMatrix,TSizedDefaultAllocator<32> > CachedComposedRefPoseMatrices;  // 0x0380, not reflected
public:
    UFUNCTION(BlueprintCallable, BlueprintPure) USkeletalMeshSocket* FindSocket(FName InSocketName) const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) USkeletalMeshSocket* FindSocketAndIndex(FName InSocketName, int32& OutIndex) const;  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) USkeletalMeshSocket* FindSocketInfo(FName InSocketName, FTransform& OutTransform, int32& OutBoneIndex, int32& OutIndex) const;  // parameters 0x50
    UFUNCTION(BlueprintCallable, BlueprintPure) FBoxSphereBounds GetBounds() const;  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) TSoftObjectPtr<UObject> GetDefaultAnimatingRig() const;  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) FBoxSphereBounds GetImportedBounds() const;  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) USkeletalMeshLODSettings* GetLODSettings() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) TArray<FSkeletalMaterial> GetMaterials() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) TArray<UClothingAssetBase*> GetMeshClothingAssets() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) TArray<UMorphTarget*> GetMorphTargets() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) UNodeMappingContainer* GetNodeMappingContainer(UBlueprint* SourceAsset) const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) TArray<UNodeMappingContainer*> GetNodeMappingData() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) UPhysicsAsset* GetPhysicsAsset() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) UPhysicsAsset* GetShadowPhysicsAsset() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) USkeleton* GetSkeleton() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) USkeletalMeshSocket* GetSocketByIndex(int32 Index) const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsSectionUsingCloth(int32 InSectionIndex, bool bCheckCorrespondingSections) const;  // parameters 0x6
    UFUNCTION(BlueprintCallable, BlueprintPure) TArray<FString> K2_GetAllMorphTargetNames() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 NumSockets() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetDefaultAnimatingRig(TSoftObjectPtr<UObject> InAnimatingRig);  // parameters 0x28
    UFUNCTION(BlueprintCallable) void SetLODSettings(USkeletalMeshLODSettings* InLODSettings);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetMaterials(const TArray<FSkeletalMaterial>& InMaterials);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetMeshClothingAssets(const TArray<UClothingAssetBase*>& InMeshClothingAssets);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetMorphTargets(const TArray<UMorphTarget*>& InMorphTargets);  // parameters 0x10
};
