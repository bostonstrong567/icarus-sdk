// /Script/IcarusGenerated.ReqUpdateTrackedStats
// size 0x38, declared in Icarus/Source/IcarusGenerated/Public/Struct/ReqUpdateTrackedStats.h

USTRUCT()
struct FReqUpdateTrackedStats
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString UserID;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ChrSlot;  // 0x0010, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString ProspectID;  // 0x0018, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FTrackedStat> TrackedStats;  // 0x0028, size 0x10
};
