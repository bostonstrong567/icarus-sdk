// /Game/UI/Components/ContextMenu/UMG_ContextMenu_List_Item.UMG_ContextMenu_List_Item_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2D0, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_ContextMenu_List_Item_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* Appear;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* Content;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* FeatureLevelOverlay;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* FeatureText;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* ListButton;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USizeBox* MainSizeBox;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* RepairCost;  // 0x0298, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FOnWidgetSelected OnWidgetSelected;  // 0x02A0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FOnItemSelected OnItemSelected;  // 0x02B0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName ItemIdentifier;  // 0x02C0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ItemIndex;  // 0x02C8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ItemPayload;  // 0x02CC, size 0x4

    UFUNCTION() void BndEvt__ListButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void ExecuteUbergraph_UMG_ContextMenu_List_Item(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) FText GetDeployUsableName();  // parameters 0x18
    UFUNCTION(BlueprintCallable) void OnItemSelected__DelegateSignature(FName Identifier, int32 Payload);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void OnWidgetSelected__DelegateSignature(UUMG_ContextMenu_List_Item_C* ItemClicked);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetItemData(int32 ItemIndex, FContextMenuItemData ItemData);  // parameters 0xB8
};
