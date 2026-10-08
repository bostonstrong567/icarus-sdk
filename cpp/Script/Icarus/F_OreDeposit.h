// /Script/Icarus.OreDeposit
// size 0x120, declared in Icarus/Source/Icarus/IcarusGenerated/OreDeposit/OreDepositTable.h

USTRUCT()
struct FOreDeposit : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemTemplateRowHandle ResourceType;  // 0x0018, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FHighlightableRowHandle HighlightableRow;  // 0x0030, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UMaterialInterface> RVTNodeMaterial_CF;  // 0x0048, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UMaterialInterface> RVTNodeMaterial_DC;  // 0x0070, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UMaterialInterface> NodeMaterial_CF;  // 0x0098, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UMaterialInterface> NodeMaterial_DC;  // 0x00C0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UMaterialInterface> RockMaterial;  // 0x00E8, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MinOreAvailable;  // 0x0110, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MaxOreAvailable;  // 0x0114, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MiningTimeSeconds;  // 0x0118, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ScannerBlacklist;  // 0x011C, size 0x1
};
