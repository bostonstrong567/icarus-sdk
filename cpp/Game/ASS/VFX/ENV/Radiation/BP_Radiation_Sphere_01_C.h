// /Game/ASS/VFX/ENV/Radiation/BP_Radiation_Sphere_01.BP_Radiation_Sphere_01_C
// Derives from: ARadiationFxSphere > AActor > UObject
// size 0x34C, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Radiation_Sphere_01_C : public ARadiationFxSphere
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0250, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_StaticVertRad;  // 0x0258, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_MovingRad;  // 0x0260, size 0x8
    UPROPERTY() float Floor_GasClouds_Opacity_NewTrack_0_54C091024A5D801AC49B7E91740A48AA;  // 0x0268, size 0x4
    UPROPERTY() TEnumAsByte<ETimelineDirection> Floor_GasClouds_Opacity__Direction_54C091024A5D801AC49B7E91740A48AA;  // 0x026C, size 0x1
    UPROPERTY(Instanced, BlueprintReadWrite) UTimelineComponent* Floor_GasClouds_Opacity;  // 0x0270, size 0x8
    UPROPERTY() float Vertical_Rad_Opacity_NewTrack_0_AE03D4E442C1833B1DAD40897141D057;  // 0x0278, size 0x4
    UPROPERTY() TEnumAsByte<ETimelineDirection> Vertical_Rad_Opacity__Direction_AE03D4E442C1833B1DAD40897141D057;  // 0x027C, size 0x1
    UPROPERTY(Instanced, BlueprintReadWrite) UTimelineComponent* Vertical_Rad_Opacity;  // 0x0280, size 0x8
    UPROPERTY() float Timeline_0_NightTimeIntensity_2FF0E41A4814726681E2ED942E4AA4E9;  // 0x0288, size 0x4
    UPROPERTY() float Timeline_0_DayTimeIntensity_2FF0E41A4814726681E2ED942E4AA4E9;  // 0x028C, size 0x4
    UPROPERTY() TEnumAsByte<ETimelineDirection> Timeline_0__Direction_2FF0E41A4814726681E2ED942E4AA4E9;  // 0x0290, size 0x1
    UPROPERTY(Instanced, BlueprintReadWrite) UTimelineComponent* Timeline_0;  // 0x0298, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bDebug;  // 0x02A0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle FakeVolumetricTimer;  // 0x02A8, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UPostProcessComponent* PP_Radiation;  // 0x02B0, size 0x8, named "PP Radiation"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SmallFloorRadius;  // 0x02B8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MediumFloorRadius;  // 0x02BC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LargeFloorRadius;  // 0x02C0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float RingSpacing;  // 0x02C4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MinInnerRadius;  // 0x02C8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float InnerMeshSpacing;  // 0x02CC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<float> HeightLevels;  // 0x02D0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInstanceDynamic* PPMatOverlay;  // 0x02E0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInstanceDynamic* PPMatOverlayPersistent;  // 0x02E8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsFadingOut;  // 0x02F0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle StaticRangeHandle;  // 0x02F8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ACharacter* CurrentCharacter;  // 0x0300, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTransform LastTransform;  // 0x0310, size 0x30
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle BlendInTimer;  // 0x0340, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 EffectRadiusDebug;  // 0x0348, size 0x4

    UFUNCTION(BlueprintCallable) void BlendIn();
    UFUNCTION(BlueprintCallable) void BlendPPOverlayBegin();
    UFUNCTION(BlueprintCallable) void BlendPPOverlayEnd(UCameraComponent* CameraComponent);  // parameters 0x8
    UFUNCTION() void BndEvt__BP_Radiation_Sphere_01_Edit_SphereComponent_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);  // parameters 0xA8
    UFUNCTION() void BndEvt__BP_Radiation_Sphere_01_Edit_SphereComponent_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);  // parameters 0x1C
    UFUNCTION() void ExecuteUbergraph_BP_Radiation_Sphere_01(int32 EntryPoint);  // parameters 0x4
    UFUNCTION() void Floor_GasClouds_Opacity__FinishedFunc();
    UFUNCTION() void Floor_GasClouds_Opacity__UpdateFunc();
    UFUNCTION(BlueprintImplementableEvent) void GenerateDebugPreview();
    UFUNCTION(BlueprintCallable) void GenerateInstanceData(TArray<FTransform>& Transforms, TArray<FVector>& Locations);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void InitClouds();
    UFUNCTION(BlueprintCallable) void IsMovableInit();
    UFUNCTION(BlueprintCallable) void OnPawnOverlappedBegin(APawn* Pawn);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnPawnOverlappedEnd(APawn* Pawn);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void PopulateFloorVolumetricClouds(bool& bGenerated);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void PopulateVertRads(const TArray<FVector>& TargetArray);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveDestroyed();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool RegenerateInstanceData();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetSphereScale();
    UFUNCTION(BlueprintCallable) void StaticRangeIntensity();
    UFUNCTION() void Timeline_0__FinishedFunc();
    UFUNCTION() void Timeline_0__UpdateFunc();
    UFUNCTION(BlueprintCallable) void TryPopulateFloorVolumetricClouds();
    UFUNCTION() void Vertical_Rad_Opacity__FinishedFunc();
    UFUNCTION() void Vertical_Rad_Opacity__UpdateFunc();
};
