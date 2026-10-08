// /Script/IcarusGenerated.Dropship
// size 0xE0, declared in Icarus/Source/IcarusGenerated/Public/Struct/Dropship.h

USTRUCT()
struct FDropship
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString Name;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EDropshipType Type;  // 0x0010, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 DropshipID;  // 0x0014, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool InUse;  // 0x0018, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FMetaItem TOP_Part;  // 0x0020, size 0x40
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FMetaItem MID_Part;  // 0x0060, size 0x40
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FMetaItem BTM_Part;  // 0x00A0, size 0x40
};
