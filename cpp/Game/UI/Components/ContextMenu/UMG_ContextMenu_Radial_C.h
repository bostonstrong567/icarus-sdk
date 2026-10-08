// /Game/UI/Components/ContextMenu/UMG_ContextMenu_Radial.UMG_ContextMenu_Radial_C
// Derives from: UUMG_ContextMenu_Base_C > UContextMenuWidget > UUserWidget > UWidget > UVisual > UObject
// size 0x338, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_ContextMenu_Radial_C : public UUMG_ContextMenu_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* BackgroundFade;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* ContentText;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* ContextImage;  // 0x02C0, size 0x8
    UPROPERTY(Instanced) UBorder* InteractionFrame;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNamedSlot* NamedSlot_RightPanel;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* RadialMenu;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TitleText;  // 0x02E0, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UUMG_ContextMenu_Radial_Item_C* HighlightedSegment;  // 0x02E8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FSegmentHighlightedChanged SegmentHighlightedChanged;  // 0x02F0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 NumItems;  // 0x0300, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSubclassOf<UUMG_ContextMenu_Radial_Item_C> DefaultSegmentWidgetClass;  // 0x0308, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsOpen;  // 0x0310, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UUMG_ContextMenu_Radial_Item_C*> Items;  // 0x0318, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ControllerDistanceMultiplier;  // 0x0328, size 0x4
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UUMG_ContextMenu_Radial_Item_C* LastHighlightedSegment;  // 0x0330, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void AddItems(const TArray<FContextMenuItemData>& ContextMenuItems);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void CloseMenu();
    UFUNCTION(BlueprintCallable) void CreateItem(int32 Index, FContextMenuItemData ContextMenuItem);  // parameters 0xB8
    UFUNCTION() void ExecuteUbergraph_UMG_ContextMenu_Radial(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetAngleAndDistance_Controller(float& Angle, float& Distance);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void GetAngle_Mouse(float& Angle);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetDistanceFromCentre_Mouse(float& InteractionLength);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetTotalAngleAndDistance(float& Angle, float& Distance);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void ListenForActions();
    UFUNCTION(BlueprintCallable) void OnClickedInput();
    UFUNCTION(BlueprintCallable) void OnMenuOpened();
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent) FEventReply OnMouseButtonUp(FGeometry MyGeometry, const FPointerEvent& MouseEvent);  // parameters 0x160
    UFUNCTION(BlueprintCallable) void Radial_Menu_Select();  // named "Radial Menu Select"
    UFUNCTION(BlueprintCallable) void SegmentHighlightedChanged__DelegateSignature(UUMG_ContextMenu_Radial_Item_C* Segment);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SegmentHighlightedHandler(UUMG_ContextMenu_Radial_Item_C* NewHighlightedSegment);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void ShowMenu(FVector2D ScreenPosition, const FText& MenuName, const TSoftObjectPtr<UTexture2D>& MenuIcon);  // parameters 0x48
    UFUNCTION(BlueprintCallable) void StopListeningForActions();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
    UFUNCTION(BlueprintCallable) void UpdateHighlight();
};
