// /Game/UI/Components/UMG_WeatherEventTimelineIcon.UMG_WeatherEventTimelineIcon_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x290, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_WeatherEventTimelineIcon_C : public UUserWidget
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* WeatherActionImage;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* WeatherTailBar;  // 0x0268, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UUMG_WeatherEventTimeline_C* Timeline;  // 0x0270, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FWeatherActionsRowHandle WeatherActionRowHandle;  // 0x0278, size 0x18

    UFUNCTION(BlueprintCallable) void Initialise(FWeatherActionsRowHandle WeatherAction, float Lifetime);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) void SetupIcon();
};
