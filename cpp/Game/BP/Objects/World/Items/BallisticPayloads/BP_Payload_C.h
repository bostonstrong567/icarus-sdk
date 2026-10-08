// /Game/BP/Objects/World/Items/BallisticPayloads/BP_Payload.BP_Payload_C
// Derives from: AIcarusPayload > AActor > UObject
// size 0x3FC, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Payload_C : public AIcarusPayload
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x03E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x03F0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float BaseDamage;  // 0x03F8, size 0x4

    UFUNCTION() void ExecuteUbergraph_BP_Payload(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void TryPlayAudio();
};
