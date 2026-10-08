// /Script/Icarus.FLODInfluencePlayer
// Derives from: UFLODInfluenceDistance > UFLODInfluenceComponent > UActorComponent > UObject
// size 0xE0, declared in Icarus/Source/Icarus/Systems/FLOD/FLODInfluencePlayer.h

UCLASS(Config=Engine)
class UFLODInfluencePlayer : public UFLODInfluenceDistance
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ViewTraceInfluenceTimeout;  // 0x00D0, size 0x4
    UPROPERTY() AIcarusPlayerController* RegisteredIcarusPlayerController;  // 0x00D8, size 0x8
};
