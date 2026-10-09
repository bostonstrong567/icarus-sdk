// /Script/Icarus.FLODRecordInstanceChangeDetails
// size 0x10, declared in Icarus/Source/Icarus/Systems/FLOD/FLODRecord.h

USTRUCT()
struct FFLODRecordInstanceChangeDetails
{
public:
    UPROPERTY(EditAnywhere) int32 LevelIndex;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere) TWeakObjectPtr<AActor> Actor;  // 0x0004, size 0x8
    UPROPERTY(EditAnywhere) uint32 AddedFrame;  // 0x000C, size 0x4
};
