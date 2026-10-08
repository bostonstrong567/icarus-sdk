// /Script/Icarus.IcarusStatDescription
// size 0xF0, declared in Icarus/Source/Icarus/Stats/IcarusStat.h

USTRUCT()
struct FIcarusStatDescription : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText Title;  // 0x0018, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UTexture2D> Icon;  // 0x0030, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText PositiveTitleFormat;  // 0x0058, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText NegativeTitleFormat;  // 0x0070, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText PositiveDescription;  // 0x0088, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText NegativeDescription;  // 0x00A0, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bIsReplicated;  // 0x00B8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FStatDisplayCalculation> DisplayOperations;  // 0x00C0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bIsWorldStat;  // 0x00D0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FStatCategoriesRowHandle StatCategory;  // 0x00D4, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bHideStatInUserInterface;  // 0x00EC, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bShowStatOnModifiers;  // 0x00ED, size 0x1
};
