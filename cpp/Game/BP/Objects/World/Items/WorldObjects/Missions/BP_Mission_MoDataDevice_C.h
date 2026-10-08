// /Game/BP/Objects/World/Items/WorldObjects/Missions/BP_Mission_MoDataDevice.BP_Mission_MoDataDevice_C
// Derives from: ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x762, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Mission_MoDataDevice_C : public ABP_DeployableBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0728, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UResourceComponent* Resource;  // 0x0730, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* CommunicatorAudio;  // 0x0738, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UDurableComponent* Durable;  // 0x0740, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionLocation_C* BP_UIProjectionLocation;  // 0x0748, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHighlightableComponent* Highlightable;  // 0x0750, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UInteractableComponent* Interactable;  // 0x0758, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool Active;  // 0x0760, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool CanBeDestroyed;  // 0x0761, size 0x1

    UFUNCTION(BlueprintCallable, BlueprintPure) void CheckHealthAboveMinThreshold(bool& IsAboveThreshold);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Deployable_Interact(AActor* Interactor);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void DeviceOnStateChanged(bool bIsOn);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void Event_Damaged(UActorState* ActorState, int32 DamageTaken, const FDamageEvent& DamageEvent, AController* Instigator, AActor* DamageCauser);  // parameters 0x30, named "Event Damaged"
    UFUNCTION() void ExecuteUbergraph_BP_Mission_MoDataDevice(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable) void OnRep_Active();
};
