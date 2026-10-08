// /Game/BP/Objects/World/Items/BallisticPayloads/BP_Payload_ExtinguishFire.BP_Payload_ExtinguishFire_C
// Derives from: ABP_Payload_C > AIcarusPayload > AActor > UObject
// size 0x418, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Payload_ExtinguishFire_C : public ABP_Payload_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0400, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ExtinguishChance;  // 0x0408, size 0x4
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UNiagaraComponent* NS_Water_Splash_02;  // 0x0410, size 0x8, named "NS Water Splash 02"

    UFUNCTION() void ExecuteUbergraph_BP_Payload_ExtinguishFire(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
