// /Script/Icarus.FLODTreePrefabPool
// Derives from: UFLODActorPool > UObject
// size 0x50, declared in Icarus/Source/Icarus/Systems/FLOD/FLODActorPool.h

UCLASS()
class UFLODTreePrefabPool : public UFLODActorPool
{
public:
    UPROPERTY() ATreePrefab* TreePrefab;  // 0x0048, size 0x8
};
