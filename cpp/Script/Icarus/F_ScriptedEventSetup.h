// /Script/Icarus.ScriptedEventSetup
// size 0x70, declared in Icarus/Source/Icarus/Systems/Weather/IcarusWeatherEvent.h

USTRUCT()
struct FScriptedEventSetup
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FScriptedEventsRowHandle ScriptedEvent;  // 0x0000, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 RandomChanceWeight;  // 0x0018, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSet<int32> ActiveWeatherStages;  // 0x0020, size 0x50
};
