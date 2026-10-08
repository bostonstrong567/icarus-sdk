// /Script/Engine.MaterialExpressionTextureBase
// Derives from: UMaterialExpression > UObject
// size 0x48, declared in Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionTextureBase.h

UCLASS(Abstract)
class UMaterialExpressionTextureBase : public UMaterialExpression
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UTexture* Texture;  // 0x0040, size 0x8
};
