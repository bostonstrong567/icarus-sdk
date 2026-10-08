// /Script/IcarusGenerated.ReqGetProspect
// size 0x30, declared in Icarus/Source/IcarusGenerated/Public/Struct/ReqGetProspect.h

USTRUCT()
struct FReqGetProspect
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString UserID;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ChrSlot;  // 0x0010, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString ProspectID;  // 0x0018, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HasProspectBlob;  // 0x0028, size 0x1
};
