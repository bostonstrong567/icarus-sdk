// /Game/BP/Objects/World/Items/BallisticPayloads/BP_Payload_SandwormSpit.BP_Payload_SandwormSpit_C
// Derives from: ABP_Payload_C > AIcarusPayload > AActor > UObject
// size 0x420, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Payload_SandwormSpit_C : public ABP_Payload_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0400, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_Sandworm_SpitHit_FX;  // 0x0408, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<AActor*> EffectedActors;  // 0x0410, size 0x10

    UFUNCTION() void ExecuteUbergraph_BP_Payload_SandwormSpit(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
