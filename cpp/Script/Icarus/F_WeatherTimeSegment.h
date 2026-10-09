// /Script/Icarus.WeatherTimeSegment
// size 0x28, declared in Icarus/Source/Icarus/Systems/Weather/WeatherTimeSlotScheduler.h

USTRUCT()
struct FWeatherTimeSegment
{
public:
    int32 StartSlot;  // 0x0000, not reflected
    int32 EndSlot;  // 0x0004, not reflected
    int32 SlotDuration;  // 0x0008, not reflected
    FWeatherEventsRowHandle Event;  // 0x000C, not reflected
    int32 Time;  // 0x0024, not reflected
};
