// /Script/Engine.MaterialExpressionDecalMipmapLevel
// Derives from: UMaterialExpression > UObject
// size 0x60, declared in Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionDecalMipmapLevel.h

UCLASS()
class UMaterialExpressionDecalMipmapLevel : public UMaterialExpression
{
public:
    UPROPERTY() FExpressionInput TextureSize;  // 0x0040, size 0x14
    UPROPERTY(EditAnywhere) float ConstWidth;  // 0x0054, size 0x4
    UPROPERTY(EditAnywhere) float ConstHeight;  // 0x0058, size 0x4
};
