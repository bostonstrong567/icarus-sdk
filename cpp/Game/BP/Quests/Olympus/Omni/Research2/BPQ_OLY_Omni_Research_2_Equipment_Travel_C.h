// /Game/BP/Quests/Olympus/Omni/Research2/BPQ_OLY_Omni_Research_2_Equipment_Travel.BPQ_OLY_Omni_Research_2_Equipment_Travel_C
// Derives from: ABP_Quest_TravelLarge_C > ABPQ_Travel_C > AQuest > AIcarusActor > AActor > UObject
// size 0x490, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_OLY_Omni_Research_2_Equipment_Travel_C : public ABP_Quest_TravelLarge_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0480, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBPQC_SearchArea_C* BPQC_SearchArea;  // 0x0488, size 0x8

    UFUNCTION() void ExecuteUbergraph_BPQ_OLY_Omni_Research_2_Equipment_Travel(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void QuestEnded();
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
