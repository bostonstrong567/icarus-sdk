// /Script/Icarus.ActorNameVariableRecord
// size 0x10, declared in Icarus/Source/Icarus/Systems/GameStateRecorder/ActorVariableRecords.h

USTRUCT()
struct FActorNameVariableRecord
{
public:
    UPROPERTY(SaveGame) FName VariableName;  // 0x0000, size 0x8
    UPROPERTY(SaveGame) FName Variable;  // 0x0008, size 0x8
};
