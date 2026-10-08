// /Game/BP/AI/GOAP/Misc/BP_Spider_Spit.BP_Spider_Spit_C
// Derives from: AStaticItem > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x588, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Spider_Spit_C : public AStaticItem
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_Sandworm_SpitProjectile_FX;  // 0x0580, size 0x8
};
