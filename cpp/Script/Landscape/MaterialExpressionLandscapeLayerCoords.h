// /Script/Landscape.MaterialExpressionLandscapeLayerCoords
// Derives from: UMaterialExpression > UObject
// size 0x58, declared in Engine/Source/Runtime/Landscape/Classes/Materials/MaterialExpressionLandscapeLayerCoords.h

UCLASS()
class UMaterialExpressionLandscapeLayerCoords : public UMaterialExpression
{
public:
    UPROPERTY(EditAnywhere) TEnumAsByte<ETerrainCoordMappingType> MappingType;  // 0x0040, size 0x1
    UPROPERTY(EditAnywhere) TEnumAsByte<ELandscapeCustomizedCoordType> CustomUVType;  // 0x0041, size 0x1
    UPROPERTY(EditAnywhere) float MappingScale;  // 0x0044, size 0x4
    UPROPERTY(EditAnywhere) float MappingRotation;  // 0x0048, size 0x4
    UPROPERTY(EditAnywhere) float MappingPanU;  // 0x004C, size 0x4
    UPROPERTY(EditAnywhere) float MappingPanV;  // 0x0050, size 0x4
};
