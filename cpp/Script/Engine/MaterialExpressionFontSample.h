// /Script/Engine.MaterialExpressionFontSample
// Derives from: UMaterialExpression > UObject
// size 0x50, declared in Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionFontSample.h

UCLASS(MinimalAPI)
class UMaterialExpressionFontSample : public UMaterialExpression
{
public:
    UPROPERTY(EditAnywhere) UFont* Font;  // 0x0040, size 0x8
    UPROPERTY(EditAnywhere) int32 FontTexturePage;  // 0x0048, size 0x4
};
