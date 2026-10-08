// /Game/UI/Components/UMG_Exotic_Exchange.UMG_Exotic_Exchange_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x368, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_Exotic_Exchange_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* Amount;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USizeBox* AmountSize;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_IconTextButton_C* Cancel;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_IconTextButton_C* Confirm;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* CreditsCurrency;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Currency1Value;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Currency2Value;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* ExoticsCurrency;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_1;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_2;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_3;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_4;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_5;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_7;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_96;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_177;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ButtonIcon_C* LeftButton;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ButtonIcon_C* LeftButton_10;  // 0x02F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) URichTextBlock* RichText;  // 0x0300, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) URichTextBlock* RichText_1;  // 0x0308, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ButtonIcon_C* RightButton;  // 0x0310, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ButtonIcon_C* RightButton_10;  // 0x0318, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UEditableText* SelectedAmount;  // 0x0320, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* SummedCurrency;  // 0x0328, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_MetaResourceDisplay_C* UMG_MetaResourceDisplay;  // 0x0330, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Multiplier;  // 0x0338, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FCurrencyConversionsRowHandle Currency_Conversion;  // 0x033C, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Initialised;  // 0x0354, size 0x1
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FPurchaseComplete PurchaseComplete;  // 0x0358, size 0x10

    UFUNCTION(BlueprintCallable) void Back();
    UFUNCTION() void BndEvt__UMG_Exotic_Exchange_LeftButton_10_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_Exotic_Exchange_RightButton_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_Respec_Purchase_Cancel_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_Respec_Purchase_Confirm_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_Respec_Purchase_LeftButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_Respec_Purchase_RightButton_1_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_Respec_Purchase_SelectedAmount_K2Node_ComponentBoundEvent_3_OnEditableTextCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit> CommitMethod);  // parameters 0x19
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_Exotic_Exchange(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FetchCurrentCreditCount();
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetDectorators(FString& Decorator_Image, FString& Decorator_Text, FText& DisplayName);  // parameters 0x38
    UFUNCTION(BlueprintCallable) void Initialise();
    UFUNCTION(BlueprintCallable) void MetaResourcesUpdated();
    UFUNCTION(BlueprintCallable) void OnPurchaseComplete();
    UFUNCTION(BlueprintCallable) void PurchaseComplete__DelegateSignature();
    UFUNCTION(BlueprintCallable) void Success();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
    UFUNCTION(BlueprintCallable) void UpdateConversion();
    UFUNCTION(BlueprintCallable) void UpdateCount(int32 Count);  // parameters 0x4
};
