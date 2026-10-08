// /Game/BP/AI/Bosses/Misc/BP_Fireball.BP_Fireball_C
// Derives from: ASkeletalProjectile > ASkeletalItem > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x598, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Fireball_C : public ASkeletalProjectile
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0580, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight;  // 0x0588, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_Projectile_Fireball;  // 0x0590, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Fireball(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
