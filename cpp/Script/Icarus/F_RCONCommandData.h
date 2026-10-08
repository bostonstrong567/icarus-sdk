// /Script/Icarus.RCONCommandData
// size 0x60, declared in Icarus/Source/Icarus/IcarusGenerated/RCONCommand/RCONCommandTable.h

USTRUCT()
struct FRCONCommandData : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString ConsoleCommand;  // 0x0018, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText Parameters;  // 0x0028, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText Description;  // 0x0040, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bAdminOnly;  // 0x0058, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ERCONCommandContext Context;  // 0x0059, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ERCONCommandPlatformContext PlatformContext;  // 0x005A, size 0x1
};
