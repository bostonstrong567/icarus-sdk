// /Game/UI/HUD/UMG_WeatherEventCard_2.UMG_WeatherEventCard_2_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2C0, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_WeatherEventCard_2_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* CardReveal;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* EventCard;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* ImageBack;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* StormName;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* WeatherDescription;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* WeatherEventImage;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* WeatherEventText;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* WeatherFrame;  // 0x02A0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FWeatherEventsRowHandle CurrentEvent;  // 0x02A8, size 0x18

    UFUNCTION() void ExecuteUbergraph_UMG_WeatherEventCard_2(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void OnAnimationStarted(UWidgetAnimation* Animation);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void UpdateWeatherEvent(FWeatherEventsRowHandle NewEvent);  // parameters 0x18
};
