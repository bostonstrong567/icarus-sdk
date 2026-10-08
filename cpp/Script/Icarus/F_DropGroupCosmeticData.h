// /Script/Icarus.DropGroupCosmeticData
// size 0xC8, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/DropGroupsLibrary.generated.h

USTRUCT()
struct FDropGroupCosmeticData : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText DropGroupName;  // 0x0018, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText DropGroupDescription;  // 0x0030, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UTexture2D> DropGroupIcon;  // 0x0048, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UTexture2D> DropGroupBackground;  // 0x0070, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bVisibleInDropSelectionScreen;  // 0x0098, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTerrainsRowHandle AssociatedTerrain;  // 0x009C, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 DropGroupIndex;  // 0x00B4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bIsRecommended;  // 0x00B8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EDropTemperature Temperature;  // 0x00B9, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EDropAbundance Food;  // 0x00BA, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EDropAbundance Water;  // 0x00BB, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EDropAbundance Oxygen;  // 0x00BC, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EDropAbundance Wood;  // 0x00BD, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EDropAbundance Rock;  // 0x00BE, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EDropAbundance Ore;  // 0x00BF, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EDropAbundance AggressiveCreatures;  // 0x00C0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EDropAbundance PassiveCreatures;  // 0x00C1, size 0x1
};
