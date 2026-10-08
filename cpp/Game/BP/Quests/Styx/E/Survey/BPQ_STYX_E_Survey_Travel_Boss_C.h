// /Game/BP/Quests/Styx/E/Survey/BPQ_STYX_E_Survey_Travel_Boss.BPQ_STYX_E_Survey_Travel_Boss_C
// Derives from: ABP_Quest_TravelLarge_C > ABPQ_Travel_C > AQuest > AIcarusActor > AActor > UObject
// size 0x488, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_STYX_E_Survey_Travel_Boss_C : public ABP_Quest_TravelLarge_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0480, size 0x8

    UFUNCTION() void ExecuteUbergraph_BPQ_STYX_E_Survey_Travel_Boss(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
