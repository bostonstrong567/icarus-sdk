// /Script/Icarus.ItemStateRecorderComponent
// Derives from: UActorStateRecorderComponent > UIcarusStateRecorderComponent > UActorComponent > UObject
// size 0x250, declared in Icarus/Source/Icarus/Systems/GameStateRecorder/ItemStateRecorderComponent.h

UCLASS(Config=Engine)
class UItemStateRecorderComponent : public UActorStateRecorderComponent
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(SaveGame) FName StaticItemDataRowName;  // 0x01C0, size 0x8
    UPROPERTY(SaveGame) FString DatabaseGUID;  // 0x01C8, size 0x10
    UPROPERTY(SaveGame) int32 ItemOwnerLookupId;  // 0x01D8, size 0x4
    UPROPERTY(SaveGame) TArray<FItemRecordDynamicData> DynamicData;  // 0x01E0, size 0x10
    UPROPERTY(SaveGame) TArray<FItemRecordStatData> Stats;  // 0x01F0, size 0x10
    UPROPERTY(SaveGame) TArray<FItemRecordAlterationData> Alterations;  // 0x0200, size 0x10
    UPROPERTY(SaveGame) TArray<FLivingItemSlotSaveData> LivingItemSlots;  // 0x0210, size 0x10
    UPROPERTY(SaveGame) EIcarusItemContext SpawnedContext;  // 0x0220, size 0x1
    UPROPERTY(SaveGame) FIcarusItemConstructionParameters ConstructionParameters;  // 0x0228, size 0x28

    // Virtual functions that start here:
    //   ModifyOwnerSpawnParams
};
