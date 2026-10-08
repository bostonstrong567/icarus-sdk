// /Script/IcarusGenerated.WorkshopPack
// size 0x50, declared in Icarus/Source/IcarusGenerated/Public/Struct/WorkshopPack.h

USTRUCT()
struct FWorkshopPack
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString Name;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FString> Categories;  // 0x0010, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FString> Tags;  // 0x0020, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FString> WorkshopItemsRow;  // 0x0030, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FMetaResource> MetaCost;  // 0x0040, size 0x10
};
