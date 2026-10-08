// /Script/Engine.MaterialExpressionPreviousFrameSwitch
// Derives from: UMaterialExpression > UObject
// size 0x68, declared in Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionPreviousFrameSwitch.h

UCLASS(MinimalAPI)
class UMaterialExpressionPreviousFrameSwitch : public UMaterialExpression
{
public:
    UPROPERTY() FExpressionInput CurrentFrame;  // 0x0040, size 0x14
    UPROPERTY() FExpressionInput PreviousFrame;  // 0x0054, size 0x14
};
