// /Game/BP/Behaviours/Interactable/BP_Interactable_RadialMenu.BP_Interactable_RadialMenu_C
// Derives from: UInteractableBehaviour > UTraitBehaviour > UActorComponent > UObject
// size 0x120, a blueprint class, blueprint

UCLASS(Transient, EditInlineNew, Config=Engine)
class UBP_Interactable_RadialMenu_C : public UInteractableBehaviour
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00E8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* LastInstigator;  // 0x00F0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusPlayerCharacter* Current_Player;  // 0x00F8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRadialMenuDataRowHandle RadialOptions;  // 0x0100, size 0x18
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UContextMenuWidget* CurrentRadialMenu;  // 0x0118, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool CanInteract(AActor* Instigator, FHitResult HitResult);  // parameters 0x91
    UFUNCTION() void ExecuteUbergraph_BP_Interactable_RadialMenu(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetContextMenuInfo(FText& MenuName, TSoftObjectPtr<UTexture2D>& MenuIcon);  // parameters 0x40
    UFUNCTION(BlueprintCallable) void GetContextMenuItems(TArray<FContextMenuItemData>& MenuItems);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void Interact(AActor* Instigator, const FHitResult& HitResult);  // parameters 0x90
    UFUNCTION(BlueprintCallable) void MenuItemSelected(FName ItemActionId, int32 ItemPayload);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void RadialMenuClosed(TEnumAsByte<ERadialOptions> Option, AIcarusPlayerCharacter* PlayerCharacter);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
