// /Game/UI/Settings/UMG_SettingControl_Language.UMG_SettingControl_Language_C
// Derives from: USettingWidget_Language > USettingWidget > UIcarusWidget > UUserWidget > UWidget > UVisual > UObject
// size 0x3C8, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_SettingControl_Language_C : public USettingWidget_Language
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x03A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UComboBoxString* ComboBox;  // 0x03A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UProgressBar* CoverageBar;  // 0x03B0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FString> Cultures;  // 0x03B8, size 0x10

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Apply();
    UFUNCTION() void BndEvt__ComboBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(FString SelectedItem, TEnumAsByte<ESelectInfo> SelectionType);  // parameters 0x11
    UFUNCTION() void ExecuteUbergraph_UMG_SettingControl_Language(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Populate_Options();  // named "Populate Options"
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void SetLanguage(FString Language);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void UpdateCoverage();
};
