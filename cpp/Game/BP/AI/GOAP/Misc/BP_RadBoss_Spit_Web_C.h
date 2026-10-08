// /Game/BP/AI/GOAP/Misc/BP_RadBoss_Spit_Web.BP_RadBoss_Spit_Web_C
// Derives from: AStaticItem > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x588, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_RadBoss_Spit_Web_C : public AStaticItem
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_Sandworm_SpitProjectile_FX;  // 0x0580, size 0x8
};
