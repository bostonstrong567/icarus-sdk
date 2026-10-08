// /Script/Icarus.BuildingVariation
// size 0x30, declared in Icarus/Source/Icarus/Traits/Behaviours/BuildableData.h

USTRUCT()
struct FBuildingVariation
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTalentsRowHandle Requirement;  // 0x0000, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBuildingPiecesRowHandle Piece;  // 0x0018, size 0x18
};
