// /Game/BP/Objects/World/Items/WorldObjects/Missions/BP_Landmine_Burn.BP_Landmine_Burn_C
// Derives from: ABP_Landmine_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x7E0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Landmine_Burn_C : public ABP_Landmine_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* Flame;  // 0x07D8, size 0x8

    UFUNCTION(BlueprintCallable) void DoDamageToAI(AActor* Defender);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void DoDamageToPlayer(AActor* Defender);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void DoExplosionEffects(bool PlayBaseExplosionFX);  // parameters 0x1
};
