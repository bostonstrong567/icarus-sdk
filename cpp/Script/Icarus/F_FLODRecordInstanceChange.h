// /Script/Icarus.FLODRecordInstanceChange
// size 0x2C, declared in Icarus/Source/Icarus/Systems/FLOD/FLODRecord.h

USTRUCT()
struct FFLODRecordInstanceChange
{
public:
    UPROPERTY(EditAnywhere) int32 InstanceIndex;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere) FFLODRecordInstanceChangeDetails From;  // 0x0004, size 0x10
    UPROPERTY(EditAnywhere) FFLODRecordInstanceChangeDetails To;  // 0x0014, size 0x10
    UPROPERTY(EditAnywhere) int32 TransitionFrame;  // 0x0024, size 0x4
    UPROPERTY(EditAnywhere) int32 TransitionFinishFrame;  // 0x0028, size 0x4
};
