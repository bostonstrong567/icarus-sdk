// /Game/BP/Objects/World/Items/BallisticPayloads/BP_Payload_Frag_Grenade.BP_Payload_Frag_Grenade_C
// Derives from: ABP_Payload_C > AIcarusPayload > AActor > UObject
// size 0x428, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Payload_Frag_Grenade_C : public ABP_Payload_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0400, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float BurnRadius;  // 0x0408, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float InnerRadius;  // 0x040C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DefaultRadius;  // 0x0410, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DefaultDamage;  // 0x0414, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float EmitterScale;  // 0x0418, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UFMODEvent* ExplosionSound;  // 0x0420, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Payload_Frag_Grenade(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetExplosiveAttributes(float& Damage, float& Radius);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void SpawningComplete();
};
