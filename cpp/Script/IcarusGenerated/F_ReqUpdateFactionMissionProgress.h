// /Script/IcarusGenerated.ReqUpdateFactionMissionProgress
// size 0x40, declared in Icarus/Source/IcarusGenerated/Public/Struct/ReqUpdateFactionMissionProgress.h

USTRUCT()
struct FReqUpdateFactionMissionProgress
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString UserID;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ChrSlot;  // 0x0010, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString ProspectID;  // 0x0018, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FActiveFactionMission MissionProgress;  // 0x0028, size 0x18
};
