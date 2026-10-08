// /Game/BP/Objects/World/Items/Deployables/AI/BP_Mammoth_Mount_Corpse.BP_Mammoth_Mount_Corpse_C
// Derives from: ABP_GOAP_Corpse_Mount_C > ABP_GOAP_Corpse_C > AIcarusGOAPCorpseBase > AIcarusCorpse > ASkeletalItem > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x7D0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Mammoth_Mount_Corpse_C : public ABP_GOAP_Corpse_Mount_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionLocation_C* BP_UIProjectionLocation;  // 0x07B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UGFurComponent* GFurLong;  // 0x07C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UGFurComponent* GFur;  // 0x07C8, size 0x8

    UFUNCTION(BlueprintCallable) void IsSkeletonUpdated();
    UFUNCTION(BlueprintCallable) void OnSkinnedStateUpdated();
};
