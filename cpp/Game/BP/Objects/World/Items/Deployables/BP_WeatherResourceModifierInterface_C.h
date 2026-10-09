// /Game/BP/Objects/World/Items/Deployables/BP_WeatherResourceModifierInterface.BP_WeatherResourceModifierInterface_C
// Derives from: UInterface > UObject
// size 0x28, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_WeatherResourceModifierInterface_C : public UInterface
{
public:
    UFUNCTION(BlueprintCallable) void ClearWeatherResourceModifier();
    UFUNCTION(BlueprintCallable) void GetWeatherResourceModifierStrengthAndType(int32 BaseModifierEffectiveness, FModifierStatesRowHandle Modifier, int32& PowerModifierEffectiveness, int32& WaterModifierEffectiveness);  // parameters 0x24
};
