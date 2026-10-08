// /Game/BP/Objects/World/Items/Deployables/AI/BP_MammothDesert_Corpse.BP_MammothDesert_Corpse_C
// Derives from: ABP_GOAP_Corpse_C > AIcarusGOAPCorpseBase > AIcarusCorpse > ASkeletalItem > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x7B0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_MammothDesert_Corpse_C : public ABP_GOAP_Corpse_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionLocation_C* BP_UIProjectionLocation;  // 0x07A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UGFurComponent* GFur;  // 0x07A8, size 0x8

    UFUNCTION(BlueprintCallable) void OnSkinnedStateUpdated();
};
