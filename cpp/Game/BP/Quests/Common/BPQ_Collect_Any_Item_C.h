// /Game/BP/Quests/Common/BPQ_Collect_Any_Item.BPQ_Collect_Any_Item_C
// Derives from: ABPQ_Collect_Item_C > AQuest > AIcarusActor > AActor > UObject
// size 0x4B0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_Collect_Any_Item_C : public ABPQ_Collect_Item_C
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FItemTemplateRowHandle> ItemsToFind;  // 0x04A0, size 0x10

    UFUNCTION(BlueprintCallable) void ItemCheck();
};
