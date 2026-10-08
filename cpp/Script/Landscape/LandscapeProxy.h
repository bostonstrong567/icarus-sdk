// /Script/Landscape.LandscapeProxy
// Derives from: AActor > UObject
// size 0x598, declared in Engine/Source/Runtime/Landscape/Classes/LandscapeProxy.h

UCLASS(Abstract, NotPlaceable, MinimalAPI, Config=Engine)
class ALandscapeProxy : public AActor
{
public:
    UPROPERTY(Instanced) ULandscapeSplinesComponent* SplineComponent;  // 0x0220, size 0x8
    UPROPERTY() FGuid LandscapeGuid;  // 0x0228, size 0x10
    UPROPERTY() FIntPoint LandscapeSectionOffset;  // 0x0238, size 0x8
    UPROPERTY(EditAnywhere) int32 MaxLODLevel;  // 0x0240, size 0x4
    UPROPERTY(Deprecated) float LODDistanceFactor;  // 0x0244, size 0x4
    UPROPERTY(Deprecated) TEnumAsByte<ELandscapeLODFalloff> LODFalloff;  // 0x0248, size 0x1
    UPROPERTY(EditAnywhere) float ComponentScreenSizeToUseSubSections;  // 0x024C, size 0x4
    UPROPERTY(EditAnywhere) float LOD0ScreenSize;  // 0x0250, size 0x4
    UPROPERTY(EditAnywhere) float LOD0DistributionSetting;  // 0x0254, size 0x4
    UPROPERTY(EditAnywhere) float LODDistributionSetting;  // 0x0258, size 0x4
    UPROPERTY(EditAnywhere) float TessellationComponentScreenSize;  // 0x025C, size 0x4
    UPROPERTY(EditAnywhere) bool UseTessellationComponentScreenSizeFalloff;  // 0x0260, size 0x1
    UPROPERTY(EditAnywhere) float TessellationComponentScreenSizeFalloff;  // 0x0264, size 0x4
    UPROPERTY(EditAnywhere) int32 OccluderGeometryLOD;  // 0x0268, size 0x4
    UPROPERTY(EditAnywhere) int32 StaticLightingLOD;  // 0x026C, size 0x4
    UPROPERTY(EditAnywhere) UPhysicalMaterial* DefaultPhysMaterial;  // 0x0270, size 0x8
    UPROPERTY(EditAnywhere) float StreamingDistanceMultiplier;  // 0x0278, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInterface* LandscapeMaterial;  // 0x0280, size 0x8
    UPROPERTY(EditAnywhere) UMaterialInterface* LandscapeHoleMaterial;  // 0x02A8, size 0x8
    UPROPERTY(EditAnywhere) TArray<FLandscapeProxyMaterialOverride> LandscapeMaterialsOverride;  // 0x02B0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bMeshHoles;  // 0x02C0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 MeshHolesMaxLod;  // 0x02C1, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<URuntimeVirtualTexture*> RuntimeVirtualTextures;  // 0x02C8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 VirtualTextureNumLods;  // 0x02D8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 VirtualTextureLodBias;  // 0x02DC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) ERuntimeVirtualTextureMainPassType VirtualTextureRenderPassType;  // 0x02E0, size 0x1
    UPROPERTY(EditAnywhere) float NegativeZBoundsExtension;  // 0x02E4, size 0x4
    UPROPERTY(EditAnywhere) float PositiveZBoundsExtension;  // 0x02E8, size 0x4
    UPROPERTY() TArray<ULandscapeComponent*> LandscapeComponents;  // 0x02F0, size 0x10
    UPROPERTY() TArray<ULandscapeHeightfieldCollisionComponent*> CollisionComponents;  // 0x0300, size 0x10
    UPROPERTY(Transient) TArray<UHierarchicalInstancedStaticMeshComponent*> FoliageComponents;  // 0x0310, size 0x10
    UPROPERTY() bool bHasLandscapeGrass;  // 0x0384, size 0x1
    UPROPERTY(EditAnywhere) float StaticLightingResolution;  // 0x0388, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 CastShadow : 1;  // 0x038C, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bCastDynamicShadow : 1;  // 0x038C, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bCastStaticShadow : 1;  // 0x038C, mask 0x04
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bCastFarShadow : 1;  // 0x0390, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bCastHiddenShadow : 1;  // 0x0394, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bCastShadowAsTwoSided : 1;  // 0x0398, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bAffectDistanceFieldLighting : 1;  // 0x039C, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FLightingChannels LightingChannels;  // 0x039D, size 0x1
    UPROPERTY(EditAnywhere) uint8 bUseMaterialPositionOffsetInStaticLighting : 1;  // 0x03A0, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bRenderCustomDepth : 1;  // 0x03A0, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadOnly) ERendererStencilMask CustomDepthStencilWriteMask;  // 0x03A4, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 CustomDepthStencilValue;  // 0x03A8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float LDMaxDrawDistance;  // 0x03AC, size 0x4
    UPROPERTY(EditAnywhere) FLightmassPrimitiveSettings LightmassSettings;  // 0x03B0, size 0x18
    UPROPERTY(EditAnywhere) int32 CollisionMipLevel;  // 0x03C8, size 0x4
    UPROPERTY(EditAnywhere) int32 SimpleCollisionMipLevel;  // 0x03CC, size 0x4
    UPROPERTY(EditAnywhere) float CollisionThickness;  // 0x03D0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FBodyInstance BodyInstance;  // 0x03D8, size 0x158
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bGenerateOverlapEvents : 1;  // 0x0530, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bBakeMaterialPositionOffsetIntoCollision : 1;  // 0x0530, mask 0x02
    UPROPERTY() int32 ComponentSizeQuads;  // 0x0534, size 0x4
    UPROPERTY() int32 SubsectionSizeQuads;  // 0x0538, size 0x4
    UPROPERTY() int32 NumSubsections;  // 0x053C, size 0x4
    UPROPERTY(EditAnywhere) uint8 bUsedForNavigation : 1;  // 0x0540, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bFillCollisionUnderLandscapeForNavmesh : 1;  // 0x0540, mask 0x02
    UPROPERTY(EditAnywhere) bool bUseDynamicMaterialInstance;  // 0x0544, size 0x1
    UPROPERTY(EditAnywhere) ENavDataGatheringMode NavigationGeometryGatheringMode;  // 0x0545, size 0x1
    UPROPERTY(EditAnywhere) bool bUseLandscapeForCullingInvisibleHLODVertices;  // 0x0546, size 0x1
    UPROPERTY() bool bHasLayersContent;  // 0x0547, size 0x1
    UPROPERTY(Transient) TMap<UTexture2D*, ULandscapeWeightmapUsage*> WeightmapUsageMap;  // 0x0548, size 0x50

    // Not reflected: the engine's scripting cannot see these.
    UMaterialInterface * LandscapeMaterialCached;  // 0x0288
    TArray<ULandscapeGrassType *,TSizedDefaultAllocator<32> > LandscapeGrassTypes;  // 0x0290
    float GrassMaxDiscardDistance;  // 0x02A0
    FCachedLandscapeFoliage FoliageCache;  // 0x0320
    TArray<FAsyncTask<FAsyncGrassTask> *,TSizedDefaultAllocator<32> > AsyncFoliageTasks;  // 0x0370
    uint32 FrameOffsetForTickInterval;  // 0x0380

    UFUNCTION(BlueprintCallable) void ChangeComponentScreenSizeToUseSubSections(float InComponentScreenSizeToUseSubSections);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ChangeLODDistanceFactor(float InLODDistanceFactor);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ChangeTessellationComponentScreenSize(float InTessellationComponentScreenSize);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ChangeTessellationComponentScreenSizeFalloff(float InUseTessellationComponentScreenSizeFalloff);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ChangeUseTessellationComponentScreenSizeFalloff(bool InComponentScreenSizeToUseSubSections);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void EditorApplySpline(USplineComponent* InSplineComponent, float StartWidth, float EndWidth, float StartSideFalloff, float EndSideFalloff, float StartRoll, float EndRoll, int32 NumSubdivisions, bool bRaiseHeights, bool bLowerHeights, ULandscapeLayerInfoObject* PaintLayer, FName EditLayerName);  // parameters 0x38
    UFUNCTION(BlueprintCallable) void EditorSetLandscapeMaterial(UMaterialInterface* NewLandscapeMaterial);  // parameters 0x8
    UFUNCTION(BlueprintCallable) bool LandscapeExportHeightmapToRenderTarget(UTextureRenderTarget2D* InRenderTarget, bool InExportHeightIntoRGChannel, bool InExportLandscapeProxies);  // parameters 0xB
    UFUNCTION(BlueprintCallable) void SetLandscapeMaterialScalarParameterValue(FName ParameterName, float Value);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void SetLandscapeMaterialTextureParameterValue(FName ParameterName, UTexture* Value);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetLandscapeMaterialVectorParameterValue(FName ParameterName, FLinearColor Value);  // parameters 0x18

    // Virtual functions that start here:
    //   ChangeComponentScreenSizeToUseSubSections, ChangeLODDistanceFactor
    //   ChangeTessellationComponentScreenSize, ChangeTessellationComponentScreenSizeFalloff
    //   ChangeUseTessellationComponentScreenSizeFalloff, GetLandscapeActor
};
