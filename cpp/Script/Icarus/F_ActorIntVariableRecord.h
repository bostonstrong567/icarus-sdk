// /Script/Icarus.ActorIntVariableRecord
// size 0xC, declared in Icarus/Source/Icarus/Systems/GameStateRecorder/ActorVariableRecords.h

USTRUCT()
struct FActorIntVariableRecord
{
public:
    UPROPERTY(SaveGame) FName VariableName;  // 0x0000, size 0x8
    UPROPERTY(SaveGame) int32 iVariable;  // 0x0008, size 0x4
};
