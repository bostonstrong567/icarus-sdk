// /Game/BP/Objects/World/Items/Deployables/Windows/BP_Window_Base.BP_Window_Base_C
// Derives from: ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x760, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Window_Base_C : public ABP_DeployableBase_C, public IAudioOccluderInterface
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0728, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UAudioOcclusionComponent* AudioOcclusion1;  // 0x0730, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_WeatherAudioComponent_WindowShutter_C* BP_WeatherAudioComponent_WindowShutter;  // 0x0738, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, SaveGame, BlueprintReadWrite) bool Open;  // 0x0740, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool CanChangeState;  // 0x0741, size 0x1
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FOpenStateChanged OpenStateChanged;  // 0x0748, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle DelayedDirtyTimer;  // 0x0758, size 0x8

    UFUNCTION(BlueprintCallable) void DirtyShelter();
    UFUNCTION(BlueprintCallable) void DisableForcedAnimUpdates();
    UFUNCTION() void ExecuteUbergraph_BP_Window_Base(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) float GetOcclusionValue() const;  // parameters 0x4
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable) void OnRep_Open();
    UFUNCTION(BlueprintCallable) void Open_Close_Window(FHitResult Interaction, bool& Success);  // parameters 0x89, named "Open Close Window"
    UFUNCTION(BlueprintCallable) void OpenStateChanged__DelegateSignature(bool Open);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void ScheduleDelayedOpenableStateCheck();
    UFUNCTION(BlueprintCallable) void SetOpenableStateOnFoundationActor();
    UFUNCTION(BlueprintCallable) void TemporarilyForceAnimUpdates();
    UFUNCTION(BlueprintCallable) void ValidateAsset();
};
