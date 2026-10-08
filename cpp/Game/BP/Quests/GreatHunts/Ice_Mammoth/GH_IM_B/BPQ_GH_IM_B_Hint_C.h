// /Game/BP/Quests/GreatHunts/Ice_Mammoth/GH_IM_B/BPQ_GH_IM_B_Hint.BPQ_GH_IM_B_Hint_C
// Derives from: ABPQ_Collect_Note_C > AQuest > AIcarusActor > AActor > UObject
// size 0x4B8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_GH_IM_B_Hint_C : public ABPQ_Collect_Note_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0490, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UIcarusMapIconComponent* IcarusMapIcon;  // 0x0498, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDialogueRowHandle Dialogue;  // 0x04A0, size 0x18

    UFUNCTION() void ExecuteUbergraph_BPQ_GH_IM_B_Hint(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
