// /Game/BP/Objects/World/Items/Deployables/Radar/BP_Radar.BP_Radar_C
// Derives from: ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x798, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Radar_C : public ABP_DeployableBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0728, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UIcarusMapIconComponent* IcarusMapIcon;  // 0x0730, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* FMOD_Radar_Audio;  // 0x0738, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPointLightComponent* PointLight;  // 0x0740, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Cube;  // 0x0748, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool IsOn;  // 0x0750, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ScanningTileX;  // 0x0754, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ScanningTileY;  // 0x0758, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Progress;  // 0x075C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SecondsToScan;  // 0x0760, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AMapManager_C* MapManager;  // 0x0768, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 SpiralRadiusMax;  // 0x0770, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 SpiralRadiusCurrent;  // 0x0774, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 SpiralLastX;  // 0x0778, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 SpiralLastY;  // 0x077C, size 0x4
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool Completed;  // 0x0780, size 0x1
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FRadarActivated RadarActivated;  // 0x0788, size 0x10

    UFUNCTION(BlueprintCallable) void Activate(AActor* Instigator);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void DeployableTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Deployable_Interact(AActor* Interactor);  // parameters 0x8
    UFUNCTION() void ExecuteUbergraph_BP_Radar(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void NextSpiralScanLocation(bool& Success);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void OnRep_IsOn();
    UFUNCTION(BlueprintCallable) void RadarActivated__DelegateSignature();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
