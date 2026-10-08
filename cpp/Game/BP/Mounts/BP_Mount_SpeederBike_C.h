// /Game/BP/Mounts/BP_Mount_SpeederBike.BP_Mount_SpeederBike_C
// Derives from: ABP_Mount_Base_C > AIcarusMountCharacter > AIcarusNPCGOAPCharacter > AIcarusNPCCharacter > AIcarusCharacter > ACharacter > APawn > AActor > UObject
// size 0x101C, a blueprint class, blueprint

UCLASS(Config=Game)
class ABP_Mount_SpeederBike_C : public ABP_Mount_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0F38, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight2;  // 0x0F40, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight1;  // 0x0F48, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Scene_TailLights;  // 0x0F50, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_Thruster_Start_01;  // 0x0F58, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_Thruster_Start_02;  // 0x0F60, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_Vent_Looping;  // 0x0F68, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight;  // 0x0F70, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_DirtTrail;  // 0x0F78, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_DroneFlare1;  // 0x0F80, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusSpotLight_C* BP_IcarusSpotLight;  // 0x0F88, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_DroneFlare;  // 0x0F90, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* StaticMesh_Destroyed;  // 0x0F98, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_Vent_Start;  // 0x0FA0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* FMODAudioRev;  // 0x0FA8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_Thruster_02;  // 0x0FB0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_Thruster_01;  // 0x0FB8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* FMODAudioSpeeder;  // 0x0FC0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFillableComponent* Fillable;  // 0x0FC8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* PetTarget;  // 0x0FD0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* HandsTarget;  // 0x0FD8, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool IsOn;  // 0x0FE0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DeltaFuelConsumption;  // 0x0FE4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float InitialFOV;  // 0x0FE8, size 0x4
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) int32 SavedFillableUnits;  // 0x0FEC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemsStaticRowHandle DefaultSpeederSaddle;  // 0x0FF0, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<int32> LightsMaterialIndexes;  // 0x1008, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SpeederMaxSpeed;  // 0x1018, size 0x4

    UFUNCTION(BlueprintCallable) void CanTurnOn(bool& CanTurnOn, FText& FailureReason) const;  // parameters 0x20
    UFUNCTION() void ExecuteUbergraph_BP_Mount_SpeederBike(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetAdditionalWidgetForHUD(UUserWidget*& OutUserWidget);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) FVector GetHandsTargetLocation(FVector SeatLocation);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool GetOverrideMoveSpeedMappingMultiplier(float& OutMultiplier) const;  // parameters 0x5
    UFUNCTION(BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable, BlueprintPure) void IsMoving(bool& IsMoving) const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void MULTI_FailedToStart(FText Reason);  // parameters 0x18
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void MULTI_RanOutOfFuel();
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void MULTI_TurnedOff();
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void MULTI_TurnedOn();
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void Multicast_ActorDeath();
    UFUNCTION(BlueprintCallable) void OnFailedToStart(FText Reason);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void OnFillableUpdated();
    UFUNCTION(BlueprintCallable) void OnRep_IsOn();
    UFUNCTION(BlueprintCallable) void OnStateUpdated();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceivePossessed(AController* NewController);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveUnpossessed(AController* OldController);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void TurnOff();
    UFUNCTION(BlueprintCallable) void TurnOn();
    UFUNCTION(BlueprintCallable) void UpdateCameraEffects();
    UFUNCTION(BlueprintCallable) void UpdateFuelConsumption(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void UpdateTrailParticle();
    UFUNCTION(BlueprintCallable) void UpdateVehicleFX();
};
