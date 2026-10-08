// /Game/BP/Objects/World/Items/Deployables/AI/BP_Mammoth_Corpse_Icy.BP_Mammoth_Corpse_Icy_C
// Derives from: ABP_GOAP_Corpse_C > AIcarusGOAPCorpseBase > AIcarusCorpse > ASkeletalItem > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x7D8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Mammoth_Corpse_Icy_C : public ABP_GOAP_Corpse_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UGFurComponent* GFurLong;  // 0x07A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UGFurComponent* GFur;  // 0x07A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* IceArmour4;  // 0x07B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* IceArmour2;  // 0x07B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* IceArmour1;  // 0x07C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* IceArmour5;  // 0x07C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* IceArmour3;  // 0x07D0, size 0x8

    UFUNCTION(BlueprintCallable) void IsSkeletonUpdated();
    UFUNCTION(BlueprintCallable) void OnSkinnedStateUpdated();
};
