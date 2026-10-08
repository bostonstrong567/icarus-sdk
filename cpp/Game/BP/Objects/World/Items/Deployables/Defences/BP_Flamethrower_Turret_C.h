// /Game/BP/Objects/World/Items/Deployables/Defences/BP_Flamethrower_Turret.BP_Flamethrower_Turret_C
// Derives from: ABP_Basic_Turret_C > ABP_Deployable_PowerToggleableBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x8FA, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Flamethrower_Turret_C : public ABP_Basic_Turret_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x08C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_Flamethrower_FX;  // 0x08C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPointLightComponent* PointLight;  // 0x08D0, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UFillableComponent* Fillable;  // 0x08D8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DeltaTickSinceShot;  // 0x08E0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool LocalDoFire;  // 0x08E4, size 0x1
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UFMODAudioComponent* FMODAudioComponent;  // 0x08E8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UFMODEvent* FlameThrowerAudio;  // 0x08F0, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool DoFire;  // 0x08F8, size 0x1
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool Filling;  // 0x08F9, size 0x1

    UFUNCTION(BlueprintCallable) void AddFuelFromNetwork();
    UFUNCTION(BlueprintCallable) void BioFuel_DeviceConnectionChanged(FIcarusResourcesEnum ResourceType, bool bNewConnected);  // parameters 0x11
    UFUNCTION(BlueprintCallable) void Biofuel_ResourceChanged(FIcarusResourcesEnum ResourceType);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void Client_OnStoredUnitsUpdated_Event();
    UFUNCTION(BlueprintCallable) void ConditionalFire(float DeltaTime);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ConsumeAmmo();
    UFUNCTION() void ExecuteUbergraph_BP_Flamethrower_Turret(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FireAtTarget();
    UFUNCTION(BlueprintCallable) void GetInventoryAmmoCount(int32& OutAmmoCount);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetInventoryAmmoType(FItemsStaticRowHandle& ItemType);  // parameters 0x18
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void MultiPlayAddAmmoAudio();
    UFUNCTION(BlueprintCallable) void OnDeviceStopRunning();
    UFUNCTION(BlueprintCallable) void OnRep_DoFire();
    UFUNCTION(BlueprintCallable, BlueprintPure) void RequiresFilling(bool& FillRequired);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SphereTraceHit();
};
