// /Game/BP/Objects/World/Items/Deployables/CraftingBenches/BP_Masonry_Bench_T4.BP_Masonry_Bench_T4_C
// Derives from: ABP_ResourceNetworkProcessor_C > ABP_ProcessorBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x9B8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Masonry_Bench_T4_C : public ABP_ResourceNetworkProcessor_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_ProxyMeshComponent_C* BP_ProxyMeshComponent;  // 0x09A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DEP_Masonry_Bench_T4_Proxy_Input1;  // 0x09B0, size 0x8
};
