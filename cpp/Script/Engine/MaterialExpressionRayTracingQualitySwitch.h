// /Script/Engine.MaterialExpressionRayTracingQualitySwitch
// Derives from: UMaterialExpression > UObject
// size 0x68, declared in Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionRayTracingQualitySwitch.h

UCLASS()
class UMaterialExpressionRayTracingQualitySwitch : public UMaterialExpression
{
public:
    UPROPERTY() FExpressionInput Normal;  // 0x0040, size 0x14
    UPROPERTY() FExpressionInput RayTraced;  // 0x0054, size 0x14
};
