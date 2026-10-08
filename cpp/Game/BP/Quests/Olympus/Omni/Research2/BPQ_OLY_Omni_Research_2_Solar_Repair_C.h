// /Game/BP/Quests/Olympus/Omni/Research2/BPQ_OLY_Omni_Research_2_Solar_Repair.BPQ_OLY_Omni_Research_2_Solar_Repair_C
// Derives from: ABPQ_Retrieve_Item_Pickup_C > AQuest > AIcarusActor > AActor > UObject
// size 0x470, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_OLY_Omni_Research_2_Solar_Repair_C : public ABPQ_Retrieve_Item_Pickup_C
{
public:

    UFUNCTION(BlueprintCallable) void GetRequiredEquipment(TArray<FItemTemplateRowHandle>& EquipmentItemArray, FItemTemplateRowHandle& Equipment_Item, int32& Count);  // parameters 0x2C
};
