// /Game/BP/Objects/World/Items/Deployables/Doors/BP_Door_Base.BP_Door_Base_C
// Derives from: ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x764, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Door_Base_C : public ABP_DeployableBase_C, public IAudioOccluderInterface
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0728, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBoxComponent* PlacementBlockerBox;  // 0x0730, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UAudioOcclusionComponent* AudioOcclusion1;  // 0x0738, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) TEnumAsByte<DoorState> DoorState;  // 0x0740, size 0x1
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FOpenStateChanged OpenStateChanged;  // 0x0748, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle DelayedDirtyTimer;  // 0x0758, size 0x8
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) int32 DoorStateSaved;  // 0x0760, size 0x4

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Deployable_Interact(AActor* Interactor);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void DirtyNavigation();
    UFUNCTION(BlueprintCallable) void DisableForcedAnimUpdates();
    UFUNCTION() void ExecuteUbergraph_BP_Door_Base(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) float GetOcclusionValue() const;  // parameters 0x4
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable) void OnRep_DoorState();
    UFUNCTION(BlueprintCallable) void OpenCloseDoor(FHitResult HitResult);  // parameters 0x88
    UFUNCTION(BlueprintCallable) void OpenStateChanged__DelegateSignature(bool Open);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void ScheduleDelayedOpenableStateCheck();
    UFUNCTION(BlueprintCallable) void SetOpenableStateOnFoundationActor();
    UFUNCTION(BlueprintCallable) void TemporarilyForceAnimUpdates();
    UFUNCTION(BlueprintCallable) void ValidateAsset();
};
