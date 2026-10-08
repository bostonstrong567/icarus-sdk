// /Script/Icarus.ContextMenuFactory
// Derives from: AActor > UObject
// size 0x238, declared in Icarus/Source/Icarus/UI/ContextMenuFactory.h

UCLASS(Config=Engine)
class AContextMenuFactory : public AActor
{
public:
    UPROPERTY(BlueprintReadWrite) APlayerController* OwningPlayer;  // 0x0220, size 0x8
    UPROPERTY(BlueprintReadWrite) TArray<FContextMenuItemData> Items;  // 0x0228, size 0x10

    UFUNCTION(BlueprintCallable) void AddItem(FContextMenuItemData& ContextMenuItemData, FContextMenuItemClickedDelegate OnClickedDelegate);  // parameters 0xC0
    UFUNCTION(BlueprintCallable) void CreateMenu(APlayerController* NewOwningPlayer);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void SetContextMenuData(const FText& Name, const TSoftObjectPtr<UTexture2D>& Icon);  // parameters 0x40
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) UContextMenuWidget* ShowAsContextMenu(FVector2D ScreenPosition);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) UContextMenuWidget* ShowAsRadialMenu();  // parameters 0x8
};
