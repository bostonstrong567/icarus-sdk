// /Script/IcarusGenerated.ReqUpdateProspect
// size 0x68, declared in Icarus/Source/IcarusGenerated/Public/Struct/ReqUpdateProspect.h

USTRUCT()
struct FReqUpdateProspect
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString ProspectID;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int64 UpdateTime;  // 0x0010, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ElapsedTime;  // 0x0018, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HasProspectBlob;  // 0x001C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FProspectBlob ProspectBlob;  // 0x0020, size 0x40
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsLeavingGame;  // 0x0060, size 0x1
};
