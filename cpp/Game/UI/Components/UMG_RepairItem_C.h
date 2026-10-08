// /Game/UI/Components/UMG_RepairItem.UMG_RepairItem_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x690, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_RepairItem_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* ItemImage;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Percent;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* Selectable;  // 0x0278, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRepairableItem RepairableItem;  // 0x0280, size 0x220
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemData Item;  // 0x04A0, size 0x1F0

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_RepairItem(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
};
