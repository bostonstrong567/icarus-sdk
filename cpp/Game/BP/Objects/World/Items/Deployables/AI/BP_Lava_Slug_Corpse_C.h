// /Game/BP/Objects/World/Items/Deployables/AI/BP_Lava_Slug_Corpse.BP_Lava_Slug_Corpse_C
// Derives from: ABP_GOAP_Corpse_C > AIcarusGOAPCorpseBase > AIcarusCorpse > ASkeletalItem > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x799, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Lava_Slug_Corpse_C : public ABP_GOAP_Corpse_C
{
public:
    UFUNCTION(BlueprintCallable) void OnSkinnedStateUpdated();
};
