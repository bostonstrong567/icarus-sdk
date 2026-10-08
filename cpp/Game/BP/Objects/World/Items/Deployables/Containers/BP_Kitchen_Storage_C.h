// /Game/BP/Objects/World/Items/Deployables/Containers/BP_Kitchen_Storage.BP_Kitchen_Storage_C
// Derives from: ABP_DeployableContainerBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x760, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Kitchen_Storage_C : public ABP_DeployableContainerBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0750, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UAudioOcclusionComponent* AudioOcclusion1;  // 0x0758, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Kitchen_Storage(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnBecomeInteractedWith();
    UFUNCTION(BlueprintCallable) void OnNoLongerInteractedWith();
};
