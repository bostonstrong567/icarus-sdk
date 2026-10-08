// /Script/Icarus.CraftingTag
// size 0x70, declared in Icarus/Source/Icarus/DataStructs/CraftingData.h

USTRUCT()
struct FCraftingTag : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText TagName;  // 0x0018, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UTexture2D> TagIcon;  // 0x0030, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTagQueriesRowHandle Query;  // 0x0058, size 0x18
};
