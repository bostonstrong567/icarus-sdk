// /Game/BP/Objects/World/Items/Deployables/CraftingBenches/BP_Animal_Bench.BP_Animal_Bench_C
// Derives from: ABP_ProcessorBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x9C0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Animal_Bench_C : public ABP_ProcessorBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0980, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ITM_Saddle_ArcticExplorer;  // 0x0988, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_ProxyMeshComponent_C* BP_ProxyMeshComponent;  // 0x0990, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DEP_Bench_Animal_Proxy_3;  // 0x0998, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DEP_Bench_Animal_Proxy_2;  // 0x09A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DEP_Bench_Animal_Proxy_1;  // 0x09A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* ProxyMeshesInventory;  // 0x09B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* ProxyMeshesCrafting;  // 0x09B8, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Animal_Bench(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
