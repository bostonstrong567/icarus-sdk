// /Script/Icarus.CraftingOutput
// size 0x40, declared in Icarus/Source/Icarus/DataStructs/CraftingData.h

USTRUCT()
struct FCraftingOutput
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemTemplateRowHandle Element;  // 0x0000, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Count;  // 0x0018, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FItemDynamicData> DynamicProperties;  // 0x0020, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FAlterationsRowHandle> Alterations;  // 0x0030, size 0x10
};
