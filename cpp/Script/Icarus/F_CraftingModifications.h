// /Script/Icarus.CraftingModifications
// size 0x78, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/CraftingModificationsLibrary.generated.h

USTRUCT()
struct FCraftingModifications : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTagQueriesRowHandle Query;  // 0x0018, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FStatsEnum StatRequirement;  // 0x0030, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FAlterationsEnum> StatGrantedAlteration;  // 0x0040, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FResourceRequirement ResourceRequirement;  // 0x0050, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAlterationsEnum ResourceGrantedAlteration;  // 0x0068, size 0x10
};
