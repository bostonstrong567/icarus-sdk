// /Script/IcarusGenerated.ReqSyncAccountTalents
// size 0x20, declared in Icarus/Source/IcarusGenerated/Public/Struct/ReqSyncAccountTalents.h

USTRUCT()
struct FReqSyncAccountTalents
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString UserID;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FBackendTalent> Talents;  // 0x0010, size 0x10
};
