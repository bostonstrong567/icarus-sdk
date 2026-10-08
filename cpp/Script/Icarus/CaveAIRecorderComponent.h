// /Script/Icarus.CaveAIRecorderComponent
// Derives from: UActorStateRecorderComponent > UIcarusStateRecorderComponent > UActorComponent > UObject
// size 0x1D0, declared in Icarus/Source/Icarus/Systems/GameStateRecorder/CaveAIRecorderComponent.h

UCLASS(Config=Engine)
class UCaveAIRecorderComponent : public UActorStateRecorderComponent
{
public:
    UPROPERTY(SaveGame) TArray<FCaveActorSpawnTimeStamp> SaveData;  // 0x01C0, size 0x10
};
