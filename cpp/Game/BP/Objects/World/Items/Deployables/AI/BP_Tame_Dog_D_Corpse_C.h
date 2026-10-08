// /Game/BP/Objects/World/Items/Deployables/AI/BP_Tame_Dog_D_Corpse.BP_Tame_Dog_D_Corpse_C
// Derives from: ABP_GOAP_Corpse_C > AIcarusGOAPCorpseBase > AIcarusCorpse > ASkeletalItem > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x7A8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Tame_Dog_D_Corpse_C : public ABP_GOAP_Corpse_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UGFurComponent* GFur;  // 0x07A0, size 0x8

    UFUNCTION(BlueprintCallable) void IsSkeletonUpdated();
    UFUNCTION(BlueprintCallable) void OnSkinnedStateUpdated();
    UFUNCTION(BlueprintCallable) void UpdateCosmeticMaterials();
    UFUNCTION(BlueprintCallable) void UpdateSkeletalMeshCarryPhysics(USkeletalMeshComponent* SkeletalMeshComponent);  // parameters 0x8
};
