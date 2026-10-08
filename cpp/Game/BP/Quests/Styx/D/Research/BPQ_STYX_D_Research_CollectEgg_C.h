// /Game/BP/Quests/Styx/D/Research/BPQ_STYX_D_Research_CollectEgg.BPQ_STYX_D_Research_CollectEgg_C
// Derives from: ABPQ_Retrieve_Item_Pickup_C > AQuest > AIcarusActor > AActor > UObject
// size 0x470, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_STYX_D_Research_CollectEgg_C : public ABPQ_Retrieve_Item_Pickup_C
{
public:

    UFUNCTION(BlueprintCallable) void GetRequiredEquipment(TArray<FItemTemplateRowHandle>& EquipmentItemArray, FItemTemplateRowHandle& Equipment_Item, int32& Count);  // parameters 0x2C
};
