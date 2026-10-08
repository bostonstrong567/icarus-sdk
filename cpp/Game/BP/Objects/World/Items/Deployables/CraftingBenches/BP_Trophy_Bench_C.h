// /Game/BP/Objects/World/Items/Deployables/CraftingBenches/BP_Trophy_Bench.BP_Trophy_Bench_C
// Derives from: ABP_ProcessorBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x998, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Trophy_Bench_C : public ABP_ProcessorBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0980, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* ProxyMeshesCrafting;  // 0x0988, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UGFurComponent* GFur;  // 0x0990, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Trophy_Bench(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GrantBestiaryProgress(FProcessingItem Item);  // parameters 0x24
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
