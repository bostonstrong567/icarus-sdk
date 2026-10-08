// /Game/BP/Quests/Olympus/Riverlands/Delivery/BPQ_OLY_Riverlands_Delivery_ShipContainer.BPQ_OLY_Riverlands_Delivery_ShipContainer_C
// Derives from: ABPQ_Stockpile_ShipContainer_C > AQuest > AIcarusActor > AActor > UObject
// size 0x480, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_OLY_Riverlands_Delivery_ShipContainer_C : public ABPQ_Stockpile_ShipContainer_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0478, size 0x8

    UFUNCTION() void ExecuteUbergraph_BPQ_OLY_Riverlands_Delivery_ShipContainer(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void RunFlow();
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
