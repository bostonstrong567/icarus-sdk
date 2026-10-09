// /Game/BP/Objects/World/Items/Deployables/AI/BP_Tame_Dog_B_Corpse.BP_Tame_Dog_B_Corpse_C
// Derives from: ABP_Tame_Dog_A_Corpse_C > ABP_GOAP_Corpse_C > AIcarusGOAPCorpseBase > AIcarusCorpse > ASkeletalItem > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x7B8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Tame_Dog_B_Corpse_C : public ABP_Tame_Dog_A_Corpse_C
{
public:
    UFUNCTION(BlueprintCallable) void OnSkinnedStateUpdated();
    UFUNCTION(BlueprintCallable) void UpdateCosmeticMaterials();
};
