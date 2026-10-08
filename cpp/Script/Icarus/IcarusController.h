// /Script/Icarus.IcarusController
// Derives from: APlayerController > AController > AActor > UObject
// size 0x598, declared in Icarus/Source/Icarus/Controllers/IcarusController.h

UCLASS(NotPlaceable, Config=Game)
class AIcarusController : public APlayerController
{
public:
    UPROPERTY(BlueprintAssignable) FItemGained OnItemGained;  // 0x0590, size 0x1

    UFUNCTION(BlueprintNativeEvent) TArray<UInventory*> GetDynamicWidgetInventories();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsOnProspect() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent) void OnServer_AddItem(FItemData ItemTemplate);  // parameters 0x1F0
    UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent) void OnServer_AddItemCheat(UInventory* SourceInventory, FItemData ItemData);  // parameters 0x1F8
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void OnServer_BounceItem(FItemData Item);  // parameters 0x1F0
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void OnServer_QuickMoveItem(UInventory* Inventory, int32 Slot, TArray<UInventory*> LinkedActorInventories);  // parameters 0x20
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void OnServer_QuickMoveType(UInventory* Inventory, int32 Slot, TArray<UInventory*> LinkedActorInventories);  // parameters 0x20
    UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent) void OnServer_ShiftItem(UInventory* SourceInventory, int32 SourceLocation, UInventory* DestinationInventory, int32 DestinationLocation, int32 Amount);  // parameters 0x20
    UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent) void OnServer_ShiftItemAuto(UInventory* SourceInventory, int32 SourceLocation, UInventory* DestinationInventory);  // parameters 0x18
    UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent) void OnServer_TakeAll(UInventory* Inventory, bool bSkipBags);  // parameters 0x9
    UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent) void OnServer_TransferAll(UInventory* FromInventory, UInventory* ToInventory);  // parameters 0x10
    UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent) void OnServer_TransferAllOfType(UInventory* FromInventory, UInventory* ToInventory, FItemsStaticRowHandle Type);  // parameters 0x28
    UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent) void OnServer_TransferLike(UInventory* FromInventory, UInventory* ToInventory);  // parameters 0x10
    UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent) void OnServer_UseItem(UInventory* SourceInventory, int32 SourceLocation, FUsesEnum Use, AIcarusCharacter* TargetCharacter);  // parameters 0x28
    UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent) void OnServer_UseItemAuto(UInventory* SourceInventory, int32 SourceLocation, FUsesEnum Use);  // parameters 0x20
    UFUNCTION(BlueprintCallable) bool PickupAll(UInventory* Inventory);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void ShiftItem(UInventory* SourceInventory, int32 SourceLocation, UInventory* DestinationInventory, int32 DestinationLocation, int32 Amount);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void TriggerQuickMove(UInventory* Inventory, int32 Slot);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void TriggerQuickMoveType(UInventory* Inventory, int32 Slot);  // parameters 0xC

    // Virtual functions that start here:
    //   GetIcarusCharacter, Internal_AddItem, Internal_BounceItem, IsOnProspect, ShiftItem
    //   TriggerQuickMove, TriggerQuickMoveType
};
