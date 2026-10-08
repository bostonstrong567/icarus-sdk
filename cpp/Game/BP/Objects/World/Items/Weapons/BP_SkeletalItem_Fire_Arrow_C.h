// /Game/BP/Objects/World/Items/Weapons/BP_SkeletalItem_Fire_Arrow.BP_SkeletalItem_Fire_Arrow_C
// Derives from: ASkeletalItem > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x5D4, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_SkeletalItem_Fire_Arrow_C : public ASkeletalItem
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0580, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USphereComponent* Sphere;  // 0x0588, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* FMODFireLoop;  // 0x0590, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPointLightComponent* PointLight;  // 0x0598, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* Niagara;  // 0x05A0, size 0x8
    UPROPERTY() float LightFade_Float_FB55DCB2435BEBA8D3B4CE898BF4891D;  // 0x05A8, size 0x4
    UPROPERTY() TEnumAsByte<ETimelineDirection> LightFade__Direction_FB55DCB2435BEBA8D3B4CE898BF4891D;  // 0x05AC, size 0x1
    UPROPERTY(Instanced, BlueprintReadWrite) UTimelineComponent* LightFade;  // 0x05B0, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool IsPreviewActor;  // 0x05B8, size 0x1
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) TEnumAsByte<PreviewActorType> PreviewType;  // 0x05B9, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Intensity;  // 0x05BC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle SFX_TimerHandle;  // 0x05C0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector LocLast;  // 0x05C8, size 0xC

    UFUNCTION() void BndEvt__BP_SkeletalItem_Fire_Arrow_Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);  // parameters 0xA8
    UFUNCTION() void BndEvt__Niagara_K2Node_ComponentBoundEvent_0_ActorComponentDeactivateSignature__DelegateSignature(UActorComponent* Component);  // parameters 0x8
    UFUNCTION() void ExecuteUbergraph_BP_SkeletalItem_Fire_Arrow(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void InitArrow();
    UFUNCTION() void LightFade__FinishedFunc();
    UFUNCTION() void LightFade__UpdateFunc();
    UFUNCTION(BlueprintCallable) void OnRep_PreviewType();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void SFX_KnockedFireMovement();
};
