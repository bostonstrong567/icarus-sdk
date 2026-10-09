// /Game/BP/Objects/World/Items/Deployables/AI/BP_Rad_Broodling_Corpse.BP_Rad_Broodling_Corpse_C
// Derives from: ABP_GOAP_Corpse_C > AIcarusGOAPCorpseBase > AIcarusCorpse > ASkeletalItem > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x799, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Rad_Broodling_Corpse_C : public ABP_GOAP_Corpse_C
{
public:
    UFUNCTION(BlueprintCallable) void OnSkinnedStateUpdated();
};
