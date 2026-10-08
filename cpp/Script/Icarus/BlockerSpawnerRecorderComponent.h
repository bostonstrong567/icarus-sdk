// /Script/Icarus.BlockerSpawnerRecorderComponent
// Derives from: UActorStateRecorderComponent > UIcarusStateRecorderComponent > UActorComponent > UObject
// size 0x1F0, declared in Icarus/Source/Icarus/Systems/Blockers/BlockerSpawnerRecorderComponent.h

UCLASS(Config=Engine)
class UBlockerSpawnerRecorderComponent : public UActorStateRecorderComponent
{
public:
    UPROPERTY(SaveGame) bool bHasSpawned;  // 0x01C0, size 0x1
    UPROPERTY(SaveGame) FPersistentBlockerRecord PersistentBlockerRecord;  // 0x01C8, size 0x20
};
