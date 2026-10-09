// /Script/Icarus.NPCNameEntry
// size 0x18, declared in Icarus/Source/Icarus/Settlement/SettlementNPCNames.h

USTRUCT()
struct FNPCNameEntry
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString Name;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ENPCNameGender Gender;  // 0x0010, size 0x1
};
