// /Game/UI/Windows/UMG_GeneticTitle.UMG_GeneticTitle_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2A0, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_GeneticTitle_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* ShortName;  // 0x0268, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText Built_Tooltip;  // 0x0270, size 0x18, named "Built Tooltip"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FGeneticValuesRowHandle Genetic_Row_Handle;  // 0x0288, size 0x18, named "Genetic Row Handle"

    UFUNCTION() void ExecuteUbergraph_UMG_GeneticTitle(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Update(FGeneticValuesRowHandle GeneticRowHandle, int32 Value);  // parameters 0x1C
};
