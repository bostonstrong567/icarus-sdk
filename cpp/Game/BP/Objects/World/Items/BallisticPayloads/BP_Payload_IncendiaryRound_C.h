// /Game/BP/Objects/World/Items/BallisticPayloads/BP_Payload_IncendiaryRound.BP_Payload_IncendiaryRound_C
// Derives from: ABP_Payload_C > AIcarusPayload > AActor > UObject
// size 0x408, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Payload_IncendiaryRound_C : public ABP_Payload_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0400, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Payload_IncendiaryRound(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, NetMulticast) void MULTI_SpawnEffects();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
