// /Game/BP/Objects/World/Items/Deployables/CraftingBenches/BP_Advanced_Kitchen_Bench.BP_Advanced_Kitchen_Bench_C
// Derives from: ABP_ResourceNetworkProcessor_C > ABP_ProcessorBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x9B8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Advanced_Kitchen_Bench_C : public ABP_ResourceNetworkProcessor_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x09A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* ProxyMeshesCrafting;  // 0x09B0, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Advanced_Kitchen_Bench(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
