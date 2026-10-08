// /Game/UI/Components/UMG_SaddleInventory.UMG_SaddleInventory_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x28A, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_SaddleInventory_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_Inventory_C* Inventory_Saddle;  // 0x0268, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* LinkedActor;  // 0x0270, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FInventoryIDEnum Inventory_ID;  // 0x0278, size 0x10, named "Inventory ID"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HideTakeAllButton;  // 0x0288, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsItemAttachment;  // 0x0289, size 0x1

    UFUNCTION() void ExecuteUbergraph_UMG_SaddleInventory(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Initialise(AActor* LinkedActor);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnItemUpdated(UInventory* Inventory, int32 Location);  // parameters 0xC
};
