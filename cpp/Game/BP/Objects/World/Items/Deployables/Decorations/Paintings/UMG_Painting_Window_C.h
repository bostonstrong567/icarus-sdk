// /Game/BP/Objects/World/Items/Deployables/Decorations/Paintings/UMG_Painting_Window.UMG_Painting_Window_C
// Derives from: UUMG_IcarusLinkedActorPanel_C > UIcarusLinkedActorPanelBase > UUserWidget > UWidget > UVisual > UObject
// size 0x2E8, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_Painting_Window_C : public UUMG_IcarusLinkedActorPanel_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_IconTextButton_C* ConfirmButton;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Divider;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UListView* ListView_ItemIcons;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TextBlock_53;  // 0x02A0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_Painting_Base_C* PaintingReference;  // 0x02A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UPaintingListItem*> PaintingListItems;  // 0x02B0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UObject> PaintingImage;  // 0x02C0, size 0x28

    UFUNCTION() void BndEvt__UMG_Sign_Text_Window_ConfirmButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_Painting_Window(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GenerateItemList(TArray<FPaintingsRowHandle>& ValidPaintings);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void ProxyUpdateIcon(FPaintingsRowHandle PaintingRow);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void UpdateIconList(TArray<UObject*>& Items);  // parameters 0x10
};
