// /Game/UI/Settings/UMG_SettingsView.UMG_SettingsView_C
// Derives from: USettingsView > UIcarusWidget > UUserWidget > UWidget > UVisual > UObject
// size 0x308, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_SettingsView_C : public USettingsView
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* SectionsBox;  // 0x02B0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText SettingsViewDescription;  // 0x02B8, size 0x18
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UTextBlock* SettingOptionDescription;  // 0x02D0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FOn_Setting_Option_Hovered On_Setting_Option_Hovered;  // 0x02D8, size 0x10, named "On Setting Option Hovered"
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FOn_Setting_Option_Unhovered On_Setting_Option_Unhovered;  // 0x02E8, size 0x10, named "On Setting Option Unhovered"
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FOn_View_Refresh On_View_Refresh;  // 0x02F8, size 0x10, named "On View Refresh"

    UFUNCTION(BlueprintCallable) USettingsSection* AddNewSection();  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) USettingsSection* CreateNewSection();  // parameters 0x8
    UFUNCTION() void ExecuteUbergraph_UMG_SettingsView(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void On_Setting_Option_Hovered__DelegateSignature(UUMG_SettingRowBorder_C* Setting_Option);  // parameters 0x8, named "On Setting Option Hovered__DelegateSignature"
    UFUNCTION(BlueprintCallable) void On_Setting_Option_Unhovered__DelegateSignature(UUMG_SettingRowBorder_C* Setting_Option);  // parameters 0x8, named "On Setting Option Unhovered__DelegateSignature"
    UFUNCTION(BlueprintCallable) void On_View_Refresh__DelegateSignature(UUMG_SettingsView_C* View);  // parameters 0x8, named "On View Refresh__DelegateSignature"
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void OnRefresh();
    UFUNCTION(BlueprintImplementableEvent) void PostSetup();
    UFUNCTION(BlueprintCallable) void Set_Confirmation_Slot(UNamedSlot* Confirmation_Slot);  // parameters 0x8, named "Set Confirmation Slot"
    UFUNCTION(BlueprintCallable) void Setting_Option_Hovered(UUMG_SettingRowBorder_C* Setting_Option);  // parameters 0x8, named "Setting Option Hovered"
    UFUNCTION(BlueprintCallable) void Setting_Option_Unhovered(UUMG_SettingRowBorder_C* Setting_Option);  // parameters 0x8, named "Setting Option Unhovered"
};
