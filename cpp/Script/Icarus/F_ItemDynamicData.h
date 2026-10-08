// /Script/Icarus.ItemDynamicData
// size 0x8, declared in Icarus/Source/Icarus/DataStructs/ItemData.h

USTRUCT()
struct FItemDynamicData
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EDynamicItemProperties PropertyType;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Value;  // 0x0004, size 0x4
};
