// /Game/BP/Objects/World/Items/Deployables/AI/BP_Rooster_Corpse.BP_Rooster_Corpse_C
// Derives from: ABP_GOAP_Corpse_C > AIcarusGOAPCorpseBase > AIcarusCorpse > ASkeletalItem > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x7A0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Rooster_Corpse_C : public ABP_GOAP_Corpse_C
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ChickenColourIndex;  // 0x079C, size 0x4

    UFUNCTION(BlueprintCallable) void IsSkeletonUpdated();
    UFUNCTION(BlueprintCallable) void OnSkinnedStateUpdated();
};
