// /Game/BP/Objects/World/Items/Deployables/CraftingBenches/BP_Sewing_Machine.BP_Sewing_Machine_C
// Derives from: ABP_ProcessorBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x998, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Sewing_Machine_C : public ABP_ProcessorBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0980, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DEP_Bench_Sewing_Machine;  // 0x0988, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* Sewing_Loop;  // 0x0990, size 0x8, named "Sewing Loop"

    UFUNCTION() void ExecuteUbergraph_BP_Sewing_Machine(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnProcessorStateUpdated(bool bIsActive);  // parameters 0x1
};
