// /Game/UI/Components/UMG_WeatherForecast.UMG_WeatherForecast_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x36C, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_WeatherForecast_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* ForecastChangeBar;  // 0x0268, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* ForecastChangeFlash;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UInvalidationBox* InvalidationBox_0;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* TodayMask;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USizeBox* WeatherForecastTimeLine;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCanvasPanel* WeatherForecastTimelinePanelBox;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCanvasPanel* WeatherForecastTimelinePanelIcon;  // 0x0298, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FWeatherForecastItem, UUMG_WeatherForecastIcon_C*> ItemIconMap;  // 0x02A0, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 TimelineStartSec;  // 0x02F0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 TimelineEndSec;  // 0x02F4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 NumDaysDisplayed;  // 0x02F8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 TimelineDurationSec;  // 0x02FC, size 0x4
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UWeatherForecastBarComponent* WeatherForecastBarRef;  // 0x0300, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_WeatherController_C* WeatherControllerRef;  // 0x0308, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Initialized;  // 0x0310, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FWeatherForecastItem, UUMG_WeatherForecastBox_C*> ItemBoxMap;  // 0x0318, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Elapsed;  // 0x0368, size 0x4

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Destruct();
    UFUNCTION() void ExecuteUbergraph_UMG_WeatherForecast(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetWeatherForecastSafe();
    UFUNCTION(BlueprintCallable) void IsReady(bool& Ready);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void LowHzTick(float DeltaTime, bool& DoTick);  // parameters 0x5
    UFUNCTION(BlueprintCallable) void OnProspectForecastUpdated(FProspectForecastRowHandle NewForecast);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void OnReBindIcons();
    UFUNCTION(BlueprintCallable) void PositionAndSizeBox(int32 StartTime, int32 EndTime, UUMG_WeatherForecastBox_C* Box);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void PositionIcon(int32 StartTime, int32 EndTime, UUMG_WeatherForecastIcon_C* Icon);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void ProspectForecastUpdated(FProspectForecastRowHandle NewForecast);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void RebindBoxes();
    UFUNCTION(BlueprintCallable) void RebindIcons();
    UFUNCTION(BlueprintCallable) void RefreshTimeOfDay();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
    UFUNCTION(BlueprintCallable) void TickIconsAndBoxes();
};
