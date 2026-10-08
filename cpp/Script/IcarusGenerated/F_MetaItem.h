// /Script/IcarusGenerated.MetaItem
// size 0x40, declared in Icarus/Source/IcarusGenerated/Public/Struct/MetaItem.h

USTRUCT()
struct FMetaItem
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString ItemStaticRow;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FDynamicProperty> Properties;  // 0x0010, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FStat> Stats;  // 0x0020, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString ID;  // 0x0030, size 0x10
};
