// /Script/Icarus.IcarusPreviewCharacter
// Derives from: ACharacter > APawn > AActor > UObject
// size 0x610, declared in Icarus/Source/Icarus/Characters/IcarusPreviewCharacter.h

UCLASS(Config=Game)
class AIcarusPreviewCharacter : public ACharacter, public IModifiableInterface, public IAITargetable
{
public:
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UInventoryComponent* InventoryComponent;  // 0x04C8, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UInventory* EnvirosuitInventory;  // 0x04D0, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UInventory* BackpackInventory;  // 0x04D8, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UInventory* QuickbarInventory;  // 0x04E0, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UInventory* EquipmentInventory;  // 0x04E8, size 0x8
    UPROPERTY(BlueprintReadOnly) TArray<USkeletalMeshComponent*> ArmourComponents;  // 0x04F0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsMale;  // 0x0500, size 0x1
private:
    FStreamableManager StreamableManager;  // 0x0508, not reflected
    TArray<TSharedPtr<FStreamableHandle,0>,TSizedDefaultAllocator<32> > EquipmentStreamingHandles;  // 0x05F0, not reflected
    bool HasSetupCosmetics;  // 0x0600, not reflected
public:
    UFUNCTION() USkeletalMeshComponent* FindOrCreateEquipmentComponent(int32 ForSlot, const FArmourData& WithData);  // parameters 0x310
    UFUNCTION() void OnEquipmentInventoryUpdated(UInventory* Inventory, int32 UpdatedSlot);  // parameters 0xC
    UFUNCTION(BlueprintNativeEvent) void SetupCharacterCosmetics();
    UFUNCTION(BlueprintCallable) void UpdateAllEquipment();
    UFUNCTION(BlueprintCallable) bool UpdateEquipmentForSlot(int32 SlotNum, const FArmourData& Data);  // parameters 0x309

    // Virtual functions that start here:
    //   SetupCharacterCosmetics_Implementation
};
