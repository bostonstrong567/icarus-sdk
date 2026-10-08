// /Game/UI/Settings/UMG_SettingControl_Keybindings.UMG_SettingControl_Keybindings_C
// Derives from: USettingWidget_Keybindings > USettingWidget > UIcarusWidget > UUserWidget > UWidget > UVisual > UObject
// size 0x440, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_SettingControl_Keybindings_C : public USettingWidget_Keybindings
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0390, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UScrollBox* KeybindBox;  // 0x0398, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FKeybindContextsRowHandle, UUMG_KeybindingSection_C*> Sections;  // 0x03A0, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FKeybindingsRowHandle, UUMG_Keybinding_C*> Widgets;  // 0x03F0, size 0x50

    UFUNCTION(BlueprintImplementableEvent) void ClearKeybindingWidgets();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) UKeybindingWidget* CreateKeybindingWidget(const FKeybindingsRowHandle& Keybinding);  // parameters 0x20
    UFUNCTION() void ExecuteUbergraph_UMG_SettingControl_Keybindings(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetSection(FKeybindContextsRowHandle Context, UUMG_KeybindingSection_C*& Section);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Setup();
    UFUNCTION(BlueprintCallable) void Setup_Sections();  // named "Setup Sections"
};
