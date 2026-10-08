// /Script/Engine.MaterialExpressionStaticSwitch
// Derives from: UMaterialExpression > UObject
// size 0x80, declared in Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionStaticSwitch.h

UCLASS(MinimalAPI)
class UMaterialExpressionStaticSwitch : public UMaterialExpression
{
public:
    UPROPERTY(EditAnywhere) uint8 DefaultValue : 1;  // 0x0040, mask 0x01
    UPROPERTY() FExpressionInput A;  // 0x0044, size 0x14
    UPROPERTY() FExpressionInput B;  // 0x0058, size 0x14
    UPROPERTY() FExpressionInput Value;  // 0x006C, size 0x14
};
