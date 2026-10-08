// /Game/UI/HUD/UMG_MissionTimer.UMG_MissionTimer_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x320, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_MissionTimer_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* WarningCriticalTime;  // 0x0268, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* WarningLowTime;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Days;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Hours;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* MainBorder;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* MediumLowTime;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Mins;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Return;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Seconds;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TimeCritical;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UInvalidationBox* TimerTextInvalidationBox;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TimeRunningLow;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UInvalidationBox* TitleInvalidationBox;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UInvalidationBox* WarningInvalidationBox;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* WarningSymbols;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* WarningSymbols2;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* WarningText;  // 0x02E8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor Green;  // 0x02F0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor Orange;  // 0x0300, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UCurveLinearColor* ColorCurve;  // 0x0310, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool RecheckVisibility;  // 0x0318, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 LastUpdateValue;  // 0x031C, size 0x4

    UFUNCTION() void ExecuteUbergraph_UMG_MissionTimer(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetTime(TArray<FText>& Time);  // parameters 0x10
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
    UFUNCTION(BlueprintCallable) void UpdateVisibility();
};
