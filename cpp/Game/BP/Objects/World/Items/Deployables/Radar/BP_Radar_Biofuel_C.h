// /Game/BP/Objects/World/Items/Deployables/Radar/BP_Radar_Biofuel.BP_Radar_Biofuel_C
// Derives from: ABP_Radarv3_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x7F0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Radar_Biofuel_C : public ABP_Radarv3_C, public IBPI_GeneratorUIProvider_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x07E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Plane;  // 0x07E8, size 0x8

    UFUNCTION(BlueprintCallable) void CheckRadarActive();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Deployable_Interact(AActor* Interactor);  // parameters 0x8
    UFUNCTION() void ExecuteUbergraph_BP_Radar_Biofuel(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable) void OnDeviceOnStateChanged(bool bIsOn);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void OnGeneratorOutOfFuel();
    UFUNCTION(BlueprintCallable) void OnRadarStateUpdated();
    UFUNCTION(BlueprintCallable) void UseDeviceToggle(bool& WantsDeviceToggle);  // parameters 0x1
};
