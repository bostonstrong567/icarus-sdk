// /Game/UI/Components/UMG_BiolabResourceDisplay.UMG_BiolabResourceDisplay_C
// Derives from: UIcarusWidget > UUserWidget > UWidget > UVisual > UObject
// size 0x340, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_BiolabResourceDisplay_C : public UIcarusWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UGridPanel* CurrencyGrid;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USpacer* Spacer_44;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* UMG_BasicButton_2;  // 0x02B0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Initialised;  // 0x02B8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FMetaCurrencyRowHandle, UUMG_WorkshopCostLarge_C*> Row_Handle;  // 0x02C0, size 0x50, named "Row Handle"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool UseOverride;  // 0x0310, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FMetaResource> OverrideResources;  // 0x0318, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MaxItemsPerRow;  // 0x0328, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float GridVerticalSpacing;  // 0x032C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bBiomassOnly;  // 0x0330, size 0x1
    UPROPERTY(EditAnywhere, Config, BlueprintReadWrite) bool bShowExchangeButton;  // 0x0331, size 0x1
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UUMG_Biolab_Exchange_C* ExchangeUI;  // 0x0338, size 0x8

    UFUNCTION() void BndEvt__UMG_BiolabResourceDisplay_UMG_BasicButton_2_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION(BlueprintCallable) void CreateWidgets();
    UFUNCTION() void ExecuteUbergraph_UMG_BiolabResourceDisplay(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnPurchaseComplete();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void TryInit();
    UFUNCTION(BlueprintCallable) void Update();
};
