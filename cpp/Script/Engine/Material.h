// /Script/Engine.Material
// Derives from: UMaterialInterface > UObject
// size 0x440, declared in Engine/Source/Runtime/Engine/Classes/Materials/Material.h

UCLASS(MinimalAPI)
class UMaterial : public UMaterialInterface
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(EditAnywhere) UPhysicalMaterial* PhysMaterial;  // 0x0088, size 0x8
    UPROPERTY(EditAnywhere) UPhysicalMaterialMask* PhysMaterialMask;  // 0x0090, size 0x8
    UPROPERTY(EditAnywhere) UPhysicalMaterial* PhysicalMaterialMap;  // 0x0098, size 0x8
    UPROPERTY() FScalarMaterialInput Metallic;  // 0x00D8, size 0x14
    UPROPERTY() FScalarMaterialInput Specular;  // 0x00EC, size 0x14
    UPROPERTY() FScalarMaterialInput Anisotropy;  // 0x0100, size 0x14
    UPROPERTY() FVectorMaterialInput Normal;  // 0x0114, size 0x14
    UPROPERTY() FVectorMaterialInput Tangent;  // 0x0128, size 0x14
    UPROPERTY() FColorMaterialInput EmissiveColor;  // 0x013C, size 0x14
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TEnumAsByte<EMaterialDomain> MaterialDomain;  // 0x0150, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TEnumAsByte<EBlendMode> BlendMode;  // 0x0151, size 0x1
    UPROPERTY(EditAnywhere) TEnumAsByte<EDecalBlendMode> DecalBlendMode;  // 0x0152, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TEnumAsByte<EMaterialDecalResponse> MaterialDecalResponse;  // 0x0153, size 0x1
    UPROPERTY(EditAnywhere) uint8 bCastDynamicShadowAsMasked : 1;  // 0x0155, mask 0x01
    UPROPERTY(EditAnywhere) float OpacityMaskClipValue;  // 0x0158, size 0x4
    UPROPERTY() FVectorMaterialInput WorldPositionOffset;  // 0x015C, size 0x14
    UPROPERTY() FScalarMaterialInput Refraction;  // 0x0170, size 0x14
    UPROPERTY() FMaterialAttributesInput MaterialAttributes;  // 0x0184, size 0x18
    UPROPERTY() FScalarMaterialInput PixelDepthOffset;  // 0x019C, size 0x14
    UPROPERTY() FShadingModelMaterialInput ShadingModelFromMaterialExpression;  // 0x01B0, size 0x14
    UPROPERTY(EditAnywhere) uint8 bEnableSeparateTranslucency : 1;  // 0x01C4, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bEnableResponsiveAA : 1;  // 0x01C4, mask 0x02
    UPROPERTY(EditAnywhere) uint8 bScreenSpaceReflections : 1;  // 0x01C4, mask 0x04
    UPROPERTY(EditAnywhere) uint8 bContactShadows : 1;  // 0x01C4, mask 0x08
    UPROPERTY(EditAnywhere) uint8 TwoSided : 1;  // 0x01C4, mask 0x10
    UPROPERTY(EditAnywhere) uint8 DitheredLODTransition : 1;  // 0x01C4, mask 0x20
    UPROPERTY(EditAnywhere) uint8 DitherOpacityMask : 1;  // 0x01C4, mask 0x40
    UPROPERTY(EditAnywhere) uint8 bAllowNegativeEmissiveColor : 1;  // 0x01C4, mask 0x80
    UPROPERTY(EditAnywhere) TEnumAsByte<ETranslucencyLightingMode> TranslucencyLightingMode;  // 0x01C5, size 0x1
    UPROPERTY(EditAnywhere) uint8 bEnableMobileSeparateTranslucency : 1;  // 0x01C6, mask 0x01
    UPROPERTY(EditAnywhere) int32 NumCustomizedUVs;  // 0x01C8, size 0x4
    UPROPERTY(EditAnywhere) float TranslucencyDirectionalLightingIntensity;  // 0x01CC, size 0x4
    UPROPERTY(EditAnywhere) float TranslucentShadowDensityScale;  // 0x01D0, size 0x4
    UPROPERTY(EditAnywhere) float TranslucentSelfShadowDensityScale;  // 0x01D4, size 0x4
    UPROPERTY(EditAnywhere) float TranslucentSelfShadowSecondDensityScale;  // 0x01D8, size 0x4
    UPROPERTY(EditAnywhere) float TranslucentSelfShadowSecondOpacity;  // 0x01DC, size 0x4
    UPROPERTY(EditAnywhere) float TranslucentBackscatteringExponent;  // 0x01E0, size 0x4
    UPROPERTY(EditAnywhere) FLinearColor TranslucentMultipleScatteringExtinction;  // 0x01E4, size 0x10
    UPROPERTY(EditAnywhere) float TranslucentShadowStartOffset;  // 0x01F4, size 0x4
    UPROPERTY(EditAnywhere) uint8 bDisableDepthTest : 1;  // 0x01F8, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bWriteOnlyAlpha : 1;  // 0x01F8, mask 0x02
    UPROPERTY(EditAnywhere) uint8 bGenerateSphericalParticleNormals : 1;  // 0x01F8, mask 0x04
    UPROPERTY(EditAnywhere) uint8 bTangentSpaceNormal : 1;  // 0x01F8, mask 0x08
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bUseEmissiveForDynamicAreaLighting : 1;  // 0x01F8, mask 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bBlockGI : 1;  // 0x01F8, mask 0x20
    UPROPERTY() uint8 bUsedAsSpecialEngineMaterial : 1;  // 0x01F8, mask 0x40
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bUsedWithSkeletalMesh : 1;  // 0x01F8, mask 0x80
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bUsedWithEditorCompositing : 1;  // 0x01F9, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bUsedWithParticleSprites : 1;  // 0x01F9, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bUsedWithBeamTrails : 1;  // 0x01F9, mask 0x04
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bUsedWithMeshParticles : 1;  // 0x01F9, mask 0x08
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bUsedWithNiagaraSprites : 1;  // 0x01F9, mask 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bUsedWithNiagaraRibbons : 1;  // 0x01F9, mask 0x20
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bUsedWithNiagaraMeshParticles : 1;  // 0x01F9, mask 0x40
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bUsedWithGeometryCache : 1;  // 0x01F9, mask 0x80
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bUsedWithStaticLighting : 1;  // 0x01FA, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bUsedWithMorphTargets : 1;  // 0x01FA, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bUsedWithSplineMeshes : 1;  // 0x01FA, mask 0x04
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bUsedWithInstancedStaticMeshes : 1;  // 0x01FA, mask 0x08
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bUsedWithGeometryCollections : 1;  // 0x01FA, mask 0x10
    UPROPERTY() uint8 bUsesDistortion : 1;  // 0x01FA, mask 0x20
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bUsedWithClothing : 1;  // 0x01FA, mask 0x40
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bUsedWithWater : 1;  // 0x01FC, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bUsedWithHairStrands : 1;  // 0x01FC, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bUsedWithLidarPointCloud : 1;  // 0x01FC, mask 0x04
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bUsedWithVirtualHeightfieldMesh : 1;  // 0x01FC, mask 0x08
    UPROPERTY(Deprecated) uint8 bUsedWithUI : 1;  // 0x0200, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bAutomaticallySetUsageInEditor : 1;  // 0x0200, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bFullyRough : 1;  // 0x0200, mask 0x04
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bUseFullPrecision : 1;  // 0x0200, mask 0x08
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bUseLightmapDirectionality : 1;  // 0x0200, mask 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bUseAlphaToCoverage : 1;  // 0x0200, mask 0x20
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bForwardRenderUsePreintegratedGFForSimpleIBL : 1;  // 0x0204, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bUseHQForwardReflections : 1;  // 0x0208, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bForwardBlendsSkyLightCubemaps : 1;  // 0x0208, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bUsePlanarForwardReflections : 1;  // 0x0208, mask 0x04
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bNormalCurvatureToRoughness : 1;  // 0x0208, mask 0x08
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TEnumAsByte<EMaterialTessellationMode> D3D11TessellationMode;  // 0x0209, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bEnableCrackFreeDisplacement : 1;  // 0x020A, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bEnableAdaptiveTessellation : 1;  // 0x020A, mask 0x02
    UPROPERTY(EditAnywhere) uint8 AllowTranslucentCustomDepthWrites : 1;  // 0x020A, mask 0x04
    UPROPERTY(EditAnywhere) uint8 Wireframe : 1;  // 0x020A, mask 0x08
    UPROPERTY(EditAnywhere) uint8 WriteDepthToTranslucentMaterial : 1;  // 0x020A, mask 0x10
    UPROPERTY(EditAnywhere) TEnumAsByte<EMaterialShadingRate> ShadingRate;  // 0x020B, size 0x1
    UPROPERTY() uint8 bCanMaskedBeAssumedOpaque : 1;  // 0x020C, mask 0x01
    UPROPERTY(Deprecated) uint8 bIsMasked : 1;  // 0x020C, mask 0x02
    UPROPERTY(Transient) uint8 bIsPreviewMaterial : 1;  // 0x020C, mask 0x04
    UPROPERTY(Transient) uint8 bIsFunctionPreviewMaterial : 1;  // 0x020C, mask 0x08
    UPROPERTY(EditAnywhere) uint8 bUseMaterialAttributes : 1;  // 0x020C, mask 0x10
    UPROPERTY(EditAnywhere) uint8 bCastRayTracedShadows : 1;  // 0x020C, mask 0x20
    UPROPERTY(EditAnywhere) uint8 bUseTranslucencyVertexFog : 1;  // 0x020C, mask 0x40
    UPROPERTY(EditAnywhere) uint8 bApplyCloudFogging : 1;  // 0x020C, mask 0x80
    UPROPERTY(EditAnywhere) uint8 bIsSky : 1;  // 0x020D, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bComputeFogPerPixel : 1;  // 0x020D, mask 0x02
    UPROPERTY(EditAnywhere) uint8 bOutputTranslucentVelocity : 1;  // 0x020D, mask 0x04
    UPROPERTY(Transient) uint8 bAllowDevelopmentShaderCompile : 1;  // 0x020D, mask 0x08
    UPROPERTY(Transient) uint8 bIsMaterialEditorStatsMaterial : 1;  // 0x020D, mask 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<EBlendableLocation> BlendableLocation;  // 0x020E, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 BlendableOutputAlpha : 1;  // 0x020F, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bEnableStencilTest : 1;  // 0x020F, mask 0x02
    UPROPERTY(EditAnywhere) TEnumAsByte<EMaterialStencilCompare> StencilCompare;  // 0x0210, size 0x1
    UPROPERTY(EditAnywhere) uint8 StencilRefValue;  // 0x0211, size 0x1
    UPROPERTY(EditAnywhere) TEnumAsByte<ERefractionMode> RefractionMode;  // 0x0212, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 BlendablePriority;  // 0x0214, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bIsBlendable : 1;  // 0x0218, mask 0x01
    UPROPERTY(Transient) uint32 UsageFlagWarnings;  // 0x021C, size 0x4
    UPROPERTY(EditAnywhere) float RefractionDepthBias;  // 0x0220, size 0x4
    UPROPERTY() FGuid StateId;  // 0x0224, size 0x10
    UPROPERTY(EditAnywhere) float MaxDisplacement;  // 0x0234, size 0x4
    FDefaultMaterialInstance * DefaultMaterialInstance;  // 0x0238, not reflected
private:
    UPROPERTY(EditAnywhere) TEnumAsByte<EMaterialShadingModel> ShadingModel;  // 0x0154, size 0x1
    UPROPERTY() FMaterialShadingModelField ShadingModels;  // 0x0156, size 0x2
    TArray<FMaterialResource,TSizedDefaultAllocator<32> > LoadedMaterialResources;  // 0x0240, not reflected
    TArray<FMaterialResource *,TSizedDefaultAllocator<32> > MaterialResources;  // 0x0250, not reflected
    FThreadSafeBool ReleasedByRT;  // 0x0260, not reflected
    UPROPERTY() FMaterialCachedExpressionData CachedExpressionData;  // 0x0268, size 0x1D8

    // Virtual functions that start here:
    //   AllocateResource, FlushResourceShaderMaps, IsPostProcessMaterial, IsUIMaterial
};
