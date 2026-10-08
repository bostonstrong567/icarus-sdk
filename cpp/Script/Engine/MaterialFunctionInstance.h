// /Script/Engine.MaterialFunctionInstance
// Derives from: UMaterialFunctionInterface > UObject
// size 0xC0, declared in Engine/Source/Runtime/Engine/Classes/Materials/MaterialFunctionInstance.h

UCLASS(MinimalAPI)
class UMaterialFunctionInstance : public UMaterialFunctionInterface
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UMaterialFunctionInterface* Parent;  // 0x0040, size 0x8
    UPROPERTY() UMaterialFunctionInterface* Base;  // 0x0048, size 0x8
    UPROPERTY(EditAnywhere) TArray<FScalarParameterValue> ScalarParameterValues;  // 0x0050, size 0x10
    UPROPERTY(EditAnywhere) TArray<FVectorParameterValue> VectorParameterValues;  // 0x0060, size 0x10
    UPROPERTY(EditAnywhere) TArray<FTextureParameterValue> TextureParameterValues;  // 0x0070, size 0x10
    UPROPERTY(EditAnywhere) TArray<FFontParameterValue> FontParameterValues;  // 0x0080, size 0x10
    UPROPERTY(EditAnywhere) TArray<FStaticSwitchParameter> StaticSwitchParameterValues;  // 0x0090, size 0x10
    UPROPERTY(EditAnywhere) TArray<FStaticComponentMaskParameter> StaticComponentMaskParameterValues;  // 0x00A0, size 0x10
    UPROPERTY(EditAnywhere) TArray<FRuntimeVirtualTextureParameterValue> RuntimeVirtualTextureParameterValues;  // 0x00B0, size 0x10
};
