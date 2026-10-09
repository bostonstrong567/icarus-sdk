// /Script/Icarus.TemperatureTrigger
// size 0x30, declared in Icarus/Source/Icarus/DataStructs/Modifiers/SurvivalTriggers.h

USTRUCT()
struct FTemperatureTrigger
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FModifierStatesRowHandle Modifier;  // 0x0000, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTagQueriesRowHandle Query;  // 0x0018, size 0x18
};
