// /Script/Icarus.InventorySlotSaveData
// size 0x68, declared in Icarus/Source/Icarus/Systems/GameStateRecorder/ActorStateRecorderComponent.h

USTRUCT()
struct FInventorySlotSaveData
{
public:
    UPROPERTY(SaveGame) int32 Location;  // 0x0000, size 0x4
    UPROPERTY(SaveGame) FName ItemStaticData;  // 0x0004, size 0x8
    UPROPERTY(SaveGame) FString ItemGuid;  // 0x0010, size 0x10
    UPROPERTY(SaveGame) int32 ItemOwnerLookupId;  // 0x0020, size 0x4
    UPROPERTY(SaveGame) TArray<FInventorySlotDynamicData> DynamicData;  // 0x0028, size 0x10
    UPROPERTY(SaveGame) TArray<FInventorySlotStatData> AdditionalStats;  // 0x0038, size 0x10
    UPROPERTY(SaveGame) TArray<FInventorySlotAlterationData> Alterations;  // 0x0048, size 0x10
    UPROPERTY(SaveGame) TArray<FLivingItemSlotSaveData> LivingItemSlots;  // 0x0058, size 0x10
};
