// /Game/UI/Components/UMG_QuestRewardOption.UMG_QuestRewardOption_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2D4, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_QuestRewardOption_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Backglow;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* ClaimButtoin;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Description;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* RewardName;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* Rewards;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* WeatherFrame;  // 0x0290, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDynamicQuestRewardsRowHandle DynamicQuestReward;  // 0x0298, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Multiplier;  // 0x02B0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FQuestRewardSelected QuestRewardSelected;  // 0x02B8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_Reward_Transport_Pod_Selection_C* LinkedActor;  // 0x02C8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Seed;  // 0x02D0, size 0x4

    UFUNCTION() void BndEvt__UMG_QuestRewardOption_ClaimButtoin_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_QuestRewardOption(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void QuestRewardSelected__DelegateSignature(FDynamicQuestRewardsRowHandle QuestReward);  // parameters 0x18
};
