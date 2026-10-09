// /Script/Icarus.FLODTreePrefabPool
// Derives from: UFLODActorPool > UObject
// size 0x50, declared in Icarus/Source/Icarus/Systems/FLOD/FLODActorPool.h

UCLASS()
class UFLODTreePrefabPool : public UFLODActorPool
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY() ATreePrefab* TreePrefab;  // 0x0048, size 0x8
};
