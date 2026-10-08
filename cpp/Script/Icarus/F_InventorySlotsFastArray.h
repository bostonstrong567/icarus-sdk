// /Script/Icarus.InventorySlotsFastArray
// size 0x158, declared in Icarus/Source/Icarus/Traits/Behaviours/Inventory/InventoryData.h

USTRUCT()
struct FInventorySlotsFastArray : public FFastArraySerializer
{
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TArray<FInventorySlot> Slots;  // 0x0108, size 0x10

    // Not reflected:
    TDelegate<void __cdecl(FInventorySlot const &,int),FDefaultDelegateUserPolicy> OnSlotAdded;  // 0x0118
    TDelegate<void __cdecl(FInventorySlot const &,int),FDefaultDelegateUserPolicy> OnSlotRemoved;  // 0x0128
    TDelegate<void __cdecl(FInventorySlot const &,int),FDefaultDelegateUserPolicy> OnSlotChanged;  // 0x0138
    TDelegate<void __cdecl(void),FDefaultDelegateUserPolicy> OnAllSlotsChanged;  // 0x0148
};
