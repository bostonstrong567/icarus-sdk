// /Script/Icarus.IcarusWeatherPoolData
// size 0x38, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/WeatherPoolsLibrary.generated.h

USTRUCT()
struct FIcarusWeatherPoolData : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FWeatherPoolEntry> WeatherEvents;  // 0x0018, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TArray<FWeatherPoolEntryMeta> ContainedTiers;  // 0x0028, size 0x10
};
