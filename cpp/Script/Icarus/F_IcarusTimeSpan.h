// /Script/Icarus.IcarusTimeSpan
// size 0x20, declared in Icarus/Source/Icarus/Systems/Prospects/IcarusTimeSpan.h

USTRUCT()
struct FIcarusTimeSpan
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FIcarusIntRange Days;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FIcarusIntRange Hours;  // 0x0008, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FIcarusIntRange Mins;  // 0x0010, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FIcarusIntRange Seconds;  // 0x0018, size 0x8
};
