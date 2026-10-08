// /Game/UI/Components/Inventory/UMG_InventoryPaperDoll.UMG_InventoryPaperDoll_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x3F1, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_InventoryPaperDoll_C : public UUserWidget, public IInventorySlotChangeListener
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_EquipmentSlots_C* ArmsSlot;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_EquipmentSlots_Virtual_C* ArmsSlot_V;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_EquipmentSlots_C* BackSlot;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_EquipmentSlots_Virtual_C* BackSlot_V;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_EquipmentSlots_C* ChestSlot;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_EquipmentSlots_Virtual_C* ChestSlot_V;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_EquipmentSlots_C* FeetSlot;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_EquipmentSlots_Virtual_C* FeetSlot_V;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_EquipmentSlots_C* HeadSlot;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_EquipmentSlots_Virtual_C* HeadSlot_V;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* HorizontalBox_Button;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUniformGridPanel* LeftGrid;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUniformGridPanel* LeftGrid_Virtual;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_EquipmentSlots_C* LegsSlot;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_EquipmentSlots_Virtual_C* LegsSlot_V;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUniformGridPanel* RightGrid;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUniformGridPanel* RightGrid_Virtual;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* SlotImage;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* SlotImage_1;  // 0x02F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* SlotImage_2;  // 0x0300, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* SlotImage_3;  // 0x0308, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* SlotImage_4;  // 0x0310, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* SlotImage_5;  // 0x0318, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* SlotImage_6;  // 0x0320, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* SlotImage_7;  // 0x0328, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* SlotImage_8;  // 0x0330, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* SlotImage_9;  // 0x0338, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* SlotImage_10;  // 0x0340, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* SlotImage_11;  // 0x0348, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* UMG_BasicButton_Switch;  // 0x0350, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UWidgetSwitcher* WidgetSwitcher_1;  // 0x0358, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FQuickShiftHandler QuickShiftHandler;  // 0x0360, size 0x10
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UUMG_UserInterface_C* UserInterface;  // 0x0370, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HasRegisteredListener;  // 0x0378, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<int32, UUMG_EquipmentSlots_C*> SlotsMapping;  // 0x0380, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 HeadSlotIndex;  // 0x03D0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ChestSlotIndex;  // 0x03D4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ArmsSlotIndex;  // 0x03D8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 LegsSlotIndex;  // 0x03DC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 FeetSlotIndex;  // 0x03E0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 BackSlotIndex;  // 0x03E4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool OffsetSlots;  // 0x03E8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 RightColumnSlotIndex;  // 0x03EC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool SupportsVirtualEquipment;  // 0x03F0, size 0x1

    UFUNCTION() void BndEvt__UMG_InventoryPaperDoll_UMG_BasicButton_Switch_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_InventoryPaperDoll(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void HandleChangedSlots(UInventory* Inventory, const TSet<int32>& ChangedSlotIndices);  // parameters 0x58
    UFUNCTION(BlueprintCallable) void Initialize(UInventory* BoundInventory);  // parameters 0x8
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void QuickShiftHandler__DelegateSignature(int32 CurrentLocation, UInventory* Inventory);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetCosmeticArmourVisible(bool InBool);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void UMG_InventoryPaperDoll_AutoGenFunc(int32 CurrentLocation, UInventory* Inventory);  // parameters 0x10
};
