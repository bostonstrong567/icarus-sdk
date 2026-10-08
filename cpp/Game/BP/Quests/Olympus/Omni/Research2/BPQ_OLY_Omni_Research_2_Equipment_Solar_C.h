// /Game/BP/Quests/Olympus/Omni/Research2/BPQ_OLY_Omni_Research_2_Equipment_Solar.BPQ_OLY_Omni_Research_2_Equipment_Solar_C
// Derives from: ABPQ_Retrieve_Item_And_Spawn_Crate_C > AQuest > AIcarusActor > AActor > UObject
// size 0x4D8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_OLY_Omni_Research_2_Equipment_Solar_C : public ABPQ_Retrieve_Item_And_Spawn_Crate_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x04C0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_ManualAISpawnPoint_C* Spawn1;  // 0x04C8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_ManualAISpawnPoint_C* Spawn2;  // 0x04D0, size 0x8

    UFUNCTION() void ExecuteUbergraph_BPQ_OLY_Omni_Research_2_Equipment_Solar(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetRequiredEquipment(TArray<FItemTemplateRowHandle>& EquipmentItemArray, FItemTemplateRowHandle& Equipment_Item, int32& Count);  // parameters 0x2C
    UFUNCTION(BlueprintImplementableEvent) void ReceiveQuestEnded(bool bWasAbandoned);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void RunFlow();
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
