// /Script/Paper2D.PaperTerrainMaterialRule
// size 0x38, declared in Engine/Plugins/2D/Paper2D/Source/Paper2D/Classes/PaperTerrainMaterial.h

USTRUCT()
struct FPaperTerrainMaterialRule
{
public:
    UPROPERTY(EditAnywhere) UPaperSprite* StartCap;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere) TArray<UPaperSprite*> Body;  // 0x0008, size 0x10
    UPROPERTY(EditAnywhere) UPaperSprite* EndCap;  // 0x0018, size 0x8
    UPROPERTY(EditAnywhere) float MinimumAngle;  // 0x0020, size 0x4
    UPROPERTY(EditAnywhere) float MaximumAngle;  // 0x0024, size 0x4
    UPROPERTY(EditAnywhere) bool bEnableCollision;  // 0x0028, size 0x1
    UPROPERTY(EditAnywhere) float CollisionOffset;  // 0x002C, size 0x4
    UPROPERTY(EditAnywhere) int32 DrawOrder;  // 0x0030, size 0x4
};
