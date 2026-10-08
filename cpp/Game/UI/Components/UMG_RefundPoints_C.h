// /Game/UI/Components/UMG_RefundPoints.UMG_RefundPoints_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2E4, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_RefundPoints_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* ColourBorder;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* PointsText;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* RetrainingIcon;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* RetrainingIcon_1;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* RetrainingPointsButton;  // 0x0288, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FCurrencyConversionsRowHandle ConverstionRow;  // 0x0290, size 0x18
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UUMG_ConfirmationPopup_C* ConfirmationPopup;  // 0x02A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Initialised;  // 0x02B0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor TextAndIconColour;  // 0x02B4, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor White;  // 0x02C4, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor Orange;  // 0x02D4, size 0x10

    UFUNCTION() void BndEvt__UMG_RefundPoints_RetrainingPointsButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_RefundPoints_RetrainingPointsButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_RefundPoints_RetrainingPointsButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_RefundPoints(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Initialise();
    UFUNCTION(BlueprintCallable) void MetaResourcesUpdate();
    UFUNCTION(BlueprintCallable) void OnPurchaseComplete();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
};
