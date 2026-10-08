// /Game/BP/Objects/World/Items/Deployables/Radar/BP_Radarv3.BP_Radarv3_C
// Derives from: ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x7E0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Radarv3_C : public ABP_DeployableBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0728, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBPQC_AnimalSwarm_Local_C* BPQC_AnimalSwarm_Local;  // 0x0730, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UGenericAITargetComponent* GenericAITarget;  // 0x0738, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UAudioOcclusionComponent* AudioOcclusion1;  // 0x0740, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UWidgetComponent* Widget_RadarInterface;  // 0x0748, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UAIPerceptionStimuliSourceComponent* AIPerceptionStimuliSource;  // 0x0750, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* FMOD_Radar_Audio;  // 0x0758, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool IsOn;  // 0x0760, size 0x1
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) float Progress;  // 0x0764, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SecondsToScan;  // 0x0768, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AMapManager_C* MapManager;  // 0x0770, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool Completed;  // 0x0778, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float RadarScanDiameterInKm;  // 0x077C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float RadarScanIntensity;  // 0x0780, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MinimumDistanceFromOtherScan;  // 0x0784, size 0x4
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool CantScan;  // 0x0788, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) APawn* LastInstigator;  // 0x0790, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FRadarActivated RadarActivated;  // 0x0798, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float RadarMaxEffectiveRange;  // 0x07A8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float RadarScanMinArcAngle;  // 0x07AC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float RadarScanMaxArcAngle;  // 0x07B0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UAnimSequence* RadarDeployAnimation;  // 0x07B8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UAnimSequence* RadarActiveAnimation;  // 0x07C0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool RenderWidgetAfterInitialAnimation;  // 0x07C8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool DeployAnimFinished;  // 0x07C9, size 0x1
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FRadarScanComplete RadarScanComplete;  // 0x07D0, size 0x10

    UFUNCTION(BlueprintCallable) void Activate(AActor* Instigator);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void CalculateScanResultForDeposit(ABP_MetaDeposit_C* Deposit, FRadarV3ScanData& ScanData);  // parameters 0x30
    UFUNCTION(BlueprintCallable) void ConfigureScreenText();
    UFUNCTION(BlueprintCallable) void Deactivate();
    UFUNCTION(BlueprintImplementableEvent) void DeployableTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Deployable_Interact(AActor* Interactor);  // parameters 0x8
    UFUNCTION() void ExecuteUbergraph_BP_Radarv3(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void InitAfterExoticStorm();
    UFUNCTION(BlueprintCallable) void OnRadarStateUpdated();
    UFUNCTION(BlueprintCallable) void OnRep_CantScan();
    UFUNCTION(BlueprintCallable) void OnRep_Completed();
    UFUNCTION(BlueprintCallable) void OnRep_IsOn();
    UFUNCTION(BlueprintCallable) void OnRep_Progress();
    UFUNCTION(BlueprintCallable) void PreviousScanProximityCheck(bool& Blocked);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void RadarActivated__DelegateSignature();
    UFUNCTION(BlueprintCallable) void RadarScanComplete__DelegateSignature();
    UFUNCTION(BlueprintCallable) void RadarV3ArcCalcs(TArray<FRadarV3ScanData>& Scans);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void UpdateAnimalSpawning();
};
