// /Game/BP/Objects/World/Items/Weapons/BP_SkeletalItem_Flare_Arrow.BP_SkeletalItem_Flare_Arrow_C
// Derives from: ASkeletalItem > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x5E0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_SkeletalItem_Flare_Arrow_C : public ASkeletalItem
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0580, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Sphere;  // 0x0588, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight_Large;  // 0x0590, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* FMODAudio_FlareFire;  // 0x0598, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_FlareSmoke;  // 0x05A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_Flare;  // 0x05A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPointLightComponent* PointLight_Small;  // 0x05B0, size 0x8
    UPROPERTY() float FadeOutAlpha_Alpha_50615BAF46C331FB886E4E9DFD4FB757;  // 0x05B8, size 0x4
    UPROPERTY() TEnumAsByte<ETimelineDirection> FadeOutAlpha__Direction_50615BAF46C331FB886E4E9DFD4FB757;  // 0x05BC, size 0x1
    UPROPERTY(Instanced, BlueprintReadWrite) UTimelineComponent* FadeOutAlpha;  // 0x05C0, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool IsPreviewActor;  // 0x05C8, size 0x1
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) TEnumAsByte<PreviewActorType> PreviewType;  // 0x05C9, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle ParticleLifetimeTimer;  // 0x05D0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LightLargeIntensity;  // 0x05D8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LightSmallIntensity;  // 0x05DC, size 0x4

    UFUNCTION() void ExecuteUbergraph_BP_SkeletalItem_Flare_Arrow(int32 EntryPoint);  // parameters 0x4
    UFUNCTION() void FadeOutAlpha__FinishedFunc();
    UFUNCTION() void FadeOutAlpha__UpdateFunc();
    UFUNCTION(BlueprintCallable) void FadeOutParticleEffects();
    UFUNCTION(BlueprintCallable) void InitArrow();
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void MULTI_BeginDelayedCleanup();
    UFUNCTION(BlueprintCallable) void OnPayloadDeploy();
    UFUNCTION(BlueprintCallable) void OnProjectileFired(FVector Impulse, FVector InstigatorVelocity, FProjectileFireParams AdvancedParameters);  // parameters 0x28
    UFUNCTION(BlueprintCallable) void OnRep_PreviewType();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void SetItemVisible(bool bVisible);  // parameters 0x1
};
