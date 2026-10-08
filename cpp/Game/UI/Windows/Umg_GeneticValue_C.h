// /Game/UI/Windows/Umg_GeneticValue.Umg_GeneticValue_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2B0, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUmg_GeneticValue_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* GeneticName;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UProgressBar* Progress;  // 0x0270, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FGeneticValuesRowHandle GeneticValue;  // 0x0278, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Value;  // 0x0290, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText Built_Tooltip;  // 0x0298, size 0x18, named "Built Tooltip"

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_Umg_GeneticValue(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
};
