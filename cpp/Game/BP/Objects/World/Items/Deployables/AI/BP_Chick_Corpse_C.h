// /Game/BP/Objects/World/Items/Deployables/AI/BP_Chick_Corpse.BP_Chick_Corpse_C
// Derives from: ABP_GOAP_Corpse_C > AIcarusGOAPCorpseBase > AIcarusCorpse > ASkeletalItem > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x7AC, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Chick_Corpse_C : public ABP_GOAP_Corpse_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UGFurComponent* GFur;  // 0x07A0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ChickenColourIndex;  // 0x07A8, size 0x4

    UFUNCTION(BlueprintCallable) void IsSkeletonUpdated();
    UFUNCTION(BlueprintCallable) void OnSkinnedStateUpdated();
};
