// /Script/Icarus.BedRecorderComponent
// Derives from: UDeployableRecorderComponent > UItemStateRecorderComponent > UActorStateRecorderComponent > UIcarusStateRecorderComponent > UActorComponent > UObject
// size 0x2A0, declared in Icarus/Source/Icarus/Systems/GameStateRecorder/BedRecorderComponent.h

UCLASS(Config=Engine)
class UBedRecorderComponent : public UDeployableRecorderComponent
{
public:
    UPROPERTY(SaveGame) TArray<FString> PlayerUIDArrayRecord;  // 0x0290, size 0x10
};
