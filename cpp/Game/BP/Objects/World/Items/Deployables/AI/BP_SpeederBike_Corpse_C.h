// /Game/BP/Objects/World/Items/Deployables/AI/BP_SpeederBike_Corpse.BP_SpeederBike_Corpse_C
// Derives from: ABP_GOAP_Corpse_Mount_C > ABP_GOAP_Corpse_C > AIcarusGOAPCorpseBase > AIcarusCorpse > ASkeletalItem > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x7C8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_SpeederBike_Corpse_C : public ABP_GOAP_Corpse_Mount_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* StaticMesh;  // 0x07B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* Niagara_BrokenFX;  // 0x07C0, size 0x8

    UFUNCTION(BlueprintCallable) void SetupMountCorpse();
};
