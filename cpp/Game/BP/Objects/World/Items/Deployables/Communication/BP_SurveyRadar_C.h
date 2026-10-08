// /Game/BP/Objects/World/Items/Deployables/Communication/BP_SurveyRadar.BP_SurveyRadar_C
// Derives from: ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x7B8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_SurveyRadar_C : public ABP_DeployableBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0728, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* FMODAudio;  // 0x0730, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPointLightComponent* PointLight_Laptop;  // 0x0738, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Scene_Laptop;  // 0x0740, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* TransmitterLaser;  // 0x0748, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPointLightComponent* PointLight_Transmitter;  // 0x0750, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* RadarLaser;  // 0x0758, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Scene_TransmitterActive;  // 0x0760, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPointLightComponent* PointLight_Radar;  // 0x0768, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Scene_RadarActive;  // 0x0770, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) ABP_SurveyRadar_C* FoundRadar;  // 0x0778, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector LaserPos;  // 0x0780, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float UIDRadar;  // 0x078C, size 0x4
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool DeviceActive;  // 0x0790, size 0x1
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool ShowRadarLaser;  // 0x0791, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle LookForRadarTimer;  // 0x0798, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) ABP_SurveyTransmitter_C* FoundTransmitter;  // 0x07A0, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool ShowTransmitterLaser;  // 0x07A8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* FMODEventSwitchOn;  // 0x07B0, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Deployable_Interact(AActor* Interactor);  // parameters 0x8
    UFUNCTION() void ExecuteUbergraph_BP_SurveyRadar(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FindFirstRadar(ABP_SurveyRadar_C*& NextRadar);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void FindNextRadarUID(ABP_SurveyRadar_C*& NextRadar);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void LookForActiveTransmitter();
    UFUNCTION(BlueprintCallable) void LookForRadar();
    UFUNCTION(BlueprintCallable) void OnRep_DeviceActive();
    UFUNCTION(BlueprintCallable) void OnRep_FoundRadar();
    UFUNCTION(BlueprintCallable) void OnRep_FoundTransmitter();
    UFUNCTION(BlueprintCallable) void OnRep_ShowLaser();
    UFUNCTION(BlueprintCallable) void OnRep_ShowTransmitterLaser();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void StopLookingForRadar();
    UFUNCTION(BlueprintCallable) void UpdateFMODParameter();
};
