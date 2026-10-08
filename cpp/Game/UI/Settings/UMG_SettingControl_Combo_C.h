// /Game/UI/Settings/UMG_SettingControl_Combo.UMG_SettingControl_Combo_C
// Derives from: USettingWidget_Combo > USettingWidget > UIcarusWidget > UUserWidget > UWidget > UVisual > UObject
// size 0x408, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_SettingControl_Combo_C : public USettingWidget_Combo
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0390, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UComboBoxText* Combo;  // 0x0398, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText CustomText;  // 0x03A0, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FText> Hide_Options;  // 0x03B8, size 0x10, named "Hide Options"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FText> Options;  // 0x03C8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FText> OptionsUpper;  // 0x03D8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FText> FilteredOptions;  // 0x03E8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FText> FilteredOptionsUpper;  // 0x03F8, size 0x10

    UFUNCTION(BlueprintCallable) void AddOptions();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Apply();
    UFUNCTION() void BndEvt__Combo_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature(FText SelectedItem, TEnumAsByte<ESelectInfo> SelectionType);  // parameters 0x19
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_SettingControl_Combo(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetCustomLabel(FText& LabelOut);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void GetFocusWidget(bool& bValid, UWidget*& Widget, bool& bThis);  // parameters 0x11
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) int32 GetValueIndex();  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void IsValidOption(bool& Valid);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void SetHideOptions(const TArray<FText>& HideOptions);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void SetOptions(const TArray<FText>& Options);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void SetValueIndex(int32 Index);  // parameters 0x4
};
