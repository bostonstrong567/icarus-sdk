// /Script/Icarus.RocketRecorderComponent
// Derives from: UActorStateRecorderComponent > UIcarusStateRecorderComponent > UActorComponent > UObject
// size 0x200, declared in Icarus/Source/Icarus/Systems/GameStateRecorder/RocketRecorderComponent.h

UCLASS(Config=Engine)
class URocketRecorderComponent : public UActorStateRecorderComponent
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(EditAnywhere, SaveGame) FPlayerCharacterID AssignedPlayerCharacterID;  // 0x01C0, size 0x18
    UPROPERTY(EditAnywhere, SaveGame) FVector SpawnLocation;  // 0x01D8, size 0xC
    UPROPERTY(EditAnywhere, SaveGame) FVector DescentOrigin;  // 0x01E4, size 0xC
    UPROPERTY(EditAnywhere, SaveGame) bool DropshipPositionsSet;  // 0x01F0, size 0x1
    UPROPERTY(EditAnywhere, SaveGame) bool PlayerHasLeft;  // 0x01F1, size 0x1
    UPROPERTY(EditAnywhere, SaveGame) bool bStoredLoadout;  // 0x01F2, size 0x1
    UPROPERTY(EditAnywhere, SaveGame) ERocketState RocketState;  // 0x01F3, size 0x1
    UPROPERTY(EditAnywhere, SaveGame) int32 RocketRecorderVersion;  // 0x01F4, size 0x4
};
