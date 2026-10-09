// /Script/Icarus.LoadoutRecords
// size 0x10, declared in Icarus/Source/Icarus/PlayerData/PlayerLoadoutData.h

USTRUCT()
struct FLoadoutRecords
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FPlayerLoadoutData> Loadouts;  // 0x0000, size 0x10
};
