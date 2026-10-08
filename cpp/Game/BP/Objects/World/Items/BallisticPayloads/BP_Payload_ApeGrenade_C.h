// /Game/BP/Objects/World/Items/BallisticPayloads/BP_Payload_ApeGrenade.BP_Payload_ApeGrenade_C
// Derives from: ABP_Payload_C > AIcarusPayload > AActor > UObject
// size 0x424, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Payload_ApeGrenade_C : public ABP_Payload_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0400, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_ApeGrenade;  // 0x0408, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UNiagaraComponent* NS_Water_Splash_02;  // 0x0410, size 0x8, named "NS Water Splash 02"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle PayloadTimerHandle;  // 0x0418, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float EffectiveRadius;  // 0x0420, size 0x4

    UFUNCTION(BlueprintCallable) void ApplyPayload();
    UFUNCTION() void ExecuteUbergraph_BP_Payload_ApeGrenade(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
