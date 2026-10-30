// /Game/BP/Quests/Olympus/Forest/WSStockpile/BPQ_OLY_Forest_WS_Stockpile_Collect_Stone.BPQ_OLY_Forest_WS_Stockpile_Collect_Stone_C
// Derives from: ABPQ_Collect_Item_C > AQuest > AIcarusActor > AActor > UObject
// size 0x4A8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_OLY_Forest_WS_Stockpile_Collect_Stone_C : public ABPQ_Collect_Item_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x04A0, size 0x8

    UFUNCTION() void ExecuteUbergraph_BPQ_OLY_Forest_WS_Stockpile_Collect_Stone(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
