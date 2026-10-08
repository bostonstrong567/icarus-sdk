// /Script/Icarus.FLODRewardComponent
// Derives from: UActorComponent > UObject
// size 0xC8, declared in Icarus/Source/Icarus/Systems/FLOD/FLODRewardComponent.h

UCLASS(Config=Engine)
class UFLODRewardComponent : public UActorComponent
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FItemRewardsRowHandle ItemRewards;  // 0x00B0, size 0x18
};
