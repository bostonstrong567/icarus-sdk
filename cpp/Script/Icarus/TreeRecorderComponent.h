// /Script/Icarus.TreeRecorderComponent
// Derives from: UActorStateRecorderComponent > UIcarusStateRecorderComponent > UActorComponent > UObject
// size 0x1F0, declared in Icarus/Source/Icarus/Systems/GameStateRecorder/TreeRecorderComponent.h

UCLASS(Config=Engine)
class UTreeRecorderComponent : public UActorStateRecorderComponent
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(SaveGame) FName TreePrefabClassName;  // 0x01C0, size 0x8
    UPROPERTY(SaveGame) TArray<int32> TreePrimitiveMask;  // 0x01C8, size 0x10
    UPROPERTY(SaveGame) FName RootName;  // 0x01D8, size 0x8
    UPROPERTY(SaveGame) bool bIsPhysicsDynamic;  // 0x01E0, size 0x1
};
