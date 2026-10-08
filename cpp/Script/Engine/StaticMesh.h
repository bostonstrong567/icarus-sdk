// /Script/Engine.StaticMesh
// Derives from: UStreamableRenderAsset > UObject
// size 0x150, declared in Engine/Source/Runtime/Engine/Classes/Engine/StaticMesh.h

UCLASS(MinimalAPI, Config=Engine)
class UStaticMesh : public UStreamableRenderAsset, public IInterface_CollisionDataProvider, public IInterface_AssetUserData
{
public:
    UPROPERTY() FPerPlatformInt MinLOD;  // 0x0080, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float LpvBiasMultiplier;  // 0x0084, size 0x4
    UPROPERTY(BlueprintReadWrite) TArray<FStaticMaterial> StaticMaterials;  // 0x0088, size 0x10
    UPROPERTY() float LightmapUVDensity;  // 0x0098, size 0x4
    UPROPERTY(EditAnywhere) int32 LightMapResolution;  // 0x009C, size 0x4
    UPROPERTY(EditAnywhere) int32 LightMapCoordinateIndex;  // 0x00A0, size 0x4
    UPROPERTY(EditAnywhere) float DistanceFieldSelfShadowBias;  // 0x00A4, size 0x4
    UPROPERTY(EditAnywhere, Transient, Instanced) UBodySetup* BodySetup;  // 0x00A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 LODForCollision;  // 0x00B0, size 0x4
    UPROPERTY(EditAnywhere) uint8 bGenerateMeshDistanceField : 1;  // 0x00B4, mask 0x01
    UPROPERTY(Deprecated) uint8 bStripComplexCollisionForConsole : 1;  // 0x00B4, mask 0x02
    UPROPERTY(EditAnywhere) uint8 bHasNavigationData : 1;  // 0x00B4, mask 0x04
    UPROPERTY(EditAnywhere) uint8 bSupportUniformlyDistributedSampling : 1;  // 0x00B4, mask 0x08
    UPROPERTY(EditAnywhere) uint8 bSupportPhysicalMaterialMasks : 1;  // 0x00B4, mask 0x10
    UPROPERTY(EditAnywhere) uint8 bSupportRayTracing : 1;  // 0x00B4, mask 0x20
    UPROPERTY() uint8 bIsBuiltAtRuntime : 1;  // 0x00B4, mask 0x40
    UPROPERTY(EditAnywhere) uint8 bAllowCPUAccess : 1;  // 0x00B5, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bSupportGpuUniformlyDistributedSampling : 1;  // 0x00B5, mask 0x02
    UPROPERTY() TArray<UStaticMeshSocket*> Sockets;  // 0x00D8, size 0x10
    UPROPERTY(EditAnywhere) FVector PositiveBoundsExtension;  // 0x00F8, size 0xC
    UPROPERTY(EditAnywhere) FVector NegativeBoundsExtension;  // 0x0104, size 0xC
    UPROPERTY() FBoxSphereBounds ExtendedBounds;  // 0x0110, size 0x1C
    UPROPERTY() int32 ElementToIgnoreForTexFactor;  // 0x012C, size 0x4
    UPROPERTY(EditAnywhere) TArray<UAssetUserData*> AssetUserData;  // 0x0130, size 0x10
    UPROPERTY(Instanced) UObject* EditableMesh;  // 0x0140, size 0x8
    UPROPERTY(EditAnywhere, Transient, Instanced) UNavCollisionBase* NavCollision;  // 0x0148, size 0x8

    // Not reflected: the engine's scripting cannot see these.
    TUniquePtr<FStaticMeshRenderData,TDefaultDelete<FStaticMeshRenderData> > RenderData;  // 0x0070
    TUniquePtr<FStaticMeshOccluderData,TDefaultDelete<FStaticMeshOccluderData> > OccluderData;  // 0x0078
    uint8 : 1 bRenderingResourcesInitialized;  // 0x00B4, protected
    FRenderCommandFence ReleaseResourcesFence;  // 0x00B8
    FGuid LightingGuid;  // 0x00C8
    TSharedPtr<FSpeedTreeWind,0> SpeedTreeWind;  // 0x00E8

    UFUNCTION(BlueprintCallable) FName AddMaterial(UMaterialInterface* Material);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void AddSocket(UStaticMeshSocket* Socket);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void BuildFromStaticMeshDescriptions(const TArray<UStaticMeshDescription*>& StaticMeshDescriptions, bool bBuildSimpleCollision);  // parameters 0x11
    UFUNCTION(BlueprintCallable) static UStaticMeshDescription* CreateStaticMeshDescription(UObject* Outer);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) UStaticMeshSocket* FindSocket(FName InSocketName) const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) FBox GetBoundingBox() const;  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) FBoxSphereBounds GetBounds() const;  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) UMaterialInterface* GetMaterial(int32 MaterialIndex) const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetMaterialIndex(FName MaterialSlotName) const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetMinimumLODForPlatform(const FName& PlatformName) const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetMinimumLODForPlatforms(TMap<FName, int32>& PlatformMinimumLODs) const;  // parameters 0x50
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetNumLODs() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetNumSections(int32 InLOD) const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) TArray<FStaticMaterial> GetStaticMaterials() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable) void RemoveSocket(UStaticMeshSocket* Socket);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetStaticMaterials(const TArray<FStaticMaterial>& InStaticMaterials);  // parameters 0x10

    // Virtual functions that start here:
    //   InitResources, ReleaseResources
};
