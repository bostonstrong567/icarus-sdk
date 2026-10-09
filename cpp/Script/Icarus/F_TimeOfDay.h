// /Script/Icarus.TimeOfDay
// size 0x20, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/TimeOfDayLibrary.generated.h

USTRUCT()
struct FTimeOfDay : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 StartingHour;  // 0x0018, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 EndingHour;  // 0x001C, size 0x4
};
