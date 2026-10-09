// /Script/Icarus.NPCBackgroundList
// size 0x10, declared in Icarus/Source/Icarus/Settlement/SettlementNPCNames.h

USTRUCT()
struct FNPCBackgroundList
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FString> Backgrounds;  // 0x0000, size 0x10
};
