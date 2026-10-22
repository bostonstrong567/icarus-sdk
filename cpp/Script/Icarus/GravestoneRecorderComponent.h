// /Script/Icarus.GravestoneRecorderComponent
// Derives from: UItemStateRecorderComponent > UActorStateRecorderComponent > UIcarusStateRecorderComponent > UActorComponent > UObject
// size 0x450, declared in Icarus/Source/Icarus/Systems/GameStateRecorder/GravestoneRecorderComponent.h

UCLASS(Config=Engine)
class UGravestoneRecorderComponent : public UItemStateRecorderComponent
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(EditAnywhere, SaveGame) FPlayerCharacterID AssignedPlayerCharacterID;  // 0x0250, size 0x18
    UPROPERTY(EditAnywhere, SaveGame) FGravestoneDataRecord GravestoneData;  // 0x0268, size 0x1D0
    UPROPERTY(EditAnywhere, SaveGame) TArray<FName> PlayerArmour;  // 0x0438, size 0x10
    UPROPERTY(EditAnywhere, SaveGame) int32 GravestoneRecorderVersion;  // 0x0448, size 0x4
};
