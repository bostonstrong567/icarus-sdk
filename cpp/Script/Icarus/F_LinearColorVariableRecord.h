// /Script/Icarus.LinearColorVariableRecord
// size 0x18, declared in Icarus/Source/Icarus/Systems/GameStateRecorder/ActorVariableRecords.h

USTRUCT()
struct FLinearColorVariableRecord
{
    UPROPERTY(SaveGame) FName VariableName;  // 0x0000, size 0x8
    UPROPERTY(SaveGame) FLinearColor Variable;  // 0x0008, size 0x10
};
