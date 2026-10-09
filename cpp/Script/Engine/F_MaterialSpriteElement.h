// /Script/Engine.MaterialSpriteElement
// size 0x28, declared in Engine/Source/Runtime/Engine/Classes/Components/MaterialBillboardComponent.h

USTRUCT()
struct FMaterialSpriteElement
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInterface* Material;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UCurveFloat* DistanceToOpacityCurve;  // 0x0008, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bSizeIsInScreenSpace : 1;  // 0x0010, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float BaseSizeX;  // 0x0014, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float BaseSizeY;  // 0x0018, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UCurveFloat* DistanceToSizeCurve;  // 0x0020, size 0x8
};
