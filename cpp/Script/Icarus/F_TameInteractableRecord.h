// /Script/Icarus.TameInteractableRecord
// size 0x20, declared in Icarus/Source/Icarus/Systems/GameStateRecorder/DeployableRecorderComponent.h

USTRUCT()
struct FTameInteractableRecord
{
    UPROPERTY(SaveGame, BlueprintReadOnly) TArray<int32> WhitelistedActors;  // 0x0008, size 0x10
    UPROPERTY(SaveGame, BlueprintReadOnly) bool bIsWhitelistOnly;  // 0x0018, size 0x1
};
