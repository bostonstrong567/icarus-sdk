// /Script/Engine.MaterialInstance
// Derives from: UMaterialInterface > UObject
// size 0x310, declared in Engine/Source/Runtime/Engine/Classes/Materials/MaterialInstance.h

UCLASS(Abstract, MinimalAPI)
class UMaterialInstance : public UMaterialInterface
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UPhysicalMaterial* PhysMaterial;  // 0x0088, size 0x8
    UPROPERTY(EditAnywhere) UPhysicalMaterial* PhysicalMaterialMap;  // 0x0090, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UMaterialInterface* Parent;  // 0x00D0, size 0x8
    UPROPERTY() uint8 bHasStaticPermutationResource : 1;  // 0x00D8, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bOverrideSubsurfaceProfile : 1;  // 0x00D8, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TArray<FScalarParameterValue> ScalarParameterValues;  // 0x00E0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TArray<FVectorParameterValue> VectorParameterValues;  // 0x00F0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TArray<FTextureParameterValue> TextureParameterValues;  // 0x0100, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TArray<FRuntimeVirtualTextureParameterValue> RuntimeVirtualTextureParameterValues;  // 0x0110, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TArray<FFontParameterValue> FontParameterValues;  // 0x0120, size 0x10
    UPROPERTY(EditAnywhere) FMaterialInstanceBasePropertyOverrides BasePropertyOverrides;  // 0x0130, size 0x8
    UPROPERTY() FStaticParameterSet StaticParameters;  // 0x0148, size 0x40
    UPROPERTY() FMaterialCachedParameters CachedLayerParameters;  // 0x0188, size 0x150
    UPROPERTY() TArray<UObject*> CachedReferencedTextures;  // 0x02D8, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    uint8 : 1 TwoSided;  // 0x00D8
    uint8 : 1 DitheredLODTransition;  // 0x00D8
    uint8 : 1 bCastDynamicShadowAsMasked;  // 0x00D8
    uint8 : 1 bIsShadingModelFromMaterialExpression;  // 0x00D8
    TEnumAsByte<enum EBlendMode> BlendMode;  // 0x00D9
    float OpacityMaskClipValue;  // 0x00DC
    FMaterialShadingModelField ShadingModels;  // 0x0138
    FMaterialInstanceResource * Resource;  // 0x0140
    TArray<FMaterialResource,TSizedDefaultAllocator<32> > LoadedMaterialResources;  // 0x02E8, private
    TArray<FMaterialResource *,TSizedDefaultAllocator<32> > StaticPermutationMaterialResources;  // 0x02F8, private
    FThreadSafeBool ReleasedByRT;  // 0x0308, private

    // Virtual functions that start here:
    //   AllocatePermutationResource, HasOverridenBaseProperties
};
