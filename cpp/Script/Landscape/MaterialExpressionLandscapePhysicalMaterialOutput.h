// /Script/Landscape.MaterialExpressionLandscapePhysicalMaterialOutput
// Derives from: UMaterialExpressionCustomOutput > UMaterialExpression > UObject
// size 0x50, declared in Engine/Source/Runtime/Landscape/Classes/Materials/MaterialExpressionLandscapePhysicalMaterialOutput.h

UCLASS()
class UMaterialExpressionLandscapePhysicalMaterialOutput : public UMaterialExpressionCustomOutput
{
public:
    UPROPERTY(EditAnywhere) TArray<FPhysicalMaterialInput> Inputs;  // 0x0040, size 0x10
};
