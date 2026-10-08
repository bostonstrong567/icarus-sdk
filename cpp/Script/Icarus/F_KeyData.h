// /Script/Icarus.KeyData
// size 0x48, declared in Icarus/Source/Icarus/IcarusGenerated/Keys/KeysTable.h

USTRUCT()
struct FKeyData : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FKey Key;  // 0x0018, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText DisplayNameOverride;  // 0x0030, size 0x18
};
