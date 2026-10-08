// /Game/BP/Quests/Elysium/Story/Story6/BPQ_ELY_Story_6_Stronghold_Travel.BPQ_ELY_Story_6_Stronghold_Travel_C
// Derives from: ABPQ_Travel_C > AQuest > AIcarusActor > AActor > UObject
// size 0x490, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_ELY_Story_6_Stronghold_Travel_C : public ABPQ_Travel_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0480, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_MissionSix_OrbitalSequence_C* Event;  // 0x0488, size 0x8

    UFUNCTION() void ExecuteUbergraph_BPQ_ELY_Story_6_Stronghold_Travel(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveQuestEnded(bool bWasAbandoned);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
