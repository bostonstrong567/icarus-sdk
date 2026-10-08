// /Game/BP/Objects/World/Items/Deployables/Containers/BP_Metal_Cupboard.BP_Metal_Cupboard_C
// Derives from: ABP_DeployableContainerBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x768, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Metal_Cupboard_C : public ABP_DeployableContainerBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0750, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DEP_Cupboard_Metal;  // 0x0758, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UAudioOcclusionComponent* AudioOcclusion1;  // 0x0760, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Metal_Cupboard(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnBecomeInteractedWith();
    UFUNCTION(BlueprintCallable) void OnNoLongerInteractedWith();
};
