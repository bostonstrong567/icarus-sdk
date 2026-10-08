// /Game/UI/Windows/Umg_GeneticValues.Umg_GeneticValues_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x350, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUmg_GeneticValues_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_GeneticTitle_C* Agility;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCanvasPanel* DrawSpace;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_GeneticTitle_C* Endurance;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_GeneticTitle_C* Hardiness;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_GeneticTitle_C* Muscle;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_GeneticTitle_C* Toughness;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUmg_GeneticValuesOutline_C* Umg_GeneticValuesOutline;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ScaleableFrame_C* UMG_ScaleableFrame;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_GeneticTitle_C* Utility;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_GeneticTitle_C* Vitality;  // 0x02B0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FGeneticValuesRowHandle GeneticValue;  // 0x02B8, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Value;  // 0x02D0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText Built_Tooltip;  // 0x02D8, size 0x18, named "Built Tooltip"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FVector2D> Points;  // 0x02F0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D Center;  // 0x0300, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Size;  // 0x0308, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FColor> Colours;  // 0x0310, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FGeneticValuesRowHandle> ValuesOrder;  // 0x0320, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<float> Values;  // 0x0330, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UUMG_GeneticTitle_C*> Widgets;  // 0x0340, size 0x10

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_Umg_GeneticValues(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Initialise(const TArray<FCreatureGenetics>& Values);  // parameters 0x10
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void Redraw();
    UFUNCTION(BlueprintCallable, BlueprintPure) void Translate(FVector2D In, FVector2D& Out);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void TranslateExe(FVector2D In, FVector2D& Out);  // parameters 0x10
};
