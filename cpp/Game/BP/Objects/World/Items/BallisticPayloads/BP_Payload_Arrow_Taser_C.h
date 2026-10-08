// /Game/BP/Objects/World/Items/BallisticPayloads/BP_Payload_Arrow_Taser.BP_Payload_Arrow_Taser_C
// Derives from: ABP_Payload_C > AIcarusPayload > AActor > UObject
// size 0x418, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Payload_Arrow_Taser_C : public ABP_Payload_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0400, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float InnerRadius;  // 0x0408, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float OuterRadius;  // 0x040C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* DamageCharacterSound;  // 0x0410, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Payload_Arrow_Taser(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
