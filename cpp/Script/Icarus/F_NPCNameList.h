// /Script/Icarus.NPCNameList
// size 0x30, declared in Icarus/Source/Icarus/Settlement/SettlementNPCNames.h

USTRUCT()
struct FNPCNameList
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FNPCNameEntry> FullNames;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FNPCNameEntry> FirstNames;  // 0x0010, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FNPCNameEntry> LastNames;  // 0x0020, size 0x10
};
