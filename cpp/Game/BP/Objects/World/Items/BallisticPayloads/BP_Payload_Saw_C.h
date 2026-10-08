// /Game/BP/Objects/World/Items/BallisticPayloads/BP_Payload_Saw.BP_Payload_Saw_C
// Derives from: ABP_Payload_C > AIcarusPayload > AActor > UObject
// size 0x438, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Payload_Saw_C : public ABP_Payload_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0400, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_FLODInfluence_TreeToppler_C* BP_FLODInfluence_TreeToppler;  // 0x0408, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CurrentClosest;  // 0x0410, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFLODInstanceID CurrentInstanceID;  // 0x0414, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FFLODInstanceID> Instances;  // 0x0428, size 0x10

    UFUNCTION() void ExecuteUbergraph_BP_Payload_Saw(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveActorBeginOverlap(AActor* OtherActor);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
