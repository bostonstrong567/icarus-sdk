// /Script/Icarus.IcarusWeatherEvent
// size 0xA8, declared in Icarus/Source/Icarus/Systems/Weather/IcarusWeatherEvent.h

USTRUCT()
struct FIcarusWeatherEvent : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EIcarusWeatherDifficulty Difficulty;  // 0x0018, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Tier;  // 0x001C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 DurationSeconds;  // 0x0020, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 DurationMinutes;  // 0x0024, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FWeatherBiomeGroupsRowHandle> BiomeGroups;  // 0x0028, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UTexture2D* WeatherImage;  // 0x0038, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText WeatherName;  // 0x0040, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText WeatherDescription;  // 0x0058, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FWeatherAction> WeatherActions;  // 0x0070, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FWeatherMusicCue> MusicCues;  // 0x0080, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FScriptedEventSetup> ScriptedEventConfig;  // 0x0090, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ChanceToActivateScriptedEvent;  // 0x00A0, size 0x4
};
