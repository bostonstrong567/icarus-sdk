// /Script/Icarus.ActorPrefab
// Derives from: AActor > UObject
// size 0x220, declared in Icarus/Source/Icarus/Systems/Prefab/ActorPrefab.h

UCLASS(Abstract, MinimalAPI, Config=Engine)
class AActorPrefab : public AActor
{
public:
    UFUNCTION(BlueprintCallable, BlueprintPure) UActorPrefabAsset* GetPrefabAsset();  // parameters 0x8

    // Virtual functions that start here:
    //   GetPrefabAsset
};
