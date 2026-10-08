// /Script/Icarus.RepGraphClassSettings
// size 0x40, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/RepGraphClassSettingsLibrary.generated.h

USTRUCT()
struct FRepGraphClassSettings : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere) FString Description;  // 0x0018, size 0x10
    UPROPERTY(EditAnywhere) float DistancePriorityScale;  // 0x0028, size 0x4
    UPROPERTY(EditAnywhere) float StarvationPriorityScale;  // 0x002C, size 0x4
    UPROPERTY(EditAnywhere) float AccumulatedNetPriorityBias;  // 0x0030, size 0x4
    UPROPERTY(EditAnywhere) int32 ReplicationPeriodFrame;  // 0x0034, size 0x4
    UPROPERTY(EditAnywhere) int32 ActorChannelFrameTimeout;  // 0x0038, size 0x4
    UPROPERTY(EditAnywhere) float NetCullDistance;  // 0x003C, size 0x4
};
