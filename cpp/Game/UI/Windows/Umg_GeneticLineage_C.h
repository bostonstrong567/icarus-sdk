// /Game/UI/Windows/Umg_GeneticLineage.Umg_GeneticLineage_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2C0, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUmg_GeneticLineage_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* GeneticName;  // 0x0268, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Level;  // 0x0270, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText Progressive;  // 0x0278, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FGeneticLineagesRowHandle Lineage;  // 0x0290, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText Flat;  // 0x02A8, size 0x18

    UFUNCTION() void ExecuteUbergraph_Umg_GeneticLineage(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Initialise(FGeneticLineagesRowHandle Lineage);  // parameters 0x18
};
