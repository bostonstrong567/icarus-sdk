// /Script/Engine.MaterialExpressionComment
// Derives from: UMaterialExpression > UObject
// size 0x70, declared in Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionComment.h

UCLASS(MinimalAPI)
class UMaterialExpressionComment : public UMaterialExpression
{
public:
    UPROPERTY() int32 SizeX;  // 0x0040, size 0x4
    UPROPERTY() int32 SizeY;  // 0x0044, size 0x4
    UPROPERTY(EditAnywhere) FString Text;  // 0x0048, size 0x10
    UPROPERTY(EditAnywhere) FLinearColor CommentColor;  // 0x0058, size 0x10
    UPROPERTY(EditAnywhere) int32 FontSize;  // 0x0068, size 0x4
};
