// /Game/UI/HUD/UMG_TempAndHome.UMG_TempAndHome_C
// Derives from: UIcarusTemperatureBar > UUserWidget > UWidget > UVisual > UObject
// size 0x3A8, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_TempAndHome_C : public UIcarusTemperatureBar
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02D8, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* CoolingDown;  // 0x02E0, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* WarmingUp;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* c1;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* c2;  // 0x02F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* c3;  // 0x0300, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UProgressBar* ColdAreaBar;  // 0x0308, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UProgressBar* ColdInsulationBar;  // 0x0310, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* Cooling;  // 0x0318, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* ExternalTempIndicator;  // 0x0320, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UProgressBar* HotAreaBar;  // 0x0328, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UProgressBar* HotInsulationBar;  // 0x0330, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* InternalTempIndicator;  // 0x0338, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* TemperatureBorder;  // 0x0340, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* w1;  // 0x0348, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* w2;  // 0x0350, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* w3;  // 0x0358, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* Warming;  // 0x0360, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 CurrentTemp_0;  // 0x0368, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Initialised;  // 0x036C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UCurveLinearColor* TemperatureCurve;  // 0x0370, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxInternalTemp;  // 0x0378, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MinInternalTemp;  // 0x037C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle AnimationTimer;  // 0x0380, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Modified;  // 0x0388, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 PreviousTemp_0;  // 0x038C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SafeRegionMin_0;  // 0x0390, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SafeRegionMax_0;  // 0x0394, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ExternalTemp_0;  // 0x0398, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Insulation_0;  // 0x039C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Heat_Insulation;  // 0x03A0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Cold_Insulation;  // 0x03A4, size 0x4

    UFUNCTION(BlueprintImplementableEvent) void CheckAnimations();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_TempAndHome(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Stop_Animations();  // named "Stop Animations"
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
    UFUNCTION(BlueprintCallable) void UpdateTempIndicator();
    UFUNCTION(BlueprintImplementableEvent) void UpdateTemperatureColour(FLinearColor NewColour);  // parameters 0x10
};
