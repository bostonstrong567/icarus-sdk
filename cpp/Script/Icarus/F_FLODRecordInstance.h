// /Script/Icarus.FLODRecordInstance
// size 0x20, declared in Icarus/Source/Icarus/Systems/FLOD/FLODRecord.h

USTRUCT()
struct FFLODRecordInstance : public FFastArraySerializerItem
{
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 InstanceIndex;  // 0x000C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 LevelIndex;  // 0x0010, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TWeakObjectPtr<AActor> Actor;  // 0x0014, size 0x8
    UPROPERTY(EditAnywhere) uint32 AddedFrame;  // 0x001C, size 0x4
};
