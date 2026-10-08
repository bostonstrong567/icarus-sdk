// /Game/UI/Components/UMG_Biolab_Exchange.UMG_Biolab_Exchange_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x410, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_Biolab_Exchange_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* Amount;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* Amount_1;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_IconTextButton_C* Buy_Cancel;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCustomComboBox* Buy_Combobox;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_IconTextButton_C* Buy_Confirm;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Buy_Currency;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Buy_Currency_Image;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Buy_Currency_Output;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Buy_Currency_SummedOutput;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* BuyButton;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* BuyOverlay;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BiolabResourceDisplay_C* CurrencyDisplay;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_1;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_2;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_6;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_8;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_9;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_96;  // 0x02F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_290;  // 0x0300, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ButtonIcon_C* LeftButton;  // 0x0308, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ButtonIcon_C* LeftButton_1;  // 0x0310, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ButtonIcon_C* LeftButton_2;  // 0x0318, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ButtonIcon_C* LeftButton_10;  // 0x0320, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Norex_Currency_Buy;  // 0x0328, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Norex_Currency_Sell;  // 0x0330, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Norex_Currrency_Output;  // 0x0338, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) URichTextBlock* RichText;  // 0x0340, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) URichTextBlock* RichText_1;  // 0x0348, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) URichTextBlock* RichText_2;  // 0x0350, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) URichTextBlock* RichText_3;  // 0x0358, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ButtonIcon_C* RightButton;  // 0x0360, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ButtonIcon_C* RightButton_1;  // 0x0368, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ButtonIcon_C* RightButton_2;  // 0x0370, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ButtonIcon_C* RightButton_10;  // 0x0378, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UEditableText* SelectedAmount;  // 0x0380, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UEditableText* SelectedAmount_Sell;  // 0x0388, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_IconTextButton_C* Sell_Cancel;  // 0x0390, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCustomComboBox* Sell_Combobox;  // 0x0398, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_IconTextButton_C* Sell_Confirm;  // 0x03A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Sell_Currency;  // 0x03A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Sell_Currency_Image;  // 0x03B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Sell_Currency_SummedOutput;  // 0x03B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* SellButton;  // 0x03C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* SellOverlay;  // 0x03C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UWidgetSwitcher* Switcher;  // 0x03D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BiolabResourceDisplay_C* UMG_BiolabResourceDisplay_1;  // 0x03D8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Multiplier;  // 0x03E0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FCurrencyConversionsRowHandle Currency_Conversion;  // 0x03E4, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Initialised;  // 0x03FC, size 0x1
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FPurchaseComplete PurchaseComplete;  // 0x0400, size 0x10

    UFUNCTION(BlueprintCallable) void Back();
    UFUNCTION() void BndEvt__UMG_Biolab_Exchange_BuyButton_K2Node_ComponentBoundEvent_9_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_Biolab_Exchange_Buy_Combobox_K2Node_ComponentBoundEvent_8_OnItemSet__DelegateSignature(FString NameString, UUserWidget* Widget);  // parameters 0x18
    UFUNCTION() void BndEvt__UMG_Biolab_Exchange_LeftButton_1_K2Node_ComponentBoundEvent_15_Clicked__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_Biolab_Exchange_LeftButton_2_K2Node_ComponentBoundEvent_14_Clicked__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_Biolab_Exchange_RightButton_1_K2Node_ComponentBoundEvent_12_Clicked__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_Biolab_Exchange_RightButton_2_K2Node_ComponentBoundEvent_11_Clicked__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_Biolab_Exchange_SelectedAmount_Sell_K2Node_ComponentBoundEvent_16_OnEditableTextCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit> CommitMethod);  // parameters 0x19
    UFUNCTION() void BndEvt__UMG_Biolab_Exchange_SellButton_K2Node_ComponentBoundEvent_10_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_Biolab_Exchange_Sell_Cancel_K2Node_ComponentBoundEvent_18_Clicked__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_Biolab_Exchange_Sell_Combobox_K2Node_ComponentBoundEvent_7_OnItemSet__DelegateSignature(FString NameString, UUserWidget* Widget);  // parameters 0x18
    UFUNCTION() void BndEvt__UMG_Biolab_Exchange_Sell_Confirm_K2Node_ComponentBoundEvent_17_Clicked__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_Exotic_Exchange_LeftButton_10_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_Exotic_Exchange_RightButton_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_Respec_Purchase_Cancel_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_Respec_Purchase_Confirm_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_Respec_Purchase_LeftButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_Respec_Purchase_RightButton_1_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_Respec_Purchase_SelectedAmount_K2Node_ComponentBoundEvent_3_OnEditableTextCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit> CommitMethod);  // parameters 0x19
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_Biolab_Exchange(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FetchCurrentCreditCount();
    UFUNCTION(BlueprintCallable) void FindCurrencyExchange(FMetaCurrencyRowHandle Input, FMetaCurrencyRowHandle Output, FCurrencyConversionsRowHandle& Conversion);  // parameters 0x48
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetDectorators(FString& Decorator_Image, FString& Decorator_Text);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void Initialise();
    UFUNCTION(BlueprintCallable) void MetaResourcesUpdated();
    UFUNCTION(BlueprintCallable) void OnPurchaseComplete();
    UFUNCTION(BlueprintCallable) void PurchaseComplete__DelegateSignature();
    UFUNCTION(BlueprintCallable) void Success();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
    UFUNCTION(BlueprintCallable) void UpdateConversion();
    UFUNCTION(BlueprintCallable) void UpdateCount_Buy(int32 Count);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void UpdateCount_Sell(int32 Count);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void UpdateCurrecy();
};
