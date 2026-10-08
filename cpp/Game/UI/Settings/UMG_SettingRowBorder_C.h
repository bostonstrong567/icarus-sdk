// /Game/UI/Settings/UMG_SettingRowBorder.UMG_SettingRowBorder_C
// Derives from: USettingRowBorder > UIcarusWidget > UUserWidget > UWidget > UVisual > UObject
// size 0x349, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_SettingRowBorder_C : public USettingRowBorder
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* Border_83;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* DarkTint;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_SettingTooltipHover_C* Help;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* HoverButton;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* NameBorder;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USizeBox* OuterSizeBox;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_SettingTooltipRestart_C* Restart;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNamedSlot* SettingsControlSlot;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* SettingText;  // 0x02E8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText SettingOptionText;  // 0x02F0, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText SettingOptionDescription;  // 0x0308, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SettingControlFill;  // 0x0320, size 0x4
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FSettingOptionHovered SettingOptionHovered;  // 0x0328, size 0x10
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FSettingOptionUnhovered SettingOptionUnhovered;  // 0x0338, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ManualMode;  // 0x0348, size 0x1

    UFUNCTION(BlueprintCallable) void Connect_To_Restart_Events();  // named "Connect To Restart Events"
    UFUNCTION() void ExecuteUbergraph_UMG_SettingRowBorder(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void GetFocusWidget(bool& bValid, UWidget*& Widget, bool& bThis);  // parameters 0x11
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void HideName();
    UFUNCTION(BlueprintCallable) void On_Restart_Requested(FName SettingName);  // parameters 0x8, named "On Restart Requested"
    UFUNCTION(BlueprintCallable) void Post_Setup();  // named "Post Setup"
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void Set_Requirements();  // named "Set Requirements"
    UFUNCTION(BlueprintCallable) void SettingOptionHovered__DelegateSignature(UUMG_SettingRowBorder_C* SettingOption);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SettingOptionUnhovered__DelegateSignature(UUMG_SettingRowBorder_C* SettingOption);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void Setup_Restart_Widget();  // named "Setup Restart Widget"
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
    UFUNCTION(BlueprintCallable) void Update_Enabled_State();  // named "Update Enabled State"
};
