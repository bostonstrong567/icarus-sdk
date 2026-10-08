// /Game/BP/Objects/World/Items/Deployables/Communication/BP_SurveyTransmitter.BP_SurveyTransmitter_C
// Derives from: ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x791, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_SurveyTransmitter_C : public ABP_DeployableBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0728, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UAIPerceptionStimuliSourceComponent* AIPerceptionStimuliSource1;  // 0x0730, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UGenericAITargetComponent* GenericAITarget;  // 0x0738, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* FMODAudio;  // 0x0740, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* TransmitLaser;  // 0x0748, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPointLightComponent* PointLight;  // 0x0750, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Scene_SendData;  // 0x0758, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ValidRadarsFound;  // 0x0760, size 0x4
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UGenericAITargetComponent* GeneratedTargetComponent;  // 0x0768, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool DeviceActive;  // 0x0770, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle CheckForRadarsTimer;  // 0x0778, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool AbleToTransmit;  // 0x0780, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* FMODEventSwitchOn;  // 0x0788, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ForceDeviceActive_On;  // 0x0790, size 0x1

    UFUNCTION(BlueprintCallable) void AddAITarget();
    UFUNCTION(BlueprintCallable) void CheckForRadars();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Deployable_Interact(AActor* Interactor);  // parameters 0x8
    UFUNCTION() void ExecuteUbergraph_BP_SurveyTransmitter(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ForceDeviceActive(bool Active);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void OnRep_AbleToTransmit();
    UFUNCTION(BlueprintCallable) void OnRep_DeviceActive();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void RemoveAITarget();
    UFUNCTION(BlueprintCallable) void TransmittingComplete();
};
