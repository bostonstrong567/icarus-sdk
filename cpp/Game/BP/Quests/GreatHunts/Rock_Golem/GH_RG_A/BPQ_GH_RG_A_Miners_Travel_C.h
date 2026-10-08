// /Game/BP/Quests/GreatHunts/Rock_Golem/GH_RG_A/BPQ_GH_RG_A_Miners_Travel.BPQ_GH_RG_A_Miners_Travel_C
// Derives from: ABP_Quest_TravelLarge_C > ABPQ_Travel_C > AQuest > AIcarusActor > AActor > UObject
// size 0x4A0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_GH_RG_A_Miners_Travel_C : public ABP_Quest_TravelLarge_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0480, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDialogueRowHandle Dialogue;  // 0x0488, size 0x18

    UFUNCTION() void ExecuteUbergraph_BPQ_GH_RG_A_Miners_Travel(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
