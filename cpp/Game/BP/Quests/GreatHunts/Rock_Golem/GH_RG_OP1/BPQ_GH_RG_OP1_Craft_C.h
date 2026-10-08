// /Game/BP/Quests/GreatHunts/Rock_Golem/GH_RG_OP1/BPQ_GH_RG_OP1_Craft.BPQ_GH_RG_OP1_Craft_C
// Derives from: ABPQ_Collect_Item_C > AQuest > AIcarusActor > AActor > UObject
// size 0x4C0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_GH_RG_OP1_Craft_C : public ABPQ_Collect_Item_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x04A0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAccountFlagsRowHandle Drill_Arrows_Account_Flag;  // 0x04A8, size 0x18

    UFUNCTION() void ExecuteUbergraph_BPQ_GH_RG_OP1_Craft(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void GetDescription(const FText& InDescription, FText& OutDescription, bool& bOutComplete);  // parameters 0x31
    UFUNCTION(BlueprintCallable) void GrantAccountFlag(const FConnectedPlayer& ConnectedPlayer);  // parameters 0x38
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
