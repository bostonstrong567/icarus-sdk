// /Script/Icarus.InstancedLevelRecorderComponent
// Derives from: UActorStateRecorderComponent > UIcarusStateRecorderComponent > UActorComponent > UObject
// size 0x250, declared in Icarus/Source/Icarus/World/InstancedLevels/InstancedLevelRecorderComponent.h

UCLASS(Config=Engine)
class UInstancedLevelRecorderComponent : public UActorStateRecorderComponent
{
public:
    UPROPERTY(SaveGame) FInstancedLevelSaveDataRecord SaveData;  // 0x01C0, size 0x70
    UPROPERTY(SaveGame) TArray<int32> RetrievableRecorderUIDs;  // 0x0230, size 0x10
    UPROPERTY(SaveGame) TArray<int32> RetrievedRecorderUIDs;  // 0x0240, size 0x10
};
