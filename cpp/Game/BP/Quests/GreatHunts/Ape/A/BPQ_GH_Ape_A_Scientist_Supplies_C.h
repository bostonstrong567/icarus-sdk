// /Game/BP/Quests/GreatHunts/Ape/A/BPQ_GH_Ape_A_Scientist_Supplies.BPQ_GH_Ape_A_Scientist_Supplies_C
// Derives from: ABPQ_Collect_Item_C > AQuest > AIcarusActor > AActor > UObject
// size 0x4C0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_GH_Ape_A_Scientist_Supplies_C : public ABPQ_Collect_Item_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x04A0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAccountFlagsRowHandle MedicalScanner_AccountFlg;  // 0x04A8, size 0x18

    UFUNCTION() void ExecuteUbergraph_BPQ_GH_Ape_A_Scientist_Supplies(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GrantHealFlag(const FConnectedPlayer& ConnectedPlayer);  // parameters 0x38
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
