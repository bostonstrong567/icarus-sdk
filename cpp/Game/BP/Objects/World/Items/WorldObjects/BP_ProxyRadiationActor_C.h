// /Game/BP/Objects/World/Items/WorldObjects/BP_ProxyRadiationActor.BP_ProxyRadiationActor_C
// Derives from: AIcarusActor > AActor > UObject
// size 0x2D0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_ProxyRadiationActor_C : public AIcarusActor
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x02C8, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_ProxyRadiationActor(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x1
};
