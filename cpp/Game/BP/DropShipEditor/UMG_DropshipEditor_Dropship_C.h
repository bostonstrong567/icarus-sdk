// /Game/BP/DropShipEditor/UMG_DropshipEditor_Dropship.UMG_DropshipEditor_Dropship_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x3CD, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_DropshipEditor_Dropship_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_DropshipSlot_C* Base;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* DeleteButton;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_1;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_2;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_3;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_84;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_145;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_219;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* LoadoutText;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* LoadoutWarning;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_DropshipSlot_C* Mid;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* Pointers;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UEditableText* ShipNameTextBox;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_DropshipSlot_C* Top;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* UMG_BasicButton_2;  // 0x02E0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDropship Dropship;  // 0x02E8, size 0xE0
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Dropship_Index;  // 0x03C8, size 0x4, named "Dropship Index"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool LoadoutSelected;  // 0x03CC, size 0x1

    UFUNCTION() void BndEvt__UMG_BasicButton_2_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_BasicButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_DropshipEditor_Dropship(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ModifyDropship(UInventory* Inventory, int32 Slot, EDropshipPartType Type);  // parameters 0xD
    UFUNCTION(BlueprintCallable) void Refresh();
    UFUNCTION(BlueprintCallable) void RemovePart(EDropshipPartType Type);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void UpdateDropship(FDropship Dropship);  // parameters 0xE0
};
