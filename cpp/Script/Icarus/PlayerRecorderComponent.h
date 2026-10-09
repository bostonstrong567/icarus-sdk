// /Script/Icarus.PlayerRecorderComponent
// Derives from: UIcarusStateRecorderComponent > UActorComponent > UObject
// size 0x100, declared in Icarus/Source/Icarus/Systems/GameStateRecorder/PlayerRecorderComponent.h

UCLASS(Config=Engine)
class UPlayerRecorderComponent : public UIcarusStateRecorderComponent
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(EditAnywhere, SaveGame) FPlayerCharacterID PlayerCharacterID;  // 0x00D8, size 0x18
    UPROPERTY(EditAnywhere, SaveGame) int32 AssignedDropshipSpawnUID;  // 0x00F0, size 0x4
    UPROPERTY(EditAnywhere, SaveGame) int32 AssignedDropshipUID;  // 0x00F4, size 0x4
    UPROPERTY(EditAnywhere, SaveGame) int32 AssignedGravestoneUID;  // 0x00F8, size 0x4
    UPROPERTY(EditAnywhere, SaveGame) int32 PlayerRecorderVersion;  // 0x00FC, size 0x4
};
