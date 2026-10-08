// /Game/BP/Objects/World/Items/BallisticPayloads/BP_Payload_Nailgun.BP_Payload_Nailgun_C
// Derives from: ABP_Payload_C > AIcarusPayload > AActor > UObject
// size 0x408, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Payload_Nailgun_C : public ABP_Payload_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0400, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Payload_Nailgun(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnLoaded_1B0B55C04107A40F4718B7AB25FEDBD0(UObject* Loaded);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
