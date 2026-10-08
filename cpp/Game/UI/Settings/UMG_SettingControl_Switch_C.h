// /Game/UI/Settings/UMG_SettingControl_Switch.UMG_SettingControl_Switch_C
// Derives from: USettingWidget_Switch > USettingWidget > UIcarusWidget > UUserWidget > UWidget > UVisual > UObject
// size 0x3D8, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_SettingControl_Switch_C : public USettingWidget_Switch
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0390, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* ToggleContainer;  // 0x0398, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FText> ToggleOptions;  // 0x03A0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FText> OptionToolTips;  // 0x03B0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 DefaultToggleIndex;  // 0x03C0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSubclassOf<UUMG_ToggleButtonBase_C> ToggleWidgetClass;  // 0x03C8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ActiveToggleIndex;  // 0x03D0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float WidthOverride;  // 0x03D4, size 0x4

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Apply();
    UFUNCTION(BlueprintCallable) void ConstructToggles();
    UFUNCTION() void ExecuteUbergraph_UMG_SettingControl_Switch(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void GetFocusWidget(bool& bValid, UWidget*& Widget, bool& bThis);  // parameters 0x11
    UFUNCTION(BlueprintImplementableEvent) void SetLabels(const TArray<FText>& Labels);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetToggleOption(int32 ToggleIndex);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void SetValueIndex(int32 Index);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ToggleButtonToggled(UUMG_ToggleButtonBase_C* ToggleButton);  // parameters 0x8
};
