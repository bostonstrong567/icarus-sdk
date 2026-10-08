// /Game/UI/Components/UMG_ShopItem.UMG_ShopItem_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x380, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_ShopItem_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* CategoryIcon;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* CategoryImage;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* CostBorder;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* CostList;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_103;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* ItemButton;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* ItemName;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Shadow;  // 0x02A0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FWorkshopPack WorkshopPack;  // 0x02A8, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Index;  // 0x02F8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FPurchase Purchase;  // 0x0300, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor TextColour_Default;  // 0x0310, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor TextColour_Hovered;  // 0x0338, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor ImagePurple;  // 0x0360, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor ImageBlack;  // 0x0370, size 0x10

    UFUNCTION() void BndEvt__ItemButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    UFUNCTION() void BndEvt__ItemButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    UFUNCTION() void BndEvt__ItemButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_ShopItem(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Purchase__DelegateSignature(int32 Index);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void UpdateVisuals(bool Hovered);  // parameters 0x1
};
