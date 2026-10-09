// /Script/Icarus.ItemData
// size 0x1F0, declared in Icarus/Source/Icarus/DataStructs/ItemData.h

USTRUCT()
struct FItemData : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemsStaticRowHandle ItemStaticData;  // 0x0018, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FItemDynamicData> ItemDynamicData;  // 0x0030, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FIcarusStatReplicated> ItemCustomStats;  // 0x0040, size 0x10
    UPROPERTY() FCustomProperties CustomProperties;  // 0x0050, size 0x50
    UPROPERTY(Transient) FCachedItemStatContainer CachedStats;  // 0x00A0, size 0x110
    UPROPERTY(Transient) bool bIsItemInstance;  // 0x01B0, size 0x1
    UPROPERTY() FString DatabaseGUID;  // 0x01B8, size 0x10
    UPROPERTY() int32 ItemOwnerLookupId;  // 0x01C8, size 0x4
    UPROPERTY() FGameplayTagContainer RuntimeTags;  // 0x01D0, size 0x20
};
