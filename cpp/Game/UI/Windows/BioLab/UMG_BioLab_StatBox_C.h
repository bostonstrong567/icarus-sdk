// /Game/UI/Windows/BioLab/UMG_BioLab_StatBox.UMG_BioLab_StatBox_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x6A0, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_BioLab_StatBox_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* StatContents;  // 0x0268, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemData Base_Item;  // 0x0270, size 0x1F0, named "Base Item"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemData Comparison_Item;  // 0x0460, size 0x1F0, named "Comparison Item"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FStatsRowHandle, UUMG_BioLab_StatBox_Row_C*> Stats;  // 0x0650, size 0x50

    UFUNCTION(BlueprintCallable) void ClearComparison();
    UFUNCTION() void ExecuteUbergraph_UMG_BioLab_StatBox(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetBaseItem(FItemData BaseItem);  // parameters 0x1F0
    UFUNCTION(BlueprintCallable) void SetComparisonItem(FItemData ComparisonItem);  // parameters 0x1F0
    UFUNCTION(BlueprintCallable) void ShowBaseStats();
    UFUNCTION(BlueprintCallable) void ShowComparison();
};
