// /Game/UI/Hab/DropTerminal/CustomGameSettings/UMG_CustomGameSettings_DropDown.UMG_CustomGameSettings_DropDown_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x320, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_CustomGameSettings_DropDown_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UComboBoxText* ComboBox;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* OuterBox;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* SettingName;  // 0x0278, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName RowName;  // 0x0280, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FCustomGameStat SettingData;  // 0x0288, size 0x80
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool CanEdit;  // 0x0308, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 InitialValue;  // 0x030C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FOnSettingValueChanged OnSettingValueChanged;  // 0x0310, size 0x10

    UFUNCTION() void BndEvt__UMG_CustomGameSettings_DropDown_ComboBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(FText SelectedItem, TEnumAsByte<ESelectInfo> SelectionType);  // parameters 0x19
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_CustomGameSettings_DropDown(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnSettingValueChanged__DelegateSignature(FName RowName, int32 NewValue);  // parameters 0xC
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void UpdateDefaultStateTextHighlighting(int32 CurrentValue);  // parameters 0x4
};
