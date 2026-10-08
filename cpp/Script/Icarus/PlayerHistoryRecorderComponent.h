// /Script/Icarus.PlayerHistoryRecorderComponent
// Derives from: UActorStateRecorderComponent > UIcarusStateRecorderComponent > UActorComponent > UObject
// size 0x1D0, declared in Icarus/Source/Icarus/Systems/GameStateRecorder/PlayerHistoryRecorderComponent.h

UCLASS(Config=Engine)
class UPlayerHistoryRecorderComponent : public UActorStateRecorderComponent
{
public:
    UPROPERTY(SaveGame) TArray<FPlayerHistoryEntryRecord> SavedHistoryData;  // 0x01C0, size 0x10
};
