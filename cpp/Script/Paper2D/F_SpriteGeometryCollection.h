// /Script/Paper2D.SpriteGeometryCollection
// size 0x30, declared in Engine/Plugins/2D/Paper2D/Source/Paper2D/Classes/SpriteEditorOnlyTypes.h

USTRUCT()
struct FSpriteGeometryCollection
{
    UPROPERTY(EditAnywhere) TArray<FSpriteGeometryShape> Shapes;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere) TEnumAsByte<ESpritePolygonMode> GeometryType;  // 0x0010, size 0x1
    UPROPERTY(EditAnywhere) int32 PixelsPerSubdivisionX;  // 0x0014, size 0x4
    UPROPERTY(EditAnywhere) int32 PixelsPerSubdivisionY;  // 0x0018, size 0x4
    UPROPERTY(EditAnywhere) bool bAvoidVertexMerging;  // 0x001C, size 0x1
    UPROPERTY(EditAnywhere) float AlphaThreshold;  // 0x0020, size 0x4
    UPROPERTY(EditAnywhere) float DetailAmount;  // 0x0024, size 0x4
    UPROPERTY(EditAnywhere) float SimplifyEpsilon;  // 0x0028, size 0x4
};
