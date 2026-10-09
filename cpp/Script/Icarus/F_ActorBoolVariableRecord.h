// /Script/Icarus.ActorBoolVariableRecord
// size 0xC, declared in Icarus/Source/Icarus/Systems/GameStateRecorder/ActorVariableRecords.h

USTRUCT()
struct FActorBoolVariableRecord
{
public:
    UPROPERTY(SaveGame) FName VariableName;  // 0x0000, size 0x8
    UPROPERTY(SaveGame) bool bVariable;  // 0x0008, size 0x1
};
