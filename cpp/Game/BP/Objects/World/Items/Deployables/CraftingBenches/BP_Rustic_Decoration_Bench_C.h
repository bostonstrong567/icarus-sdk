// /Game/BP/Objects/World/Items/Deployables/CraftingBenches/BP_Rustic_Decoration_Bench.BP_Rustic_Decoration_Bench_C
// Derives from: ABP_ProcessorBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x998, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Rustic_Decoration_Bench_C : public ABP_ProcessorBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0980, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* ProxyMeshesInventory;  // 0x0988, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* ProxyMeshesCrafting;  // 0x0990, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Rustic_Decoration_Bench(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
