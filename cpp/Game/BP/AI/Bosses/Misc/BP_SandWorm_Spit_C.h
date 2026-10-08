// /Game/BP/AI/Bosses/Misc/BP_SandWorm_Spit.BP_SandWorm_Spit_C
// Derives from: ASkeletalProjectile > ASkeletalItem > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x590, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_SandWorm_Spit_C : public ASkeletalProjectile
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0580, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_Sandworm_SpitProjectile_FX;  // 0x0588, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_SandWorm_Spit(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void OnProjectileDeactivated();
};
