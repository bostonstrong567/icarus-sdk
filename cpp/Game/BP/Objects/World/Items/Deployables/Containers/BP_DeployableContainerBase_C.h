// /Game/BP/Objects/World/Items/Deployables/Containers/BP_DeployableContainerBase.BP_DeployableContainerBase_C
// Derives from: ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x750, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_DeployableContainerBase_C : public ABP_DeployableBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0728, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSubclassOf<UUMG_IcarusLinkedActorPanel_C> WidgetClassToOpen;  // 0x0730, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ShowStoreAll;  // 0x0738, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ShowTakeAll;  // 0x0739, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UFMODEvent* PlayInteractAudio;  // 0x0740, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UFMODEvent* StopInterractAudio;  // 0x0748, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Deployable_Interact(AActor* Interactor);  // parameters 0x8
    UFUNCTION() void ExecuteUbergraph_BP_DeployableContainerBase(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnBecomeInteractedWith();
    UFUNCTION(BlueprintCallable) void OnNoLongerInteractedWith();
    UFUNCTION(BlueprintCallable) void PlayInterractAudio();
    UFUNCTION(BlueprintCallable) void PlayStopInterractAudio();
};
