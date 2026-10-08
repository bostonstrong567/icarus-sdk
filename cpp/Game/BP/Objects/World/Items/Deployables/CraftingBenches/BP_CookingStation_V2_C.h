// /Game/BP/Objects/World/Items/Deployables/CraftingBenches/BP_CookingStation_V2.BP_CookingStation_V2_C
// Derives from: ABP_ProcessorBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x9A0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_CookingStation_V2_C : public ABP_ProcessorBase_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_ProxyMeshComponent_C* BP_ProxyMeshComponent;  // 0x0980, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DEP_Bench_Cooking_Proxy_Meat3;  // 0x0988, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DEP_Bench_Cooking_Proxy_Meat2;  // 0x0990, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DEP_Bench_Cooking_Proxy_Meat1;  // 0x0998, size 0x8
};
