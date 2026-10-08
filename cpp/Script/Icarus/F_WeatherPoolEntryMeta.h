// /Script/Icarus.WeatherPoolEntryMeta
// size 0x20, declared in Icarus/Source/Icarus/Systems/Weather/IcarusWeatherPoolData.h

USTRUCT()
struct FWeatherPoolEntryMeta
{
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 Tier;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 NumEvents;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 MinEventDurationMinutes;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TArray<FString> BiomesGroupsIncluded;  // 0x0010, size 0x10
};
