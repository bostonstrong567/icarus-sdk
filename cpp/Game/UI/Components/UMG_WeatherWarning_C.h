// /Game/UI/Components/UMG_WeatherWarning.UMG_WeatherWarning_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x388, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_WeatherWarning_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* FadeOutBanner;  // 0x0268, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* FadeInBanner;  // 0x0270, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* Flash;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* BGBorder;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* BotBorder;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* BotLines;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* Container;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Description;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Frame;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UInvalidationBox* InvalidationBox_0;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* TopBorder;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* TopLines;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* WarningIcon;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* WarningIconFlash;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* WarningTitle;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* WeatherCard;  // 0x02E0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor WarningTitleRed;  // 0x02E8, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor WarningDescriptionRed;  // 0x0310, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor Warning_Title_Orange;  // 0x0338, size 0x28, named "Warning Title Orange"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor WarningDescriptionOrange;  // 0x0360, size 0x28

    UFUNCTION() void ExecuteUbergraph_UMG_WeatherWarning(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Finished_069D5CD545DEF11BEBB16BAC3843D6C6();
    UFUNCTION(BlueprintCallable) void Finished_7BA92EFA48D45D7C185FDFB51C6A9FEE();
    UFUNCTION(BlueprintCallable) void Finished_91F8DE864341FFCE52E84CB5A6C3A465();
    UFUNCTION(BlueprintCallable) void Finished_9AF543A248403E24F17D9F9DA0B67A79();
    UFUNCTION(BlueprintCallable) void Finished_F8766EF443CBD8ADF25A38B6FF1A718C();
    UFUNCTION(BlueprintCallable) void HideWeatherWarning();
    UFUNCTION(BlueprintCallable) void PlayEasyWeatherWarning();
    UFUNCTION(BlueprintCallable) void PlayMediumWeatherWarning();
    UFUNCTION(BlueprintCallable) void PlayShowAnimations();
    UFUNCTION(BlueprintCallable) void ShowWeatherWarning(FText WarningMessage);  // parameters 0x18
};
