// /Game/BP/Objects/World/Items/Deployables/AI/BP_Mount_Horse_Standard_Corpse.BP_Mount_Horse_Standard_Corpse_C
// Derives from: ABP_GOAP_Corpse_Mount_C > ABP_GOAP_Corpse_C > AIcarusGOAPCorpseBase > AIcarusCorpse > ASkeletalItem > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x7B8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Mount_Horse_Standard_Corpse_C : public ABP_GOAP_Corpse_Mount_C
{
public:
    UFUNCTION(BlueprintCallable) void IsSkeletonUpdated();
    UFUNCTION(BlueprintCallable) void OnSkinnedStateUpdated();
    UFUNCTION(BlueprintCallable) void UpdateCosmeticMaterials();
    UFUNCTION(BlueprintCallable) void UpdateSkeletalMeshCarryPhysics(USkeletalMeshComponent* SkeletalMeshComponent);  // parameters 0x8
};
