// /Game/UI/Components/UMG_DynamicQuestOption.UMG_DynamicQuestOption_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x310, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_DynamicQuestOption_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Backglow;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Description;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* DifficultyText;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_114;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* QuestImage;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* QuestName;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* RenText;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* RequestButton;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* StartError;  // 0x02A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDynamicQuestsRowHandle DynamicQuest;  // 0x02B0, size 0x18
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FQuestSelected QuestSelected;  // 0x02C8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EDynamicQuestDifficulty QuestDifficulty;  // 0x02D8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSessionFlagsRowHandle Session_Flag;  // 0x02DC, size 0x18, named "Session Flag"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText BuiltText;  // 0x02F8, size 0x18

    UFUNCTION() void BndEvt__UMG_QuestRewardOption_ClaimButtoin_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_DynamicQuestOption(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void QuestSelected__DelegateSignature(FDynamicQuestsRowHandle Quest);  // parameters 0x18
};
