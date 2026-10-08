// /Game/BP/Objects/World/Items/Deployables/CraftingBenches/BP_Herbalism_Bench.BP_Herbalism_Bench_C
// Derives from: ABP_ProcessorBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x9A8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Herbalism_Bench_C : public ABP_ProcessorBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0980, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_ProxyMeshComponent_C* BP_ProxyMeshComponent;  // 0x0988, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DEP_Bench_Herbalism_Proxy_Herb2;  // 0x0990, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DEP_Bench_Herbalism_Proxy_Herb1;  // 0x0998, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DEP_Bench_Herbalism_Proxy_Herb3;  // 0x09A0, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Herbalism_Bench(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
