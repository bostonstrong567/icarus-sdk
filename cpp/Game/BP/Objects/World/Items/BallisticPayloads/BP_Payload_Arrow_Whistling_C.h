// /Game/BP/Objects/World/Items/BallisticPayloads/BP_Payload_Arrow_Whistling.BP_Payload_Arrow_Whistling_C
// Derives from: ABP_Payload_C > AIcarusPayload > AActor > UObject
// size 0x408, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Payload_Arrow_Whistling_C : public ABP_Payload_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0400, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Payload_Arrow_Whistling(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
};
