// /Script/Icarus.PlayerTrackerSaveData
// Derives from: USaveGame > UObject
// size 0xC8, declared in Icarus/Source/Icarus/DataMigrator/DataMigratorAccolades.h

UCLASS()
class UPlayerTrackerSaveData : public USaveGame
{
public:
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) TMap<FPlayerTrackersRowHandle, int32> PlayerTrackers;  // 0x0028, size 0x50
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) TMap<FPlayerTrackersRowHandle, FTrackerTaskListProgress> PlayerTaskListTrackers;  // 0x0078, size 0x50
};
