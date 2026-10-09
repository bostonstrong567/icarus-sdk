// /Script/Icarus.IcarusContainerManagerRecorderComponent
// Derives from: UActorStateRecorderComponent > UIcarusStateRecorderComponent > UActorComponent > UObject
// size 0x1E0, declared in Icarus/Source/Icarus/Inventory/ContainerManager/IcarusContainerManagerRecorderComponent.h

UCLASS(Config=Engine)
class UIcarusContainerManagerRecorderComponent : public UActorStateRecorderComponent
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(SaveGame) int32 NumInventories;  // 0x01C0, size 0x4
    UPROPERTY(SaveGame) TArray<FSavedInventoryContainerData> SavedInventoryContainers;  // 0x01C8, size 0x10
};
