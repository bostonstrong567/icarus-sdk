// /Game/BP/Utilities/WeathermanIngame.WeathermanIngame_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x3E8, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UWeathermanIngame_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* BG;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* BiomeAC;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* BiomeCF;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* BiomeCO;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* BiomeDC;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* BiomeGL;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* BiomeGT;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* BiomeJU;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* BiomeLC;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* BiomeWL;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* Button_Close;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UComboBoxString* ComboBoxString_AtmoSelect;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USlider* SliderAcidRain;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USlider* SliderAsh;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USlider* SliderCloudCoverage;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USlider* SliderDebris;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USlider* SliderEmbers;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USlider* SliderFogDens;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USlider* SliderFogExt;  // 0x02F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USlider* SliderHail;  // 0x0300, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USlider* SliderRadiation;  // 0x0308, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USlider* SliderRain;  // 0x0310, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USlider* SliderSandStorm;  // 0x0318, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USlider* SliderSmoke;  // 0x0320, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USlider* SliderSnow;  // 0x0328, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USlider* SliderSnowStorm;  // 0x0330, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USlider* SliderWhiteout;  // 0x0338, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USlider* SliderWindSpeed;  // 0x0340, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USlider* SliderWindStrength;  // 0x0348, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TextBlock_AcidRain;  // 0x0350, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TextBlock_Ash;  // 0x0358, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TextBlock_CloudPct;  // 0x0360, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TextBlock_DebrisPct;  // 0x0368, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TextBlock_Embers;  // 0x0370, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TextBlock_FogDenPct;  // 0x0378, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TextBlock_FogExtPct;  // 0x0380, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TextBlock_Hail;  // 0x0388, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TextBlock_Radiation;  // 0x0390, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TextBlock_RainPct;  // 0x0398, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TextBlock_SandStmPct;  // 0x03A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TextBlock_Smoke;  // 0x03A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TextBlock_SnowPct;  // 0x03B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TextBlock_SnowStmPct;  // 0x03B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TextBlock_Whiteout;  // 0x03C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TextBlock_WindSpdPct;  // 0x03C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TextBlock_WindStrPct;  // 0x03D0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_AtmosphereController_C* CachedAtmosphere;  // 0x03D8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 CurrRowIndex;  // 0x03E0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 DesiredRowIndex;  // 0x03E4, size 0x4

    UFUNCTION() void BndEvt__Button_2_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    UFUNCTION() void BndEvt__WeathermanIngame_ComboBoxString_AtmoSelect_K2Node_ComponentBoundEvent_11_OnSelectionChangedEvent__DelegateSignature(FString SelectedItem, TEnumAsByte<ESelectInfo> SelectionType);  // parameters 0x11
    UFUNCTION() void BndEvt__WeathermanIngame_ComboBoxString_AtmoSelect_K2Node_ComponentBoundEvent_12_OnOpeningEvent__DelegateSignature();
    UFUNCTION() void ExecuteUbergraph_WeathermanIngame(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
};
