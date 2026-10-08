// /Script/Engine.MaterialExpressionSceneTexture
// Derives from: UMaterialExpression > UObject
// size 0x58, declared in Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionSceneTexture.h

UCLASS()
class UMaterialExpressionSceneTexture : public UMaterialExpression
{
public:
    UPROPERTY() FExpressionInput Coordinates;  // 0x0040, size 0x14
    UPROPERTY(EditAnywhere) TEnumAsByte<ESceneTextureId> SceneTextureId;  // 0x0054, size 0x1
    UPROPERTY(EditAnywhere) bool bFiltered;  // 0x0055, size 0x1
};
