// /Game/UI/Windows/UMG_MainInventory_Space.UMG_MainInventory_Space_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2B1, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_MainInventory_Space_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* AnimatePointers;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* FiltersBox;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_1;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_2;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_92;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_Inventory_C* MainInventory;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_InventoryDropZone_C* UMG_InventoryDropZone;  // 0x02A0, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UInventory* Inventory;  // 0x02A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Initialised;  // 0x02B0, size 0x1

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_MainInventory_Space(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Initialise(UInventory* Main, UInventory* Loadout);  // parameters 0x10
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
};
