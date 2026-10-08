// /Game/BP/Objects/World/Items/Deployables/Decorations/BP_ResearchEquipment_Microscope.BP_ResearchEquipment_Microscope_C
// Derives from: ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x738, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_ResearchEquipment_Microscope_C : public ABP_DeployableBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0728, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DEP_Lab_Microscope;  // 0x0730, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Deployable_Interact(AActor* Interactor);  // parameters 0x8
    UFUNCTION() void ExecuteUbergraph_BP_ResearchEquipment_Microscope(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void IsFunctional(bool& bFunctional);  // parameters 0x1
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void PlayAnimation();
};
