// /Script/IcarusGenerated.ReqSetResourceSplit
// size 0x38, declared in Icarus/Source/IcarusGenerated/Public/Struct/ReqSetResourceSplit.h

USTRUCT()
struct FReqSetResourceSplit
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString UserID;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ChrSlot;  // 0x0010, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString ProspectID;  // 0x0018, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FCharacterSplit> Split;  // 0x0028, size 0x10
};
