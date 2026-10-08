// /Game/BP/Quests/Elysium/SideQuests/Trails/BPQ_ELY_SQ_Trials_Track_Collect_Beacons.BPQ_ELY_SQ_Trials_Track_Collect_Beacons_C
// Derives from: ABPQ_Collect_Item_WithName_C > ABPQ_Collect_Item_C > AQuest > AIcarusActor > AActor > UObject
// size 0x4A8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_ELY_SQ_Trials_Track_Collect_Beacons_C : public ABPQ_Collect_Item_WithName_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x04A0, size 0x8

    UFUNCTION() void ExecuteUbergraph_BPQ_ELY_SQ_Trials_Track_Collect_Beacons(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
