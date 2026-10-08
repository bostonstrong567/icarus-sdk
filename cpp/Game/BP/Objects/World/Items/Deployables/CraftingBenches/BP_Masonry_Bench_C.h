// /Game/BP/Objects/World/Items/Deployables/CraftingBenches/BP_Masonry_Bench.BP_Masonry_Bench_C
// Derives from: ABP_ResourceNetworkProcessor_C > ABP_ProcessorBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x9C8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Masonry_Bench_C : public ABP_ResourceNetworkProcessor_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_ProxyMeshComponent_C* BP_ProxyMeshComponent;  // 0x09A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DEP_Bench_Masonry_Proxy_Stone3;  // 0x09B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DEP_Bench_Masonry_Proxy_Stone2;  // 0x09B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DEP_Bench_Masonry_Proxy_Stone1;  // 0x09C0, size 0x8
};
