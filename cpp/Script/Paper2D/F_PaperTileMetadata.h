// /Script/Paper2D.PaperTileMetadata
// size 0x40, declared in Engine/Plugins/2D/Paper2D/Source/Paper2D/Classes/PaperTileSet.h

USTRUCT()
struct FPaperTileMetadata
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FName UserDataName;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere) FSpriteGeometryCollection CollisionData;  // 0x0008, size 0x30
    UPROPERTY() uint8 TerrainMembership;  // 0x0038, size 0x1
};
