// /Script/Engine.MaterialExpressionSphericalParticleOpacity
// Derives from: UMaterialExpression > UObject
// size 0x58, declared in Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionSphericalParticleOpacity.h

UCLASS()
class UMaterialExpressionSphericalParticleOpacity : public UMaterialExpression
{
public:
    UPROPERTY() FExpressionInput Density;  // 0x0040, size 0x14
    UPROPERTY(EditAnywhere) float ConstantDensity;  // 0x0054, size 0x4
};
