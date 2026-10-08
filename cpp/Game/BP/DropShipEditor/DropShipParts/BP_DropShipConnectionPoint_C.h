// /Game/BP/DropShipEditor/DropShipParts/BP_DropShipConnectionPoint.BP_DropShipConnectionPoint_C
// Derives from: AIcarusRocketPartConnector > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x5A0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_DropShipConnectionPoint_C : public AIcarusRocketPartConnector
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0590, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Sphere;  // 0x0598, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_DropShipConnectionPoint(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnConnectionUpdated();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
