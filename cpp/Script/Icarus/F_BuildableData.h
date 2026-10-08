// /Script/Icarus.BuildableData
// size 0xB8, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/InventoryItemLibrary.generated.h

USTRUCT()
struct FBuildableData : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSubclassOf<UBuildableComponent> Behaviour;  // 0x0018, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBuildingStabilityRowHandle Stability;  // 0x0020, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBuildingTypesRowHandle Type;  // 0x0038, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EBuildingPieceType PieceType;  // 0x0050, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FBuildingVariation> Variations;  // 0x0058, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FStatsEnum, int32> Stats;  // 0x0068, size 0x50
};
