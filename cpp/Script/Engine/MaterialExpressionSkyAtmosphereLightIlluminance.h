// /Script/Engine.MaterialExpressionSkyAtmosphereLightIlluminance
// Derives from: UMaterialExpression > UObject
// size 0x58, declared in Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionSkyAtmosphereLightIlluminance.h

UCLASS()
class UMaterialExpressionSkyAtmosphereLightIlluminance : public UMaterialExpression
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 LightIndex;  // 0x0040, size 0x4
    UPROPERTY() FExpressionInput WorldPosition;  // 0x0044, size 0x14
};
