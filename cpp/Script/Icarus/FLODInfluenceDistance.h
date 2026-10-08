// /Script/Icarus.FLODInfluenceDistance
// Derives from: UFLODInfluenceComponent > UActorComponent > UObject
// size 0xD0, declared in Icarus/Source/Icarus/Systems/FLOD/FLODInfluenceDistance.h

UCLASS(Config=Engine)
class UFLODInfluenceDistance : public UFLODInfluenceComponent
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DistanceInfluenceTimeout;  // 0x00C8, size 0x4
};
