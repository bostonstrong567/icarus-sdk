// /Script/Icarus.FLODActorRecordInstance
// size 0x1C, declared in Icarus/Source/Icarus/Systems/FLOD/FLODActorComponent.h

USTRUCT()
struct FFLODActorRecordInstance : public FFLODInstanceID
{
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 LevelIndex;  // 0x0010, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FName TileName;  // 0x0014, size 0x8
};
