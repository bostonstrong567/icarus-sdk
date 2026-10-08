// /Game/BP/AI/Bosses/Misc/BP_RadBoss_Spit_Large.BP_RadBoss_Spit_Large_C
// Derives from: ASkeletalProjectile > ASkeletalItem > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x590, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_RadBoss_Spit_Large_C : public ASkeletalProjectile
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0580, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_RadBoss_SpitProjectile_FX;  // 0x0588, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_RadBoss_Spit_Large(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void OnProjectileActivated();
    UFUNCTION(BlueprintImplementableEvent) void OnProjectileDeactivated();
};
