// /Game/BP/Objects/World/Items/BallisticPayloads/BP_Payload_Orbital_Strike.BP_Payload_Orbital_Strike_C
// Derives from: ABP_Payload_C > AIcarusPayload > AActor > UObject
// size 0x491, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Payload_Orbital_Strike_C : public ABP_Payload_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0400, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USphereComponent* Sphere;  // 0x0408, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UParticleSystemComponent* ParticleSystem;  // 0x0410, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPointLightComponent* PointLight;  // 0x0418, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Beam;  // 0x0420, size 0x8
    UPROPERTY() float FadeIn_Pulse_Fade_6ED135604B828D63EE6BE38FB6460E55;  // 0x0428, size 0x4
    UPROPERTY() TEnumAsByte<ETimelineDirection> FadeIn_Pulse__Direction_6ED135604B828D63EE6BE38FB6460E55;  // 0x042C, size 0x1
    UPROPERTY(Instanced, BlueprintReadWrite) UTimelineComponent* FadeIn_Pulse;  // 0x0430, size 0x8
    UPROPERTY() float FadeOut_Beam_Fade_CD46B289483EB896A96419A014E12320;  // 0x0438, size 0x4
    UPROPERTY() TEnumAsByte<ETimelineDirection> FadeOut_Beam__Direction_CD46B289483EB896A96419A014E12320;  // 0x043C, size 0x1
    UPROPERTY(Instanced, BlueprintReadWrite) UTimelineComponent* FadeOut_Beam;  // 0x0440, size 0x8
    UPROPERTY() float FadeIn_Beam_Fade_7B17271D4ABAA725101FA88E4EE797FD;  // 0x0448, size 0x4
    UPROPERTY() TEnumAsByte<ETimelineDirection> FadeIn_Beam__Direction_7B17271D4ABAA725101FA88E4EE797FD;  // 0x044C, size 0x1
    UPROPERTY(Instanced, BlueprintReadWrite) UTimelineComponent* FadeIn_Beam;  // 0x0450, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float EndDelay;  // 0x0458, size 0x4
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UParticleSystemComponent* SmokeEffect;  // 0x0460, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UFMODAudioComponent* FmodComponent;  // 0x0468, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector Location;  // 0x0470, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRotator Rotation;  // 0x047C, size 0xC
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UPrimitiveComponent* Hit_Component;  // 0x0488, size 0x8, named "Hit Component"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool CameraShakeActive;  // 0x0490, size 0x1

    UFUNCTION() void ExecuteUbergraph_BP_Payload_Orbital_Strike(int32 EntryPoint);  // parameters 0x4
    UFUNCTION() void FadeIn_Beam__FinishedFunc();
    UFUNCTION() void FadeIn_Beam__UpdateFunc();
    UFUNCTION() void FadeIn_Pulse__FinishedFunc();
    UFUNCTION() void FadeIn_Pulse__UpdateFunc();
    UFUNCTION() void FadeOut_Beam__FinishedFunc();
    UFUNCTION() void FadeOut_Beam__UpdateFunc();
    UFUNCTION(BlueprintCallable) void KillEffects();
    UFUNCTION(BlueprintCallable) void NearEnd();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
};
