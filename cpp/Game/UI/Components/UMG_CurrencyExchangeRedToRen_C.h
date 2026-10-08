// /Game/UI/Components/UMG_CurrencyExchangeRedToRen.UMG_CurrencyExchangeRedToRen_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x328, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_CurrencyExchangeRedToRen_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* Glow;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* CurrencyExchnageImage;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* PointsText;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* RetrainingPointsButton;  // 0x0280, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UUMG_ConfirmationPopup_C* ConfirmationPopup;  // 0x0288, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor Text_Colour;  // 0x0290, size 0x28, named "Text Colour"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor Black;  // 0x02B8, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor ExoticPurple;  // 0x02E0, size 0x28
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UUMG_Exotic_Exchange_C* ExchangeWindow;  // 0x0308, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FCurrencyConversionsRowHandle Currency_Conversion;  // 0x0310, size 0x18, named "Currency Conversion"

    UFUNCTION() void BndEvt__UMG_RefundPoints_RetrainingPointsButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_RefundPoints_RetrainingPointsButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_RefundPoints_RetrainingPointsButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Destruct();
    UFUNCTION() void ExecuteUbergraph_UMG_CurrencyExchangeRedToRen(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnPurchaseComplete();
};
