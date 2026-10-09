// /Script/IcarusGenerated.ResLobbyStats
// size 0x30, declared in Icarus/Source/IcarusGenerated/Public/Struct/ResLobbyStats.h

USTRUCT()
struct FResLobbyStats
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Success;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 QueueSize;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MessagesReadyRate;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FMaintenanceStatus Maintenance;  // 0x0010, size 0x20
};
