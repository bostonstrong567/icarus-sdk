// /Game/UI/Components/UMG_MountBehaviourSetting.UMG_MountBehaviourSetting_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2B8, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_MountBehaviourSetting_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_CurrentBehaviour;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TitleText;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* VerticalBox_ButtonList;  // 0x0278, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText SettingName;  // 0x0280, size 0x18
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FOnOptionSelected OnOptionSelected;  // 0x0298, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<SwapButtonOption> Options;  // 0x02A8, size 0x10

    UFUNCTION() void ExecuteUbergraph_UMG_MountBehaviourSetting(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnButtonToggled(UUMG_ToggleButtonBase_C* ToggleButton);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnOptionSelected__DelegateSignature(int32 OptionIndex, SwapButtonOption OptionData);  // parameters 0x28
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetOptions(TArray<SwapButtonOption>& Options);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetSelectedOption(int32 OptionIndex);  // parameters 0x4
};
