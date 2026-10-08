// /Game/BP/Quests/Olympus/Desert/Recovery2/BPQ_OLY_Desert_Recovery2_Reward.BPQ_OLY_Desert_Recovery2_Reward_C
// Derives from: ABPQ_Retrieve_Item_Base_C > AQuest > AIcarusActor > AActor > UObject
// size 0x590, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_OLY_Desert_Recovery2_Reward_C : public ABPQ_Retrieve_Item_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x04D8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FExperienceEventsRowHandle ExpToAward;  // 0x04E0, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FExperienceEventsRowHandle Event;  // 0x04F8, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDialogueRowHandle FailedDialogue;  // 0x0510, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDialogueRowHandle SuccessDialogue;  // 0x0528, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FItemTemplateRowHandle, int32> Items;  // 0x0540, size 0x50

    UFUNCTION() void ExecuteUbergraph_BPQ_OLY_Desert_Recovery2_Reward(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetRewards(AQuest* Parent, TMap<FItemTemplateRowHandle, int32>& Items);  // parameters 0x58
    UFUNCTION(BlueprintImplementableEvent) void ReceiveQuestEnded(bool bWasAbandoned);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
