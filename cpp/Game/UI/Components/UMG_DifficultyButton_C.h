// /Game/UI/Components/UMG_DifficultyButton.UMG_DifficultyButton_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2A9, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_DifficultyButton_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* Button1;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* ButtonImage;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* DifficultyName;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* RewardMultiplier;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* SelectedImage;  // 0x0288, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Checked;  // 0x0290, size 0x1
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FUpdated Updated;  // 0x0298, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EMissionDifficulty New_Difficulty;  // 0x02A8, size 0x1, named "New Difficulty"

    UFUNCTION() void BndEvt__UMG_Checkbox_Button1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    UFUNCTION() void ExecuteUbergraph_UMG_DifficultyButton(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ManualCheckNoEvents(bool Checked);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void ManuallyCheck(bool Checked);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetDifficulty(EMissionDifficulty NewDifficulty, bool HideRewards);  // parameters 0x2
    UFUNCTION(BlueprintCallable) void Updated__DelegateSignature(bool Checked, UUMG_DifficultyButton_C* Widget);  // parameters 0x10
};
