// /Script/Icarus.ItemConstructionData
// size 0x28, declared in Icarus/Source/Icarus/DataStructs/ItemData.h

USTRUCT()
struct FItemConstructionData
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemsStaticRowHandle ItemStatic;  // 0x0000, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FItemDynamicContainer> ItemDynamic;  // 0x0018, size 0x10
};
