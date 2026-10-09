// /Script/Icarus.BagPriorityData
// size 0x40, declared in Icarus/Source/Icarus/DataStructs/BagPriorityData.h

USTRUCT()
struct FBagPriorityData : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTagQueriesRowHandle ItemQuery;  // 0x0018, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FItemsStaticRowHandle> BagItems;  // 0x0030, size 0x10
};
