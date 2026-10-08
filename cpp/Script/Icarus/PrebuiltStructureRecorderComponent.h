// /Script/Icarus.PrebuiltStructureRecorderComponent
// Derives from: UActorStateRecorderComponent > UIcarusStateRecorderComponent > UActorComponent > UObject
// size 0x1E0, declared in Icarus/Source/Icarus/Prebuilt/PrebuiltStructureRecorderComponent.h

UCLASS(Config=Engine)
class UPrebuiltStructureRecorderComponent : public UActorStateRecorderComponent
{
public:
    UPROPERTY(SaveGame) FName PrebuiltStructureName;  // 0x01C0, size 0x8
    UPROPERTY(SaveGame) TArray<FPrebuiltSpawnedActorRecord> RelevantActorRecords;  // 0x01C8, size 0x10
};
