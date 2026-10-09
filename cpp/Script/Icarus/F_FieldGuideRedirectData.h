// /Script/Icarus.FieldGuideRedirectData
// size 0x58, declared in Icarus/Source/Icarus/IcarusGenerated/FieldGuideRedirect/FieldGuideRedirectTable.h

USTRUCT()
struct FFieldGuideRedirectData : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemsStaticRowHandle DisplayItem;  // 0x0018, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FItemsStaticRowHandle> HiddenItems;  // 0x0030, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTagQueriesRowHandle QueryMatchHiddenItem;  // 0x0040, size 0x18
};
