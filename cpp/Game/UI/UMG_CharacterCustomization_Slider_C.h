// /Game/UI/UMG_CharacterCustomization_Slider.UMG_CharacterCustomization_Slider_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2A4, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_CharacterCustomization_Slider_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USlider* Slider_98;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Text_SettingName;  // 0x0270, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText SettingName;  // 0x0278, size 0x18
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FSliderValueChanged SliderValueChanged;  // 0x0290, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Value;  // 0x02A0, size 0x4

    UFUNCTION() void BndEvt__UMG_CharacterCustomization_Slider_Slider_98_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value);  // parameters 0x4
    UFUNCTION() void ExecuteUbergraph_UMG_CharacterCustomization_Slider(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SliderValueChanged__DelegateSignature();
    UFUNCTION(BlueprintCallable) void UpdateVisuals();
    UFUNCTION(BlueprintCallable) void VerifySettingsValid();
};
