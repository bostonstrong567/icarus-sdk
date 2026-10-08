// /Game/UI/Notifications/UMG_ReturnedItemEntry.UMG_ReturnedItemEntry_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x468, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_ReturnedItemEntry_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* ItemIcon;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* ItemName;  // 0x0270, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemData Item;  // 0x0278, size 0x1F0

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_ReturnedItemEntry(int32 EntryPoint);  // parameters 0x4
};
