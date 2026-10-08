// /Game/BP/Objects/World/Items/BallisticPayloads/BP_Payload_RadBoss_WebSpit.BP_Payload_RadBoss_WebSpit_C
// Derives from: ABP_Payload_C > AIcarusPayload > AActor > UObject
// size 0x418, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Payload_RadBoss_WebSpit_C : public ABP_Payload_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0400, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_WebProjectileImpact;  // 0x0408, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Damage;  // 0x0410, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Radius;  // 0x0414, size 0x4

    UFUNCTION() void ExecuteUbergraph_BP_Payload_RadBoss_WebSpit(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetExplosiveAttributes(float& Damage, float& Radius);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void SpawnWeb();
};
