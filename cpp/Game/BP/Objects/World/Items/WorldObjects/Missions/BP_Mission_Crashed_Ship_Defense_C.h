// /Game/BP/Objects/World/Items/WorldObjects/Missions/BP_Mission_Crashed_Ship_Defense.BP_Mission_Crashed_Ship_Defense_C
// Derives from: ABP_Mission_Crashed_Ship_Base_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x839, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Mission_Crashed_Ship_Defense_C : public ABP_Mission_Crashed_Ship_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x07C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UDestructibleComponent* Destructible;  // 0x07C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UGenericAITargetComponent* GenericAITarget;  // 0x07D0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FStatsEnum, int32> In_Stats;  // 0x07D8, size 0x50, named "In Stats"
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FReboot Reboot;  // 0x0828, size 0x10
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool DestroyedVisualsActive;  // 0x0838, size 0x1

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Deployable_Interact(AActor* Interactor);  // parameters 0x8
    UFUNCTION() void ExecuteUbergraph_BP_Mission_Crashed_Ship_Defense(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GenericAction();
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void MULTICAST_PlayExplostionFX();
    UFUNCTION(BlueprintCallable) void OnRep_DestroyedVisualsActive();
    UFUNCTION(BlueprintCallable) void Reboot__DelegateSignature();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void SetDestroyedVisuals();
    UFUNCTION(BlueprintCallable) void TriggerLaunch();
};
