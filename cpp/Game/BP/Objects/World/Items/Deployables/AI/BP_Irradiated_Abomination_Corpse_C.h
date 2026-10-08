// /Game/BP/Objects/World/Items/Deployables/AI/BP_Irradiated_Abomination_Corpse.BP_Irradiated_Abomination_Corpse_C
// Derives from: ABP_GOAP_Corpse_C > AIcarusGOAPCorpseBase > AIcarusCorpse > ASkeletalItem > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x799, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Irradiated_Abomination_Corpse_C : public ABP_GOAP_Corpse_C
{
public:

    UFUNCTION(BlueprintCallable) void IsSkeletonUpdated();
    UFUNCTION(BlueprintCallable) void OnSkinnedStateUpdated();
    UFUNCTION(BlueprintCallable) void Populate_Contents(float Multiplier, AIcarusPlayerCharacter* Player, bool ForcePopulateCorpse);  // parameters 0x11, named "Populate Contents"
    UFUNCTION(BlueprintCallable) void UpdateCosmeticMaterials();
};
