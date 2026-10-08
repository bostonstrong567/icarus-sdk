// /Script/Engine.MaterialExpression
// Derives from: UObject
// size 0x40, declared in Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpression.h

UCLASS(Abstract)
class UMaterialExpression : public UObject
{
public:
    UPROPERTY() UMaterial* Material;  // 0x0028, size 0x8
    UPROPERTY() UMaterialFunction* Function;  // 0x0030, size 0x8
    UPROPERTY() uint8 bIsParameterExpression : 1;  // 0x0038, mask 0x01

    // Virtual functions that start here:
    //   CanReferenceTexture, GetMaterialExpressionId, GetParameterExpressionId, GetReferencedTexture
    //   GetTexturesForceMaterialRecompile
};
