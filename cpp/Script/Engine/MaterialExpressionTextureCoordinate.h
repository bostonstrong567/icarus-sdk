// /Script/Engine.MaterialExpressionTextureCoordinate
// Derives from: UMaterialExpression > UObject
// size 0x50, declared in Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionTextureCoordinate.h

UCLASS(MinimalAPI)
class UMaterialExpressionTextureCoordinate : public UMaterialExpression
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 CoordinateIndex;  // 0x0040, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float UTiling;  // 0x0044, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float VTiling;  // 0x0048, size 0x4
    UPROPERTY(EditAnywhere) uint8 UnMirrorU : 1;  // 0x004C, mask 0x01
    UPROPERTY(EditAnywhere) uint8 UnMirrorV : 1;  // 0x004C, mask 0x02
};
