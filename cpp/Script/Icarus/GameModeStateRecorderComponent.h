// /Script/Icarus.GameModeStateRecorderComponent
// Derives from: UActorStateRecorderComponent > UIcarusStateRecorderComponent > UActorComponent > UObject
// size 0x2B0, declared in Icarus/Source/Icarus/Systems/GameStateRecorder/GameModeStateRecorderComponent.h

UCLASS(Config=Engine)
class UGameModeStateRecorderComponent : public UActorStateRecorderComponent
{
public:
    UPROPERTY(EditAnywhere, SaveGame) FGameModeRecord GameModeRecord;  // 0x01C0, size 0x50
    UPROPERTY(EditAnywhere, SaveGame) FSpawnRecord GameModeSpawnRecord;  // 0x0210, size 0x1
    UPROPERTY(EditAnywhere, SaveGame) TMap<FString, int32> PreviouslyAssignedPlayerColors;  // 0x0218, size 0x50
    UPROPERTY(EditAnywhere, SaveGame) int32 PlayerColorIndex;  // 0x0268, size 0x4
    UPROPERTY(EditAnywhere, SaveGame) int32 DynamicQuestSeed;  // 0x026C, size 0x4
    UPROPERTY(EditAnywhere, SaveGame) TArray<FPlayerRewardScheduleRecord> PlayerRewards;  // 0x0270, size 0x10
    UPROPERTY(EditAnywhere, SaveGame) TArray<FMissionHistoryRecord> MissionHistory;  // 0x0280, size 0x10
    UPROPERTY(EditAnywhere, SaveGame) TArray<FStoredPlayerItemsRecord> StoredPlayerItems;  // 0x0290, size 0x10
    UPROPERTY(EditAnywhere, SaveGame) int32 NextMeteorShowerTime;  // 0x02A0, size 0x4
    UPROPERTY(EditAnywhere, SaveGame) int32 Version;  // 0x02A4, size 0x4
};
