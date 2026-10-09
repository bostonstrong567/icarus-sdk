// /Script/Icarus.ValidAmmoTypes
// size 0x58, declared in Icarus/Source/Icarus/DataStructs/ValidAmmoTypes.h

USTRUCT()
struct FValidAmmoTypes : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText DisplayName;  // 0x0018, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FItemsStaticRowHandle> AmmoTypes;  // 0x0030, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText Description;  // 0x0040, size 0x18
};
