// /Game/UI/Components/UMG_Sort.UMG_Sort_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x281, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_Sort_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCustomComboBox* Combobox;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* SortButton;  // 0x0270, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UInventory* Inventory;  // 0x0278, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<EInventorySortType> Sort_Type;  // 0x0280, size 0x1, named "Sort Type"

    UFUNCTION() void BndEvt__UMG_Sort_Combobox_K2Node_ComponentBoundEvent_2_OnItemSet__DelegateSignature(FString NameString, UUserWidget* Widget);  // parameters 0x18
    UFUNCTION() void BndEvt__UMG_Sort_SortButton_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_Sort(int32 EntryPoint);  // parameters 0x4
};
