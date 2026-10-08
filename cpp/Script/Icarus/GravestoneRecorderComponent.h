// /Script/Icarus.GravestoneRecorderComponent
// Derives from: UItemStateRecorderComponent > UActorStateRecorderComponent > UIcarusStateRecorderComponent > UActorComponent > UObject
// size 0x3B0, declared in Icarus/Source/Icarus/Systems/GameStateRecorder/GravestoneRecorderComponent.h

UCLASS(Config=Engine)
class UGravestoneRecorderComponent : public UItemStateRecorderComponent
{
public:
    UPROPERTY(EditAnywhere, SaveGame) FPlayerCharacterID AssignedPlayerCharacterID;  // 0x0250, size 0x18
    UPROPERTY(EditAnywhere, SaveGame) FGravestoneDataRecord GravestoneData;  // 0x0268, size 0x128
    UPROPERTY(EditAnywhere, SaveGame) TArray<FName> PlayerArmour;  // 0x0390, size 0x10
    UPROPERTY(EditAnywhere, SaveGame) int32 GravestoneRecorderVersion;  // 0x03A0, size 0x4
};
