// /Game/UI/Windows/Umg_GeneticValuesOutline.Umg_GeneticValuesOutline_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2A0, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUmg_GeneticValuesOutline_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCanvasPanel* DrawSpace;  // 0x0268, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FVector2D> Points;  // 0x0270, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D Center;  // 0x0280, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Size;  // 0x0288, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FColor> Colours;  // 0x0290, size 0x10

    UFUNCTION() void ExecuteUbergraph_Umg_GeneticValuesOutline(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent) void OnPaint(FPaintContext& Context) const;  // parameters 0x30
    UFUNCTION(BlueprintCallable) void Setup(TArray<FVector2D>& Points, FVector2D Center, float Size);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) void TranslateExe(FVector2D In, FVector2D& Out);  // parameters 0x10
};
