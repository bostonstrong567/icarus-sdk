// /Script/IcarusGenerated.MaintenanceStatus
// size 0x20, declared in Icarus/Source/IcarusGenerated/Public/Struct/MaintenanceStatus.h

USTRUCT()
struct FMaintenanceStatus
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsMaintenance;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 StartTime;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 EndTime;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString Message;  // 0x0010, size 0x10
};
