// /Script/Icarus.CustomProperties
// size 0x50, declared in Icarus/Source/Icarus/DataStructs/ItemData.h

USTRUCT()
struct FCustomProperties
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FIcarusStatReplicated> StaticWorldStats;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FIcarusStatReplicated> StaticWorldHeldStats;  // 0x0010, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FIcarusStatReplicated> Stats;  // 0x0020, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FAlterationsEnum> Alterations;  // 0x0030, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FLivingItemUpgradeSlot> LivingItemSlots;  // 0x0040, size 0x10
};
