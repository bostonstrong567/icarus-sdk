// /Script/Icarus.WaterSetup
// size 0xE0, declared in Icarus/Source/Icarus/World/WaterBody.h

USTRUCT()
struct FWaterSetup : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UMaterialInterface> Material;  // 0x0018, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FFishSetupRowHandle> Fish;  // 0x0040, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FishDensity;  // 0x0050, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UFMODEvent> Sound;  // 0x0058, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsInCave;  // 0x0080, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsDrinkable;  // 0x0081, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FModifierStatesRowHandle> WetModifiers;  // 0x0088, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FGameplayTagContainer GameplayTags;  // 0x0098, size 0x20
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAlterationsEnum WaterAlteration;  // 0x00B8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FHighlightableRowHandle Highlightable;  // 0x00C8, size 0x18
};
