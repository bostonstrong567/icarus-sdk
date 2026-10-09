// /Script/Icarus.DeployableRecord
// size 0x20, declared in Icarus/Source/Icarus/Systems/GameStateRecorder/DeployableRecorderComponent.h

USTRUCT()
struct FDeployableRecord
{
public:
    UPROPERTY(SaveGame, BlueprintReadOnly) FString FoundationActorClassName;  // 0x0008, size 0x10
    UPROPERTY(SaveGame, BlueprintReadOnly) int32 FoundationActorIcarusUID;  // 0x0018, size 0x4
};
