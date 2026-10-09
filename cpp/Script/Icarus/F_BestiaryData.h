// /Script/Icarus.BestiaryData
// size 0x1D8, declared in Icarus/Source/Icarus/Systems/Bestiary/BestiaryData.h

USTRUCT()
struct FBestiaryData : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText CreatureName;  // 0x0018, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UTexture2D> Image;  // 0x0030, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float PopupImageScale;  // 0x0058, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D PopupImageOffset;  // 0x005C, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EBiomeImageType BiomeImageType;  // 0x0064, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UFMODEvent> CreatureSound;  // 0x0068, size 0x28
    UPROPERTY(EditAnywhere, Transient) TArray<FAISetupRowHandle> SpecificCreatures;  // 0x0090, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FAtmospheresRowHandle> Biomes;  // 0x00A0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FTerrainsRowHandle> Maps;  // 0x00B0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 TotalPointsRequired;  // 0x00C0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText Lore1;  // 0x00C8, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText Lore2;  // 0x00E0, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText Lore3;  // 0x00F8, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FBestiaryTraitsRowHandle> Traits;  // 0x0110, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FBaseStatsEnum, int32> StatsUnlock1;  // 0x0120, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FBaseStatsEnum, int32> StatsUnlock2;  // 0x0170, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FBaseStatsEnum> ProgressiveStat;  // 0x01C0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bIsBoss;  // 0x01D0, size 0x1
};
