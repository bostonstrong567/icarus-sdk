// /Script/Icarus.SettlementTaskRecord
// size 0x60, declared in Icarus/Source/Icarus/Settlement/SettlementRecorderComponent.h

USTRUCT()
struct FSettlementTaskRecord
{
public:
    UPROPERTY(SaveGame) FGuid TaskId;  // 0x0000, size 0x10
    UPROPERTY(SaveGame) FName TaskTypeRow;  // 0x0010, size 0x8
    UPROPERTY(SaveGame) float Progress;  // 0x0018, size 0x4
    UPROPERTY(SaveGame) uint8 Priority;  // 0x001C, size 0x1
    UPROPERTY(SaveGame) FGuid AssignedNpcId;  // 0x0020, size 0x10
    UPROPERTY(SaveGame) int32 TargetUID;  // 0x0030, size 0x4
    UPROPERTY(SaveGame) FString TargetClassName;  // 0x0038, size 0x10
    UPROPERTY(SaveGame) int32 SourceUID;  // 0x0048, size 0x4
    UPROPERTY(SaveGame) FString SourceClassName;  // 0x0050, size 0x10
};
