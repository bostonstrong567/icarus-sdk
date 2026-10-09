// /Script/Icarus.IcarusTemperatureBar
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2D8, declared in Icarus/Source/Icarus/UI/Elements/IcarusTemperatureBar.h

UCLASS(EditInlineNew)
class UIcarusTemperatureBar : public UUserWidget
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor ColdColour;  // 0x0260, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor HotColour;  // 0x0270, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor NeutralColour;  // 0x0280, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float BlendDegrees;  // 0x0290, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SafeRegionMin;  // 0x0294, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SafeRegionMax;  // 0x0298, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float InternalMin;  // 0x029C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float InternalMax;  // 0x02A0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Insulation;  // 0x02A4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float HeatInsulation;  // 0x02A8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ColdInsulation;  // 0x02AC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ExternalTemp;  // 0x02B0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 CurrentTemp;  // 0x02B4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 PreviousTemp;  // 0x02B8, size 0x4
private:
    float LastColdBarPct;  // 0x02BC, not reflected
    float LastHotBarPct;  // 0x02C0, not reflected
    float LastColdInsulationBarPct;  // 0x02C4, not reflected
    float LastHotInsulationBarPct;  // 0x02C8, not reflected
    float LastInternalTempXPosition;  // 0x02CC, not reflected
    float LastExternalTempXPosition;  // 0x02D0, not reflected
public:
    UFUNCTION(BlueprintImplementableEvent) void CheckAnimations();
    UFUNCTION(BlueprintCallable) FLinearColor GetCurrentTemperatureColour();  // parameters 0x10
    UFUNCTION(BlueprintCallable) void UpdatePercentageBars(UProgressBar* ColdBar, UProgressBar* HotBar, UProgressBar* ColdInsulationBar, UProgressBar* HotInsulationBar);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void UpdateTempIndicators(UWidget* InternalTempIndicator, UWidget* ExternalTempIndicator, float TemperatureBarWidth);  // parameters 0x14
    UFUNCTION(BlueprintImplementableEvent) void UpdateTemperatureColour(FLinearColor NewColour);  // parameters 0x10
};
