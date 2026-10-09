// /Script/Icarus.ActorPrefabAsset
// Derives from: UDataAsset > UObject
// size 0x30, declared in Icarus/Source/Icarus/Systems/Prefab/ActorPrefab.h

UCLASS(Abstract)
class UActorPrefabAsset : public UDataAsset
{
public:
    UFUNCTION(BlueprintCallable, BlueprintPure) TArray<AActor*> DeserializePrefab(UActorPrefabFunctionLibrary* PrefabLibrary, AActor* PrefabActor) const;  // parameters 0x20

    // Virtual functions that start here:
    //   DeserializePrefab
};
