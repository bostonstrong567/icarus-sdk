// /Game/UI/Components/UMG_MetaResourceDisplay.UMG_MetaResourceDisplay_C
// Derives from: UIcarusWidget > UUserWidget > UWidget > UVisual > UObject
// size 0x320, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_MetaResourceDisplay_C : public UIcarusWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UGridPanel* CurrencyGrid;  // 0x02A0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Initialised;  // 0x02A8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FMetaCurrencyRowHandle, UUMG_WorkshopCostLarge_C*> Row_Handle;  // 0x02B0, size 0x50, named "Row Handle"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool UseOverride;  // 0x0300, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FMetaResource> OverrideResources;  // 0x0308, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MaxItemsPerRow;  // 0x0318, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float GridVerticalSpacing;  // 0x031C, size 0x4

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION(BlueprintCallable) void CreateWidgets();
    UFUNCTION() void ExecuteUbergraph_UMG_MetaResourceDisplay(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void TryInit();
    UFUNCTION(BlueprintCallable) void Update();
};
