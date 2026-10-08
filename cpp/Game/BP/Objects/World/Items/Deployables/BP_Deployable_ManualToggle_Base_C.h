// /Game/BP/Objects/World/Items/Deployables/BP_Deployable_ManualToggle_Base.BP_Deployable_ManualToggle_Base_C
// Derives from: ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x733, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Deployable_ManualToggle_Base_C : public ABP_DeployableBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0728, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool bActiveState;  // 0x0730, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bWantedState;  // 0x0731, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool TurnDeviceOffOnBeginPlay;  // 0x0732, size 0x1

    UFUNCTION(BlueprintCallable) void ActiveUpdated(bool bNewActive);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void DeployableTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION() void ExecuteUbergraph_BP_Deployable_ManualToggle_Base(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable) void OnDeviceOnStateChanged(bool bIsOn);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void OnRep_bActiveState();
    UFUNCTION(BlueprintCallable) void TurnOffDevice();
};
