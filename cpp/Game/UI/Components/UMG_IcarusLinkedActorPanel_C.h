// /Game/UI/Components/UMG_IcarusLinkedActorPanel.UMG_IcarusLinkedActorPanel_C
// Derives from: UIcarusLinkedActorPanelBase > UUserWidget > UWidget > UVisual > UObject
// size 0x280, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_IcarusLinkedActorPanel_C : public UIcarusLinkedActorPanelBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* LinkedActor;  // 0x0268, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool AutoCloseAtDistance;  // 0x0270, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float AutoCloseDistance;  // 0x0274, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle DistanceCheckTimer;  // 0x0278, size 0x8

    UFUNCTION(BlueprintCallable) void CheckDistanceToLinkedActor();
    UFUNCTION(BlueprintCallable) void ClosePanel();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_IcarusLinkedActorPanel(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) AActor* GetLinkedActor() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable) void GetLinkedActorContainerInventory(UInventory*& ContainerInventory);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void GetLinkedActorInventoryComponent(UInventoryComponent*& InventoryComponent);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnOpened();
    UFUNCTION(BlueprintCallable) void OnPanelDisplayHidden();
};
