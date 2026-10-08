// /Game/BP/Objects/World/Items/Deployables/AI/BP_Tame_Dog_A_Corpse.BP_Tame_Dog_A_Corpse_C
// Derives from: ABP_GOAP_Corpse_C > AIcarusGOAPCorpseBase > AIcarusCorpse > ASkeletalItem > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x7B8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Tame_Dog_A_Corpse_C : public ABP_GOAP_Corpse_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UGFurComponent* GFur;  // 0x07A0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FStatsEnum SkinVariationStat;  // 0x07A8, size 0x10

    UFUNCTION(BlueprintCallable) void OnSkinnedStateUpdated();
    UFUNCTION(BlueprintCallable) void UpdateCosmeticMaterials();
};
