// /Script/Icarus.ContextMenuWidget
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x260, declared in Icarus/Source/Icarus/UI/ContextMenuWidget.h

UCLASS(EditInlineNew)
class UContextMenuWidget : public UUserWidget
{
public:

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void AddItems(const TArray<FContextMenuItemData>& ContextMenuItems);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void CloseMenu();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void ShowMenu(FVector2D ScreenPosition, const FText& MenuName, const TSoftObjectPtr<UTexture2D>& MenuIcon);  // parameters 0x48
};
