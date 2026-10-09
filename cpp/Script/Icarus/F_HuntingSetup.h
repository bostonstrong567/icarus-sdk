// /Script/Icarus.HuntingSetup
// size 0x28, declared in Icarus/Source/Icarus/DataStructs/HuntingSetup.h

USTRUCT()
struct FHuntingSetup : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FHuntingClueSetupRowHandle> HuntingClues;  // 0x0018, size 0x10
};
