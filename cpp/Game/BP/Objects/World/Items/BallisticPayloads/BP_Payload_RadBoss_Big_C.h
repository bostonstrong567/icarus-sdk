// /Game/BP/Objects/World/Items/BallisticPayloads/BP_Payload_RadBoss_Big.BP_Payload_RadBoss_Big_C
// Derives from: ABP_Payload_C > AIcarusPayload > AActor > UObject
// size 0x430, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Payload_RadBoss_Big_C : public ABP_Payload_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0400, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_Sandworm_SpitHit_FX;  // 0x0408, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<AActor*> EffectedActors;  // 0x0410, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<AActor*> HitActors;  // 0x0420, size 0x10

    UFUNCTION() void ExecuteUbergraph_BP_Payload_RadBoss_Big(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
