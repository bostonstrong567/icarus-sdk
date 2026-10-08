// /Script/Icarus.MetaResourceNodeInfo
// size 0x58, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/MetaResourceNodesLibrary.generated.h

USTRUCT()
struct FMetaResourceNodeInfo : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftClassPtr<AResourceDeposit> ResourceBP;  // 0x0018, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FOreDepositRowHandle Resource;  // 0x0040, size 0x18
};
