// /Script/OnlineSubsystemIcarus.Threshold
// size 0xC, declared in Icarus/Plugins/OnlineSubsystemIcarus/Source/OnlineSubsystemIcarus/Public/OnlineSubsystemIcarusTypes.h

USTRUCT()
struct FThreshold
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EThresholdType ThresholdType;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MinScore;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxScore;  // 0x0008, size 0x4
};
