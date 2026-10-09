// /Game/BP/Objects/World/Items/Deployables/AI/BP_RockGolem_Juvie_Corpse_Arctic.BP_RockGolem_Juvie_Corpse_Arctic_C
// Derives from: ABP_RockGolem_Juvie_Corpse_C > ABP_GOAP_Corpse_C > AIcarusGOAPCorpseBase > AIcarusCorpse > ASkeletalItem > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x799, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_RockGolem_Juvie_Corpse_Arctic_C : public ABP_RockGolem_Juvie_Corpse_C
{
public:
    UFUNCTION(BlueprintCallable) void IsSkeletonUpdated();
    UFUNCTION(BlueprintCallable) void OnSkinnedStateUpdated();
};
