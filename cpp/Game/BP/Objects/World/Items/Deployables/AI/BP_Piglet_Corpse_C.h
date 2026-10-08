// /Game/BP/Objects/World/Items/Deployables/AI/BP_Piglet_Corpse.BP_Piglet_Corpse_C
// Derives from: ABP_GOAP_Corpse_C > AIcarusGOAPCorpseBase > AIcarusCorpse > ASkeletalItem > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x79A, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Piglet_Corpse_C : public ABP_GOAP_Corpse_C
{
public:
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, SaveGame, BlueprintReadWrite) bool HasWool;  // 0x0799, size 0x1
};
