// /Game/BP/Objects/World/Items/Deployables/Containers/BP_Lead_Lined_Crate_Small.BP_Lead_Lined_Crate_Small_C
// Derives from: ABP_Lead_Lined_Crate_Medium_C > ABP_DeployableContainerBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x790, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Lead_Lined_Crate_Small_C : public ABP_Lead_Lined_Crate_Medium_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0788, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Lead_Lined_Crate_Small(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnBecomeInteractedWith();
    UFUNCTION(BlueprintCallable) void OnNoLongerInteractedWith();
};
