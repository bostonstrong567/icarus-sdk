// /Game/BP/Objects/World/Items/BallisticPayloads/BP_Payload_Explosive.BP_Payload_Explosive_C
// Derives from: ABP_Payload_C > AIcarusPayload > AActor > UObject
// size 0x414, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Payload_Explosive_C : public ABP_Payload_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0400, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float InnerRadius;  // 0x0408, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DefaultOuterRadius;  // 0x040C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DefaultDamage;  // 0x0410, size 0x4

    UFUNCTION() void ExecuteUbergraph_BP_Payload_Explosive(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetDamageStats(float& OuterRadius, float& Damage);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void SpawningComplete();
};
