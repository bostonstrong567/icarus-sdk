// /Script/Icarus.SignRecorderComponent
// Derives from: UDeployableRecorderComponent > UItemStateRecorderComponent > UActorStateRecorderComponent > UIcarusStateRecorderComponent > UActorComponent > UObject
// size 0x2C0, declared in Icarus/Source/Icarus/Systems/GameStateRecorder/SignRecorderComponent.h

UCLASS(Config=Engine)
class USignRecorderComponent : public UDeployableRecorderComponent
{
public:
    UPROPERTY(SaveGame) FText SignTextRecord;  // 0x0290, size 0x18
    UPROPERTY(SaveGame) FLinearColor SignFontColorRecord;  // 0x02A8, size 0x10
    UPROPERTY(SaveGame) FName SignIconRecord;  // 0x02B8, size 0x8
};
