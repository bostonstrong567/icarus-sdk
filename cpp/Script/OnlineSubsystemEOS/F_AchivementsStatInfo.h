// /Script/OnlineSubsystemEOS.AchivementsStatInfo
// size 0x18, declared in Icarus/Plugins/OnlineSubsystemEOS/Source/OnlineSubsystemEOS/Public/OnlineSubsystemEOSTypes.h

USTRUCT()
struct FAchivementsStatInfo
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString StatName;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ThresholdValue;  // 0x0010, size 0x4
};
