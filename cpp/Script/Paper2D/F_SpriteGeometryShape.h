// /Script/Paper2D.SpriteGeometryShape
// size 0x30, declared in Engine/Plugins/2D/Paper2D/Source/Paper2D/Classes/SpriteEditorOnlyTypes.h

USTRUCT()
struct FSpriteGeometryShape
{
    UPROPERTY(EditAnywhere) ESpriteShapeType ShapeType;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere) TArray<FVector2D> Vertices;  // 0x0008, size 0x10
    UPROPERTY(EditAnywhere) FVector2D BoxSize;  // 0x0018, size 0x8
    UPROPERTY(EditAnywhere) FVector2D BoxPosition;  // 0x0020, size 0x8
    UPROPERTY(EditAnywhere) float Rotation;  // 0x0028, size 0x4
    UPROPERTY(EditAnywhere) bool bNegativeWinding;  // 0x002C, size 0x1
};
