// /Script/Landscape.MaterialExpressionLandscapeGrassOutput
// Derives from: UMaterialExpressionCustomOutput > UMaterialExpression > UObject
// size 0x50, declared in Engine/Source/Runtime/Landscape/Classes/Materials/MaterialExpressionLandscapeGrassOutput.h

UCLASS()
class UMaterialExpressionLandscapeGrassOutput : public UMaterialExpressionCustomOutput
{
public:
    UPROPERTY(EditAnywhere) TArray<FGrassInput> GrassTypes;  // 0x0040, size 0x10
};
