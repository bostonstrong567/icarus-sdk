// /Game/UI/Settings/UMG_SettingControl_DiscreteRange.UMG_SettingControl_DiscreteRange_C
// Derives from: USettingWidget_DiscreteRange > USettingWidget > UIcarusWidget > UUserWidget > UWidget > UVisual > UObject
// size 0x3E8, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_SettingControl_DiscreteRange_C : public USettingWidget_DiscreteRange
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0390, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* SettingText;  // 0x0398, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USlider* SliderControl;  // 0x03A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UProgressBar* SliderProgress;  // 0x03A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MaxValue;  // 0x03B0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 DecimalPlaces;  // 0x03B4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 CurrentValue;  // 0x03B8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FText> NamedEntries;  // 0x03C0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText PreviousEntry;  // 0x03D0, size 0x18

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Apply();
    UFUNCTION() void BndEvt__SliderControl_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value);  // parameters 0x4
    UFUNCTION() void BndEvt__SliderControl_K2Node_ComponentBoundEvent_3_OnMouseCaptureEndEvent__DelegateSignature();
    UFUNCTION() void ExecuteUbergraph_UMG_SettingControl_DiscreteRange(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetCurrentEntry(FText& Entry);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void GetFocusWidget(bool& bValid, UWidget*& Widget, bool& bThis);  // parameters 0x11
    UFUNCTION() void SetDefault(const FText& Default);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void SetOptions(const TArray<FText>& Options);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void SetValueIndex(int32 Index, bool bForceRefresh);  // parameters 0x5
    UFUNCTION(BlueprintCallable) void UpdateRangeValue();
};
