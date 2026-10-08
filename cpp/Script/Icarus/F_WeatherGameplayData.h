// /Script/Icarus.WeatherGameplayData
// size 0x40, declared in Icarus/Source/Icarus/Systems/Weather/WeatherManagerComponent.h

USTRUCT()
struct FWeatherGameplayData
{
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FBiomesEnum Biome;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector WindDirection;  // 0x0010, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float WindForce;  // 0x001C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 TemperatureModifier;  // 0x0020, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText CurrentWeatherWarningMessage;  // 0x0028, size 0x18
};
