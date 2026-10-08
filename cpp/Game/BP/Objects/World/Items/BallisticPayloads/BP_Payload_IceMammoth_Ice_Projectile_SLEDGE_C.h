// /Game/BP/Objects/World/Items/BallisticPayloads/BP_Payload_IceMammoth_Ice_Projectile_SLEDGE.BP_Payload_IceMammoth_Ice_Projectile_SLEDGE_C
// Derives from: ABP_Payload_C > AIcarusPayload > AActor > UObject
// size 0x421, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Payload_IceMammoth_Ice_Projectile_SLEDGE_C : public ABP_Payload_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0400, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_IceMammoth_Payload;  // 0x0408, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<AIcarusPlayerCharacter*> EffectedActors;  // 0x0410, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool DidDirectHit;  // 0x0420, size 0x1

    UFUNCTION() void ExecuteUbergraph_BP_Payload_IceMammoth_Ice_Projectile_SLEDGE(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void TryProjectileDamage(bool& Damaged);  // parameters 0x1
};
