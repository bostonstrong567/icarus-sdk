// /Game/BP/Quests/Olympus/Arctic/Recovery/BPQ_OLY_Arctic_Recovery_Ship.BPQ_OLY_Arctic_Recovery_Ship_C
// Derives from: ABPQ_Stockpile_ShipContainer_C > AQuest > AIcarusActor > AActor > UObject
// size 0x480, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_OLY_Arctic_Recovery_Ship_C : public ABPQ_Stockpile_ShipContainer_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0478, size 0x8

    UFUNCTION() void ExecuteUbergraph_BPQ_OLY_Arctic_Recovery_Ship(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void RunFlow();
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
