// /Game/UI/Components/ContextMenu/UMG_ContextMenu_List.UMG_ContextMenu_List_C
// Derives from: UUMG_ContextMenu_Base_C > UContextMenuWidget > UUserWidget > UWidget > UVisual > UObject
// size 0x338, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_ContextMenu_List_C : public UUMG_ContextMenu_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* BackFill;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* ItemBorder;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* ItemContainer;  // 0x02C0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSubclassOf<UUMG_ContextMenu_List_Item_C> DefaultListItemClass;  // 0x02C8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSubclassOf<UUMG_ContextMenu_List_Group_C> DefaultListGroupClass;  // 0x02D0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool UseGroupContainers;  // 0x02D8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FContextMenuGroupTypesRowHandle, UUMG_ContextMenu_List_Group_C*> GroupWidgets;  // 0x02E0, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D ScreenPadding;  // 0x0330, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void AddItems(const TArray<FContextMenuItemData>& ContextMenuItems);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void CloseMenu();
    UFUNCTION(BlueprintCallable) void CreateItem(int32 Index, FContextMenuItemData ContextMenuItem);  // parameters 0xB8
    UFUNCTION() void ExecuteUbergraph_UMG_ContextMenu_List(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FitPositionToScreen(FVector2D InPosition, FVector2D& OutPosition);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void GetOrCreateGroup(FContextMenuGroupTypesRowHandle GroupRowHandle, UUMG_ContextMenu_List_Group_C*& GroupWidget);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) void NeedsAnyGroups(TArray<FContextMenuItemData>& ContextMenuItems, bool& NeedsGroups);  // parameters 0x11
    UFUNCTION(BlueprintCallable) void OnCloseInventory();
    UFUNCTION(BlueprintCallable) FEventReply OnMouseButtonDown_0(FGeometry MyGeometry, const FPointerEvent& MouseEvent);  // parameters 0x160
    UFUNCTION(BlueprintCallable) void OnWidgetSelected(UUMG_ContextMenu_List_Item_C* ItemClicked);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void ShowMenu(FVector2D ScreenPosition, const FText& MenuName, const TSoftObjectPtr<UTexture2D>& MenuIcon);  // parameters 0x48
};
