// /Script/Icarus.WorldTalentManagerRecorderComponent
// Derives from: UActorStateRecorderComponent > UIcarusStateRecorderComponent > UActorComponent > UObject
// size 0x1D0, declared in Icarus/Source/Icarus/Systems/WorldTalents/WorldTalentManagerRecorderComponent.h

UCLASS(Config=Engine)
class UWorldTalentManagerRecorderComponent : public UActorStateRecorderComponent
{
public:
    UPROPERTY(SaveGame) TArray<FWorldTalentRecord> WorldTalentRecords;  // 0x01C0, size 0x10
};
