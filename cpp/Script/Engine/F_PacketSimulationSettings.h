// /Script/Engine.PacketSimulationSettings
// size 0x34, declared in Engine/Source/Runtime/Engine/Classes/Engine/NetDriver.h

USTRUCT()
struct FPacketSimulationSettings
{
    UPROPERTY(EditAnywhere) int32 PktLoss;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere) int32 PktLossMaxSize;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere) int32 PktLossMinSize;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere) int32 PktOrder;  // 0x000C, size 0x4
    UPROPERTY(EditAnywhere) int32 PktDup;  // 0x0010, size 0x4
    UPROPERTY(EditAnywhere) int32 PktLag;  // 0x0014, size 0x4
    UPROPERTY(EditAnywhere) int32 PktLagVariance;  // 0x0018, size 0x4
    UPROPERTY(EditAnywhere) int32 PktLagMin;  // 0x001C, size 0x4
    UPROPERTY(EditAnywhere) int32 PktLagMax;  // 0x0020, size 0x4
    UPROPERTY(EditAnywhere) int32 PktIncomingLagMin;  // 0x0024, size 0x4
    UPROPERTY(EditAnywhere) int32 PktIncomingLagMax;  // 0x0028, size 0x4
    UPROPERTY(EditAnywhere) int32 PktIncomingLoss;  // 0x002C, size 0x4
    UPROPERTY(EditAnywhere) int32 PktJitter;  // 0x0030, size 0x4
};
