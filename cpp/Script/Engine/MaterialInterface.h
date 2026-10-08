// /Script/Engine.MaterialInterface
// Derives from: UObject
// size 0x88, declared in Engine/Source/Runtime/Engine/Classes/Materials/MaterialInterface.h

UCLASS(Abstract, MinimalAPI)
class UMaterialInterface : public UObject, public IBlendableInterface, public IInterface_AssetUserData
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) USubsurfaceProfile* SubsurfaceProfile;  // 0x0038, size 0x8
    UPROPERTY(EditAnywhere) FLightmassMaterialInterfaceSettings LightmassSettings;  // 0x0050, size 0x10
    UPROPERTY() TArray<FMaterialTextureInfo> TextureStreamingData;  // 0x0060, size 0x10
    UPROPERTY(EditAnywhere) TArray<UAssetUserData*> AssetUserData;  // 0x0070, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    FRenderCommandFence ParentRefFence;  // 0x0040
    uint32 FeatureLevelsToForceCompile;  // 0x0080, private

    UFUNCTION(BlueprintCallable) UMaterial* GetBaseMaterial();  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) FMaterialParameterInfo GetParameterInfo(TEnumAsByte<EMaterialParameterAssociation> Association, FName ParameterName, UMaterialFunctionInterface* LayerFunction) const;  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) UPhysicalMaterial* GetPhysicalMaterial() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) UPhysicalMaterial* GetPhysicalMaterialFromMap(int32 Index) const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) UPhysicalMaterialMask* GetPhysicalMaterialMask() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetForceMipLevelsToBeResident(bool OverrideForceMiplevelsToBeResident, bool bForceMiplevelsToBeResidentValue, float ForceDuration, int32 CinematicTextureGroups, bool bFastResponse);  // parameters 0xD

    // Virtual functions that start here:
    //   CastsRayTracedShadows, CheckMaterialUsage, CheckMaterialUsage_Concurrent, GetAllFontParameterInfo
    //   GetAllRuntimeVirtualTextureParameterInfo, GetAllScalarParameterInfo, GetAllTextureParameterInfo
    //   GetAllVectorParameterInfo, GetBlendMode, GetCastDynamicShadowAsMasked, GetCastShadowAsMasked
    //   GetDiffuseBoost, GetEmissiveBoost, GetExportResolutionScale, GetFontParameterDefaultValue
    //   GetFontParameterValue, GetLayerParameterIndex, GetLightingGuidChain
    //   GetLinearColorCurveParameterValue, GetLinearColorParameterValue, GetMaterial, GetMaterialResource
    //   GetMaterial_Concurrent, GetOpacityMaskClipValue, GetPhysicalMaterial, GetPhysicalMaterialFromMap
    //   GetPhysicalMaterialMask, GetReferencedTextures, GetRefractionSettings, GetRenderProxy
    //   GetRuntimeVirtualTextureParameterDefaultValue, GetRuntimeVirtualTextureParameterValue
    //   GetScalarCurveParameterValue, GetScalarParameterDefault, GetScalarParameterDefaultValue
    //   GetScalarParameterValue, GetShadingModels, GetSubsurfaceProfile_Internal
    //   GetTerrainLayerWeightParameterValue, GetTextureDensity, GetTextureParameterDefaultValue
    //   GetTextureParameterValue, GetUsedTextures, GetUsedTexturesAndIndices, GetVectorCurveParameterValue
    //   GetVectorParameterDefaultValue, GetVectorParameterValue, IsDeferredDecal, IsDependent
    //   IsDependent_Concurrent, IsDitheredLODTransition, IsMasked, IsPropertyActive
    //   IsShadingModelFromMaterialExpression, IsTranslucencyWritingCustomDepth
    //   IsTranslucencyWritingVelocity, IsTwoSided, OverrideScalarParameterDefault, OverrideTexture
    //   OverrideVectorParameterDefault, RecacheUniformExpressions, SaveShaderStableKeysInner
    //   SetForceMipLevelsToBeResident, UpdateLightmassTextureTracking
};
