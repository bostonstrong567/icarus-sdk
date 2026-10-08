// /Script/Engine.MaterialExpressionMaterialAttributeLayers
// Derives from: UMaterialExpression > UObject
// size 0xE8, declared in Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionMaterialAttributeLayers.h

UCLASS(MinimalAPI)
class UMaterialExpressionMaterialAttributeLayers : public UMaterialExpression
{
public:
    UPROPERTY(EditAnywhere) FName ParameterName;  // 0x0040, size 0x8
    UPROPERTY() FGuid ExpressionGUID;  // 0x0048, size 0x10
    UPROPERTY() FMaterialAttributesInput Input;  // 0x0058, size 0x18
    UPROPERTY(EditAnywhere) FMaterialLayersFunctions DefaultLayers;  // 0x0070, size 0x40
    UPROPERTY(Transient) TArray<UMaterialExpressionMaterialFunctionCall*> LayerCallers;  // 0x00B0, size 0x10
    UPROPERTY(Transient) int32 NumActiveLayerCallers;  // 0x00C0, size 0x4
    UPROPERTY(Transient) TArray<UMaterialExpressionMaterialFunctionCall*> BlendCallers;  // 0x00C8, size 0x10
    UPROPERTY(Transient) int32 NumActiveBlendCallers;  // 0x00D8, size 0x4
    UPROPERTY(Transient) bool bIsLayerGraphBuilt;  // 0x00DC, size 0x1

    // Not reflected: the engine's scripting cannot see these.
    const FMaterialLayersFunctions * ParamLayers;  // 0x00E0, private
};
