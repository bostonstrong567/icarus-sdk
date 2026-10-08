// /Script/Icarus.ItemReward
// size 0x24, declared in Icarus/Source/Icarus/DataStructs/ItemReward.h

USTRUCT()
struct FItemReward
{
    UPROPERTY(EditAnywhere) FItemTemplateRowHandle ItemTemplate;  // 0x0000, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bUseRandomStackCount;  // 0x0018, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MinRandomStackCount;  // 0x001C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MaxRandomStackCount;  // 0x0020, size 0x4
};
