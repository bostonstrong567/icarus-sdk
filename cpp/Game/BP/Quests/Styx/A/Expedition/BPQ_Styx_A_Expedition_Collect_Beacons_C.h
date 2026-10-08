// /Game/BP/Quests/Styx/A/Expedition/BPQ_Styx_A_Expedition_Collect_Beacons.BPQ_Styx_A_Expedition_Collect_Beacons_C
// Derives from: ABPQ_Retrieve_Item_Base_C > AQuest > AIcarusActor > AActor > UObject
// size 0x528, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_Styx_A_Expedition_Collect_Beacons_C : public ABPQ_Retrieve_Item_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x04D8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDialogueRowHandle Dialogue;  // 0x04E0, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDialogueRowHandle Dialogue_0;  // 0x04F8, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDialogueRowHandle Dialogue_1;  // 0x0510, size 0x18

    UFUNCTION(BlueprintCallable) void CustomEvent();
    UFUNCTION(BlueprintCallable) void CustomEvent_0();
    UFUNCTION(BlueprintCallable) void CustomEvent_1();
    UFUNCTION() void ExecuteUbergraph_BPQ_Styx_A_Expedition_Collect_Beacons(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnSupplyPodSpawnLocationFound(FVector Location);  // parameters 0xC
    UFUNCTION(BlueprintImplementableEvent) void ReceiveQuestEnded(bool bWasAbandoned);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
