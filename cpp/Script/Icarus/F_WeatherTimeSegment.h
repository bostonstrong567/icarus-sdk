// /Script/Icarus.WeatherTimeSegment
// size 0x28, declared in Icarus/Source/Icarus/Systems/Weather/WeatherTimeSlotScheduler.h

USTRUCT()
struct FWeatherTimeSegment
{

    // Not reflected:
    int32 StartSlot;  // 0x0000
    int32 EndSlot;  // 0x0004
    int32 SlotDuration;  // 0x0008
    FWeatherEventsRowHandle Event;  // 0x000C
    int32 Time;  // 0x0024
};
