// /Game/UI/Settings/UMG_SettingsSection.UMG_SettingsSection_C
// Derives from: USettingsSection > UUserWidget > UWidget > UVisual > UObject
// size 0x358, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_SettingsSection_C : public USettingsSection
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* ApplyBox;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* ApplyButton;  // 0x02F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_SettingTooltipHover_C* Help;  // 0x0300, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* ResetButton;  // 0x0308, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* SettingArea;  // 0x0310, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* SettingBox;  // 0x0318, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Title;  // 0x0320, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FSettingOptionHovered SettingOptionHovered;  // 0x0328, size 0x10
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FSettingOptionUnhovered SettingOptionUnhovered;  // 0x0338, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Odd;  // 0x0348, size 0x1
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UNamedSlot* ConfirmationSlot;  // 0x0350, size 0x8

    UFUNCTION(BlueprintCallable) void AddNewWidget(USettingWidget* SettingWidget);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void AddWidgetToSection(USettingWidget* Widget);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void ApplySettings();
    UFUNCTION() void BndEvt__ApplyButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_BasicButton_2_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void ConfirmSettings();
    UFUNCTION(BlueprintCallable) UUMG_SettingRowBorder_C* CreateOptionBorder(APlayerController* OwningPlayer);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void DirtySection();
    UFUNCTION() void ExecuteUbergraph_UMG_SettingsSection(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void On_Confirmation_Result(bool Result);  // parameters 0x1, named "On Confirmation Result"
    UFUNCTION(BlueprintCallable) void On_Settings_Updated();  // named "On Settings Updated"
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void OnRefresh();
    UFUNCTION(BlueprintImplementableEvent) void PostSetup();
    UFUNCTION(BlueprintImplementableEvent) void RevertSettings();
    UFUNCTION(BlueprintCallable) void Set_Requirements();  // named "Set Requirements"
    UFUNCTION(BlueprintImplementableEvent) void SetDisplayName(const FText& DisplayName);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void Setting_Option_Hovered(UUMG_SettingRowBorder_C* Setting_Option);  // parameters 0x8, named "Setting Option Hovered"
    UFUNCTION(BlueprintCallable) void Setting_Option_Unhovered(UUMG_SettingRowBorder_C* Setting_Option);  // parameters 0x8, named "Setting Option Unhovered"
    UFUNCTION(BlueprintCallable) void SettingOptionHovered__DelegateSignature(UUMG_SettingRowBorder_C* Setting_Option);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SettingOptionUnhovered__DelegateSignature(UUMG_SettingRowBorder_C* Setting_Option);  // parameters 0x8
};
