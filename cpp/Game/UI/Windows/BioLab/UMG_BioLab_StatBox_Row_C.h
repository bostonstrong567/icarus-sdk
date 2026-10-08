// /Game/UI/Windows/BioLab/UMG_BioLab_StatBox_Row.UMG_BioLab_StatBox_Row_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x288, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_BioLab_StatBox_Row_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* ComparisonArrow;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* ComparisonStat;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* StatName;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* StatValue;  // 0x0280, size 0x8

    UFUNCTION() void ExecuteUbergraph_UMG_BioLab_StatBox_Row(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void HideComparison();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void ShowComparison(FStatComparisonResult Comparison);  // parameters 0x24
    UFUNCTION(BlueprintCallable) void ShowStatValue(FStatsRowHandle Stat, int32 Value);  // parameters 0x1C
};
