// /Game/BP/Quests/Elysium/Story/Story2/BPQ_ELY_Story_2_Prepare_Equipment.BPQ_ELY_Story_2_Prepare_Equipment_C
// Derives from: ABPQ_Collect_Item_C > AQuest > AIcarusActor > AActor > UObject
// size 0x4A8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_ELY_Story_2_Prepare_Equipment_C : public ABPQ_Collect_Item_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x04A0, size 0x8

    UFUNCTION() void ExecuteUbergraph_BPQ_ELY_Story_2_Prepare_Equipment(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
