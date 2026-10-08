// /Script/Icarus.FishData
// size 0xE0, declared in Icarus/Source/Icarus/IcarusGenerated/FishData/FishDataRowHandle.h

USTRUCT()
struct FFishData : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemTemplateRowHandle Fish;  // 0x0018, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFishSetupRowHandle FishSetup;  // 0x0030, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UTexture2D> Image;  // 0x0048, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText Lore;  // 0x0070, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EFishRarity Rarity;  // 0x0088, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EFishType Type;  // 0x0089, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FTerrainsRowHandle> Maps;  // 0x0090, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FBiomesEnum> Biomes;  // 0x00A0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MinWeight;  // 0x00B0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MaxWeight;  // 0x00B4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MinLength;  // 0x00B8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MaxLength;  // 0x00BC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FItemsStaticRowHandle> Lures;  // 0x00C0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FStatsEnum CaptureStat;  // 0x00D0, size 0x10
};
