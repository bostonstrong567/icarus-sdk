// /Game/UI/Components/UMG_CurrencyExchangeRenToLicence.UMG_CurrencyExchangeRenToLicence_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x330, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_CurrencyExchangeRenToLicence_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* Glow;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* Button;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* CurrencyExchnageImage;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* PointsText;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* RenText;  // 0x0288, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UUMG_ConfirmationPopup_C* ConfirmationPopup;  // 0x0290, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor Text_Colour;  // 0x0298, size 0x28, named "Text Colour"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor Black;  // 0x02C0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor ExoticPurple;  // 0x02E8, size 0x28
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UUMG_Exotic_Exchange_C* ExchangeWindow;  // 0x0310, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FCurrencyConversionsRowHandle Currency_Conversion;  // 0x0318, size 0x18, named "Currency Conversion"

    UFUNCTION(BlueprintCallable) void Back();
    UFUNCTION() void BndEvt__UMG_RefundPoints_RetrainingPointsButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_RefundPoints_RetrainingPointsButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_RefundPoints_RetrainingPointsButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
    UFUNCTION(BlueprintCallable) void Cancel();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Destruct();
    UFUNCTION() void ExecuteUbergraph_UMG_CurrencyExchangeRenToLicence(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetDectorators(bool Starting, FString& Decorator_Image, FString& Decorator_Text, FText& DisplayName);  // parameters 0x40
    UFUNCTION(BlueprintCallable) void OnPurchaseComplete();
    UFUNCTION(BlueprintCallable) void PurchaseLicence();
    UFUNCTION(BlueprintCallable) void Success();
};
