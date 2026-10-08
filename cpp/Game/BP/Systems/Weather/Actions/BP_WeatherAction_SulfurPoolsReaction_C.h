// /Game/BP/Systems/Weather/Actions/BP_WeatherAction_SulfurPoolsReaction.BP_WeatherAction_SulfurPoolsReaction_C
// Derives from: UBP_WeatherAction_Base_C > UIcarusWeatherAction > UActorComponent > UObject
// size 0x8D8, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_WeatherAction_SulfurPoolsReaction_C : public UBP_WeatherAction_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x08D0, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_WeatherAction_SulfurPoolsReaction(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void WeatherActionEnded(AWeatherController* WeatherController);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void WeatherActionStarted(AWeatherController* WeatherController);  // parameters 0x8
};
