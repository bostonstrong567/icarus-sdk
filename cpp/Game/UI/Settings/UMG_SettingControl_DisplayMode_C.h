// /Game/UI/Settings/UMG_SettingControl_DisplayMode.UMG_SettingControl_DisplayMode_C
// Derives from: USettingWidget > UIcarusWidget > UUserWidget > UWidget > UVisual > UObject
// size 0x3F8, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_SettingControl_DisplayMode_C : public USettingWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0390, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_SettingControl_Combo_C* DisplayModeCombo;  // 0x0398, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_SettingRowBorder_C* DisplayRowBorder;  // 0x03A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UScrollBox* KeybindBox;  // 0x03A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_SettingControl_Combo_C* ResolutionCombo;  // 0x03B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_SettingRowBorder_C* ResolutionRowBorder;  // 0x03B8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FText> Resolution_Options;  // 0x03C0, size 0x10, named "Resolution Options"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FIntPoint> Resolutions;  // 0x03D0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText Empty;  // 0x03E0, size 0x18

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Apply();
    UFUNCTION(BlueprintCallable) void Cache_Resolutions();  // named "Cache Resolutions"
    UFUNCTION(BlueprintCallable) void Display_Mode_Changed(FText SelectedItem, TEnumAsByte<ESelectInfo> SelectionType);  // parameters 0x19, named "Display Mode Changed"
    UFUNCTION() void ExecuteUbergraph_UMG_SettingControl_DisplayMode(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetResolutionText(const FIntPoint& Resolution, FText& Text);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void OnRefresh();
    UFUNCTION(BlueprintCallable) void Refresh_Resolution_Combo();  // named "Refresh Resolution Combo"
    UFUNCTION(BlueprintCallable) void Resolution_Changed(FText SelectedItem, TEnumAsByte<ESelectInfo> SelectionType);  // parameters 0x19, named "Resolution Changed"
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Setup();
};
