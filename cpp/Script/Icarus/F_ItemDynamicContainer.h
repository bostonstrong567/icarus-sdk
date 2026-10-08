// /Script/Icarus.ItemDynamicContainer
// size 0x18, declared in Icarus/Source/Icarus/DataStructs/ItemData.h

USTRUCT()
struct FItemDynamicContainer
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSubclassOf<UTraitComponent> Component;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FItemDynamicData> Properties;  // 0x0008, size 0x10
};
