// /Script/Engine.MaterialExpressionLightmassReplace
// Derives from: UMaterialExpression > UObject
// size 0x68, declared in Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionLightmassReplace.h

UCLASS()
class UMaterialExpressionLightmassReplace : public UMaterialExpression
{
public:
    UPROPERTY() FExpressionInput Realtime;  // 0x0040, size 0x14
    UPROPERTY() FExpressionInput Lightmass;  // 0x0054, size 0x14
};
