// /Game/BP/Quests/GreatHunts/Ice_Mammoth/GH_IM_O1/BPQ_GH_IM_O1_A.BPQ_GH_IM_O1_A_C
// Derives from: ABPQ_Travel_C > AQuest > AIcarusActor > AActor > UObject
// size 0x490, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_GH_IM_O1_A_C : public ABPQ_Travel_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0480, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UIcarusMapIconComponent* IcarusMapIcon;  // 0x0488, size 0x8

    UFUNCTION() void ExecuteUbergraph_BPQ_GH_IM_O1_A(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveQuestEnded(bool bWasAbandoned);  // parameters 0x1
};
