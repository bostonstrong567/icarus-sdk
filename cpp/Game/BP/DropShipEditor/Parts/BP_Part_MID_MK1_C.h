// /Game/BP/DropShipEditor/Parts/BP_Part_MID_MK1.BP_Part_MID_MK1_C
// Derives from: ABP_PartBase_C > AIcarusRocketPart > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x799, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Part_MID_MK1_C : public ABP_PartBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x05E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_CrashLandingEnd_Smoke;  // 0x05F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_FlyingObjects;  // 0x05F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_Dropship_BurstFire;  // 0x0600, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_Electrical_Sparks_03;  // 0x0608, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_Electrical_Sparks_02;  // 0x0610, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_Electrical_Sparks_01;  // 0x0618, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* DropshipCrash;  // 0x0620, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_OutsideFire;  // 0x0628, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* WeatherCullCube;  // 0x0630, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusSpotLight_C* BP_IcarusSpotLightWarning;  // 0x0638, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusSpotLight_C* BP_IcarusSpotLight2;  // 0x0640, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* WarningLight_Alarm;  // 0x0648, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusSpotLight_C* BP_IcarusSpotLight1;  // 0x0650, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBoxComponent* NavBlocker_Door;  // 0x0658, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* DropshipSequenceInternal;  // 0x0660, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* DropshipSequenceExternal;  // 0x0668, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* SFX_Cooling;  // 0x0670, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_DropshipHeatStreamer1;  // 0x0678, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_DropshipHeatStreamer7;  // 0x0680, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_DropshipHeatStreamer6;  // 0x0688, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_DropshipHeatStreamer5;  // 0x0690, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_DropshipHeatStreamer4;  // 0x0698, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_DropshipHeatStreamer3;  // 0x06A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_DropshipHeatStreamer2;  // 0x06A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* FxDropshipHeatCooldown;  // 0x06B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_DropshipMoisture;  // 0x06B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_SmokeCone;  // 0x06C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* ComputerSFX;  // 0x06C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) URectLightComponent* FireLight1;  // 0x06D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) URectLightComponent* FireLight;  // 0x06D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ShuttleReEntryCone;  // 0x06E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* ConeFX;  // 0x06E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* FIrstPerson;  // 0x06F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPointLightComponent* LampLight;  // 0x06F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* Interior;  // 0x0700, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPointLightComponent* ComputerLightLeft;  // 0x0708, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPointLightComponent* Fill;  // 0x0710, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPointLightComponent* ComputerLightRight;  // 0x0718, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* LandingFx;  // 0x0720, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* SkeletalMesh;  // 0x0728, size 0x8
    UPROPERTY() TEnumAsByte<ETimelineDirection> LightSpin__Direction_F164B8A940B727A826171380AA2B0330;  // 0x0730, size 0x1
    UPROPERTY(Instanced, BlueprintReadWrite) UTimelineComponent* LightSpin;  // 0x0738, size 0x8
    UPROPERTY() float FadeOnSmoke_Track_3CAB9504429B86912BB372932AEB654C;  // 0x0740, size 0x4
    UPROPERTY() TEnumAsByte<ETimelineDirection> FadeOnSmoke__Direction_3CAB9504429B86912BB372932AEB654C;  // 0x0744, size 0x1
    UPROPERTY(Instanced, BlueprintReadWrite) UTimelineComponent* FadeOnSmoke;  // 0x0748, size 0x8
    UPROPERTY() float FadeSmokeCone_Fade_27A25F714815FB34D673F6B74DD0024F;  // 0x0750, size 0x4
    UPROPERTY() TEnumAsByte<ETimelineDirection> FadeSmokeCone__Direction_27A25F714815FB34D673F6B74DD0024F;  // 0x0754, size 0x1
    UPROPERTY(Instanced, BlueprintReadWrite) UTimelineComponent* FadeSmokeCone;  // 0x0758, size 0x8
    UPROPERTY() float Fade_Fade_D32F93AC459FA6EBAA58F4A775A5F3A2;  // 0x0760, size 0x4
    UPROPERTY() TEnumAsByte<ETimelineDirection> Fade__Direction_D32F93AC459FA6EBAA58F4A775A5F3A2;  // 0x0764, size 0x1
    UPROPERTY(Instanced, BlueprintReadWrite) UTimelineComponent* Fade;  // 0x0768, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool Open;  // 0x0770, size 0x1
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool StartEngine;  // 0x0771, size 0x1
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool StopEngine;  // 0x0772, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool PlayShake;  // 0x0773, size 0x1
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool Shake;  // 0x0774, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ShakeStopped;  // 0x0775, size 0x1
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UFMODAudioComponent* DropShip_Reverb;  // 0x0778, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle CameraShakeTimerRef;  // 0x0780, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool ConeActive;  // 0x0788, size 0x1
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) int32 CameraShakeType;  // 0x078C, size 0x4
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool SonicBoomFX;  // 0x0790, size 0x1
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool SmokeConeFX;  // 0x0791, size 0x1
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool GroundDustFX;  // 0x0792, size 0x1
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool HeatCooldownFX;  // 0x0793, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HasBeenInDescendingState;  // 0x0794, size 0x1
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool CameraShake_TouchDown;  // 0x0795, size 0x1
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool SeatUnlocked;  // 0x0796, size 0x1
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool CrashLandingStartFX;  // 0x0797, size 0x1
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool CrashLandingEndFX;  // 0x0798, size 0x1

    UFUNCTION(BlueprintCallable) void AssembledByDatabase();
    UFUNCTION(BlueprintCallable) void CameraShake();
    UFUNCTION(BlueprintCallable) void DisableDoorCollision();
    UFUNCTION(BlueprintCallable) void EnableDoorCollision();
    UFUNCTION() void ExecuteUbergraph_BP_Part_MID_MK1(int32 EntryPoint);  // parameters 0x4
    UFUNCTION() void FadeOnSmoke__FinishedFunc();
    UFUNCTION() void FadeOnSmoke__UpdateFunc();
    UFUNCTION() void FadeSmokeCone__FinishedFunc();
    UFUNCTION() void FadeSmokeCone__UpdateFunc();
    UFUNCTION(BlueprintCallable) void FadeSmokeOn();
    UFUNCTION(BlueprintCallable) void Fade_Cone_FX();
    UFUNCTION() void Fade__FinishedFunc();
    UFUNCTION() void Fade__UpdateFunc();
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetMesh(UPrimitiveComponent*& Mesh);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void Ground_Dust_FX();
    UFUNCTION(BlueprintCallable) void Heat_Cooldown_FX();
    UFUNCTION(BlueprintCallable) void Hide_Cone_FX();
    UFUNCTION(BlueprintCallable) void Hide_Lights();
    UFUNCTION() void LightSpin__FinishedFunc();
    UFUNCTION() void LightSpin__UpdateFunc();
    UFUNCTION(BlueprintCallable) void OnRep_CameraShake_TouchDown();
    UFUNCTION(BlueprintCallable) void OnRep_ConeActive();
    UFUNCTION(BlueprintCallable) void OnRep_CrashLandingEndFX();
    UFUNCTION(BlueprintCallable) void OnRep_CrashLandingStartFX();
    UFUNCTION(BlueprintCallable) void OnRep_GroundDustFX();
    UFUNCTION(BlueprintCallable) void OnRep_HeatCooldownFX();
    UFUNCTION(BlueprintCallable) void OnRep_SeatUnlocked();
    UFUNCTION(BlueprintCallable) void OnRep_Shake();
    UFUNCTION(BlueprintCallable) void OnRep_SmokeConeFX();
    UFUNCTION(BlueprintCallable) void OnRep_SonicBoomFX();
    UFUNCTION(BlueprintCallable) void OnRep_StartEngine();
    UFUNCTION(BlueprintCallable) void OnRep_StopEngine();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Show_Cone_FX();
    UFUNCTION(BlueprintCallable) void Show_Lights();
    UFUNCTION(BlueprintCallable) void StartCameraShake();
    UFUNCTION(BlueprintCallable) void StopCameraShake();
    UFUNCTION(BlueprintCallable) void ToggleFlightSFX(ERocketState DropShipState, bool IsLocalPlayer);  // parameters 0x2
    UFUNCTION(BlueprintCallable) void TouchDownCameraShake();
    UFUNCTION(BlueprintCallable) void TriggerEvent(FDropShipActionsEnum Actions);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void Update_Fmod_Dropship_State(EDropshipDescentStateFMODParam DropshipSequenceState);  // parameters 0x1, named "Update Fmod Dropship State"
    UFUNCTION(BlueprintCallable) void WeatherCullingSetup();
};
