// /Game/UI/Components/UMG_WeatherEventTimeline.UMG_WeatherEventTimeline_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x3BC, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_WeatherEventTimeline_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* FadeIn;  // 0x0268, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* Flashing;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* BackgroundImage;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* StormIcon;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* StormName;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USizeBox* Timeline;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCanvasPanel* TimelinePanel;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* WeatherTier;  // 0x02A0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float StormTotalLength;  // 0x02A8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float StormTimeRemaining;  // 0x02AC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 CurrentActionIndex;  // 0x02B0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CurrentActionTimeRemaining;  // 0x02B4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TimelineLengthInPixels;  // 0x02B8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TimelineLengthInTime;  // 0x02BC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FActiveWeatherInfo CurrentWeatherInfo;  // 0x02C0, size 0x48
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FActiveWeatherInfo LastProcessedWeatherInfo;  // 0x0308, size 0x48
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<UBP_WeatherAction_Base_C*, UUMG_WeatherEventTimelineIcon_C*> ActionToIconMap;  // 0x0350, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText AlternatingStormNameText;  // 0x03A0, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TickAccumulation;  // 0x03B8, size 0x4

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_WeatherEventTimeline(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void InitializeStorm(int32 Tier);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ShowStormNameText(float Show_length);  // parameters 0x4
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
    UFUNCTION(BlueprintCallable) void UpdateActionIcons();
    UFUNCTION(BlueprintCallable) void UpdateStormData();
    UFUNCTION(BlueprintCallable) void UpdateStormIcon(int32 Tier);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void WeatherActionToTimelineSpace(int32 ActionIdex, float& TimelineLocation);  // parameters 0x8
};
