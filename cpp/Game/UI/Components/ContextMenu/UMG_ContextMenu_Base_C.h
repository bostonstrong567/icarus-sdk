// /Game/UI/Components/ContextMenu/UMG_ContextMenu_Base.UMG_ContextMenu_Base_C
// Derives from: UContextMenuWidget > UUserWidget > UWidget > UVisual > UObject
// size 0x2A8, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_ContextMenu_Base_C : public UContextMenuWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText MenuName;  // 0x0268, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UTexture2D> MenuIcon;  // 0x0280, size 0x28

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void AddItems(const TArray<FContextMenuItemData>& ContextMenuItems);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void CloseMenu();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION(BlueprintCallable) void CreateItem(int32 Index, FContextMenuItemData ContextMenuItem);  // parameters 0xB8
    UFUNCTION() void ExecuteUbergraph_UMG_ContextMenu_Base(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void HidePanelDisplay();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void ShowMenu(FVector2D ScreenPosition, const FText& MenuName, const TSoftObjectPtr<UTexture2D>& MenuIcon);  // parameters 0x48
};
