// /Game/BP/Objects/World/Items/WorldObjects/Missions/BP_SQ_TransportDrone_Proxy.BP_SQ_TransportDrone_Proxy_C
// Derives from: APawn > AActor > UObject
// size 0x2A8, a blueprint class, blueprint

UCLASS(Config=Game)
class ABP_SQ_TransportDrone_Proxy_C : public APawn
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USphereComponent* DummyAgentRadius;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFloatingPawnMovement* FloatingPawnMovement;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0298, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_SQ_Transport_Drone_C* LinkedDroneActor;  // 0x02A0, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_SQ_TransportDrone_Proxy(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceivePossessed(AController* NewController);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
};
