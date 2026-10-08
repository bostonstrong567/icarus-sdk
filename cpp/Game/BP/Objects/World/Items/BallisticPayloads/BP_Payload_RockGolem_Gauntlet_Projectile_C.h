// /Game/BP/Objects/World/Items/BallisticPayloads/BP_Payload_RockGolem_Gauntlet_Projectile.BP_Payload_RockGolem_Gauntlet_Projectile_C
// Derives from: ABP_Payload_C > AIcarusPayload > AActor > UObject
// size 0x480, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Payload_RockGolem_Gauntlet_Projectile_C : public ABP_Payload_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0400, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) URadialForceComponent* RadialForce;  // 0x0408, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_Sandworm_SpitHit_FX;  // 0x0410, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<AActor*> EffectedActors;  // 0x0418, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float AffectRadius;  // 0x0428, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<EIcarusDamageType, int32> DamageToApply;  // 0x0430, size 0x50

    UFUNCTION() void ExecuteUbergraph_BP_Payload_RockGolem_Gauntlet_Projectile(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
};
