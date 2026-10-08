// /Script/Icarus.ActorTextVariableRecord
// size 0x20, declared in Icarus/Source/Icarus/Systems/GameStateRecorder/ActorVariableRecords.h

USTRUCT()
struct FActorTextVariableRecord
{
    UPROPERTY(SaveGame) FName VariableName;  // 0x0000, size 0x8
    UPROPERTY(SaveGame) FText Variable;  // 0x0008, size 0x18
};
