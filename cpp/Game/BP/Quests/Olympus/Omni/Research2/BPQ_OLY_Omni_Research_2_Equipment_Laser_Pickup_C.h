// /Game/BP/Quests/Olympus/Omni/Research2/BPQ_OLY_Omni_Research_2_Equipment_Laser_Pickup.BPQ_OLY_Omni_Research_2_Equipment_Laser_Pickup_C
// Derives from: ABPQ_Retrieve_Item_Pickup_C > AQuest > AIcarusActor > AActor > UObject
// size 0x478, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_OLY_Omni_Research_2_Equipment_Laser_Pickup_C : public ABPQ_Retrieve_Item_Pickup_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0470, size 0x8

    UFUNCTION(BlueprintCallable) void AddItemToInventory(AActor* Actor);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_OLY_Omni_Research_2_Equipment_Laser_Pickup(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) FString GetCrateName();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) FItemTemplateRowHandle GetLaserItem();  // parameters 0x18
    UFUNCTION(BlueprintCallable) void GetRequiredEquipment(TArray<FItemTemplateRowHandle>& EquipmentItemArray, FItemTemplateRowHandle& Equipment_Item, int32& Count);  // parameters 0x2C
    UFUNCTION(BlueprintImplementableEvent) void ReceiveQuestEnded(bool bWasAbandoned);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
