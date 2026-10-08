// /Game/BP/Objects/World/Items/Deployables/Containers/BP_Advanced_Kitchen_Sink.BP_Advanced_Kitchen_Sink_C
// Derives from: ABP_DeployableContainerBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x768, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Advanced_Kitchen_Sink_C : public ABP_DeployableContainerBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0750, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UAudioOcclusionComponent* AudioOcclusion1;  // 0x0758, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ContainerFillUnitsPerSecond;  // 0x0760, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ContainerFillTickRate;  // 0x0764, size 0x4

    UFUNCTION(BlueprintCallable) void ContainerFillTimerTick();
    UFUNCTION() void ExecuteUbergraph_BP_Advanced_Kitchen_Sink(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetWaterModifiers(TArray<FAlterationsEnum>& Array);  // parameters 0x10
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable) void OnBecomeInteractedWith();
    UFUNCTION(BlueprintCallable) void OnNoLongerInteractedWith();
    UFUNCTION(BlueprintCallable) void TryAddWaterToContainers();
};
