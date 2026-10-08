// /Game/UI/Windows/UMG_PlayerReturnedItemsList.UMG_PlayerReturnedItemsList_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x299, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_PlayerReturnedItemsList_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* InventoryOverlay;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_DarkTitlebar_C* UMG_DarkTitlebar;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_DisplayOnlyInventory_C* UMG_DisplayOnlyInventory;  // 0x0278, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText TitleOverride;  // 0x0280, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool MakeRed;  // 0x0298, size 0x1

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_PlayerReturnedItemsList(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
};
