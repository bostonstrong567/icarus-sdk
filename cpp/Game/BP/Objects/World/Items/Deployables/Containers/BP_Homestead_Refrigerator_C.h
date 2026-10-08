// /Game/BP/Objects/World/Items/Deployables/Containers/BP_Homestead_Refrigerator.BP_Homestead_Refrigerator_C
// Derives from: ABP_DeployableContainerBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x760, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Homestead_Refrigerator_C : public ABP_DeployableContainerBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0750, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DEP_Fridge;  // 0x0758, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Homestead_Refrigerator(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable) void OnBecomeInteractedWith();
    UFUNCTION(BlueprintCallable) void OnDeviceResourceChanged(FIcarusResourcesEnum ResourceType);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnNoLongerInteractedWith();
    UFUNCTION(BlueprintCallable) void UpdateModifierState();
};
