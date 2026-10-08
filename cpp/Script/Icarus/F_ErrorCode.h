// /Script/Icarus.ErrorCode
// size 0x50, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/ErrorCodesLibrary.generated.h

USTRUCT()
struct FErrorCode : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText Code;  // 0x0018, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText Description;  // 0x0030, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bReportToSentry;  // 0x0048, size 0x1
};
