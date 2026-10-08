// /Game/BP/Quests/Prometheus/Story/Story1/BPQ_Story1_Escort_Loot.BPQ_Story1_Escort_Loot_C
// Derives from: ABPQ_Retrieve_Item_Base_C > AQuest > AIcarusActor > AActor > UObject
// size 0x510, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_Story1_Escort_Loot_C : public ABPQ_Retrieve_Item_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x04D8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDialogueRowHandle LootBaseDaisyDied;  // 0x04E0, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDialogueRowHandle LootedBaseDaisyAbandoned;  // 0x04F8, size 0x18

    UFUNCTION(BlueprintCallable) void AdditionalCheck();
    UFUNCTION() void ExecuteUbergraph_BPQ_Story1_Escort_Loot(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ItemsCollected();
    UFUNCTION(BlueprintCallable) void ReplenishItem();
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
