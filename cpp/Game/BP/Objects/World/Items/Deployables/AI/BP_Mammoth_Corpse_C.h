// /Game/BP/Objects/World/Items/Deployables/AI/BP_Mammoth_Corpse.BP_Mammoth_Corpse_C
// Derives from: ABP_GOAP_Corpse_C > AIcarusGOAPCorpseBase > AIcarusCorpse > ASkeletalItem > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x7B8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Mammoth_Corpse_C : public ABP_GOAP_Corpse_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionLocation_C* BP_UIProjectionLocation;  // 0x07A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UGFurComponent* GFurLong;  // 0x07A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UGFurComponent* GFur;  // 0x07B0, size 0x8

    UFUNCTION(BlueprintCallable) void IsSkeletonUpdated();
    UFUNCTION(BlueprintCallable) void OnSkinnedStateUpdated();
};
