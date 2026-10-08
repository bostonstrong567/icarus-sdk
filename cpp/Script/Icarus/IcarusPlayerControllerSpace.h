// /Script/Icarus.IcarusPlayerControllerSpace
// Derives from: AIcarusPlayerController > AIcarusController > APlayerController > AController > AActor > UObject
// size 0x7E8, declared in Icarus/Source/Icarus/Controllers/IcarusPlayerControllerSpace.h

UCLASS(NotPlaceable, Config=Game)
class AIcarusPlayerControllerSpace : public AIcarusPlayerController
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector CustomUp;  // 0x07C0, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CustomUpSlerp;  // 0x07CC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CustomUpPitchMax;  // 0x07D0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CustomUpPitchMin;  // 0x07D4, size 0x4
    UPROPERTY(BlueprintAssignable) FSessionInfoUpdatedSignature SessionInfoUpdated;  // 0x07D8, size 0x10

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void AcceptSessionInvite(FIcarusSession SessionToJoin);  // parameters 0x1C0
    UFUNCTION(BlueprintCallable, BlueprintPure) bool FindLoadoutScreenQuickMoveTarget(UInventory* SourceInventory, int32 SourceSlot, UInventory*& DestinationInventory, int32& DestinationSlot, int32& AmountCanMove) const;  // parameters 0x21
    UFUNCTION(BlueprintCallable) void InitMetaInventory();
    UFUNCTION() void LoadoutInventorySlotUpdatedEventHandler(FString DatabaseGUID, const FMetaItem& MetaItem);  // parameters 0x50
    UFUNCTION() void LoadoutInventoryUpdatedEventHandler();
    UFUNCTION() void MetaInventorySlotUpdatedEventHandler(FString DatabaseGUID, const FMetaItem& MetaItem);  // parameters 0x50
    UFUNCTION() void MetaInventoryUpdatedEventHandler();
    UFUNCTION(BlueprintNativeEvent) void OnActiveCharacterSet();
    UFUNCTION() void OnAvailableSessionsUpdated();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void ReturnToCharacterSelect();
    UFUNCTION() void SyncInventory(UInventory* Inventory, TArray<FMetaItem>& MetaItems);  // parameters 0x18
    UFUNCTION() void SyncInventorySlot(UInventory* Inventory, FString DatabaseGUID, const FMetaItem& MetaItem);  // parameters 0x58

    // Virtual functions that start here:
    //   OnActiveCharacterSet_Implementation
};
