// /Game/BP/Tools/CheatFunctions/Widgets/WeatherRow.WeatherRow_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2A0, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UWeatherRow_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced) UTextBlock* TextBlock_56;  // 0x0268, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText WeatherEventName;  // 0x0270, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FWeatherEventsRowHandle WeatherEvent;  // 0x0288, size 0x18

    UFUNCTION(BlueprintCallable) void AddWeather(FName AddWeatherEvent);  // parameters 0x8
    UFUNCTION() void ExecuteUbergraph_WeatherRow(int32 EntryPoint);  // parameters 0x4
};
