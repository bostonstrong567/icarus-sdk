// /Game/BP/Tools/WorldTool/UMG_MultiToggle.UMG_MultiToggle_C
// Derives from: UUMG_SettingControlBase_C > UIcarusWidget > UUserWidget > UWidget > UVisual > UObject
// size 0x304, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_MultiToggle_C : public UUMG_SettingControlBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* ToggleContainer;  // 0x02A0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FText> ToggleOptions;  // 0x02A8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FText> OptionToolTips;  // 0x02B8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 DefaultToggleIndex;  // 0x02C8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSubclassOf<UUMG_ToggleButtonBase_C> ToggleWidgetClass;  // 0x02D0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ActiveToggleIndex;  // 0x02D8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FMultiToggleStateChanged MultiToggleStateChanged;  // 0x02E0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FToggleClicked ToggleClicked;  // 0x02F0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float WidthOverride;  // 0x0300, size 0x4

    UFUNCTION(BlueprintCallable) void ChangeToggleName(FText Name, int32 Index);  // parameters 0x1C
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION(BlueprintCallable) void ConstructToggles();
    UFUNCTION() void ExecuteUbergraph_UMG_MultiToggle(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void GetFocusWidget(bool& bValid, UWidget*& Widget, bool& bThis);  // parameters 0x11
    UFUNCTION(BlueprintCallable) void MultiToggleStateChanged__DelegateSignature(int32 PreviousToggleIndex, int32 CurrentToggleIndex);  // parameters 0x8
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetToggleOption(int32 ToggleIndex);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ToggleButtonClicked(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void ToggleButtonToggled(UUMG_ToggleButtonBase_C* ToggleButton);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void ToggleClicked__DelegateSignature(int32 ToggleIndex, bool IsActive);  // parameters 0x5
};
