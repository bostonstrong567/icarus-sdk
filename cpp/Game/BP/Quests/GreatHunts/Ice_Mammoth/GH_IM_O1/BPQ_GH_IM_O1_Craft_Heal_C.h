// /Game/BP/Quests/GreatHunts/Ice_Mammoth/GH_IM_O1/BPQ_GH_IM_O1_Craft_Heal.BPQ_GH_IM_O1_Craft_Heal_C
// Derives from: ABPQ_Collect_Item_C > AQuest > AIcarusActor > AActor > UObject
// size 0x4C0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_GH_IM_O1_Craft_Heal_C : public ABPQ_Collect_Item_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x04A0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAccountFlagsRowHandle MedicalScanner_AccountFlg;  // 0x04A8, size 0x18

    UFUNCTION() void ExecuteUbergraph_BPQ_GH_IM_O1_Craft_Heal(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GrantAccountFlag(const FConnectedPlayer& ConnectedPlayer);  // parameters 0x38
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
