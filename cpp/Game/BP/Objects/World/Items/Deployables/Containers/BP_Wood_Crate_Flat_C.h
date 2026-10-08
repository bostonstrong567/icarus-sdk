// /Game/BP/Objects/World/Items/Deployables/Containers/BP_Wood_Crate_Flat.BP_Wood_Crate_Flat_C
// Derives from: ABP_DeployableContainerBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x7C0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Wood_Crate_Flat_C : public ABP_DeployableContainerBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0750, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DEP_FlatCrate_SML;  // 0x0758, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UAudioOcclusionComponent* AudioOcclusion1;  // 0x0760, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionLocation_C* BP_UIProjectionLocation;  // 0x0768, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSet<AActor*> CurrentInteractors_0;  // 0x0770, size 0x50

    UFUNCTION() void ExecuteUbergraph_BP_Wood_Crate_Flat(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnBecomeInteractedWith();
    UFUNCTION(BlueprintCallable) void OnNoLongerInteractedWith();
};
