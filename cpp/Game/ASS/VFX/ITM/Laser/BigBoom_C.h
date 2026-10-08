// /Game/ASS/VFX/ITM/Laser/BigBoom.BigBoom_C
// Derives from: AActor > UObject
// size 0x2F8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABigBoom_C : public AActor
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0220, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPostProcessComponent* PostProcess_InsideLaserRange;  // 0x0228, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCapsuleComponent* Capsule;  // 0x0230, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UDecalComponent* Decal_OrbitalScorch;  // 0x0238, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_OrbitalImpact;  // 0x0240, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight_Distant;  // 0x0248, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight_Close;  // 0x0250, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UDecalComponent* Decal_OrbitalLaserFocus;  // 0x0258, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UDecalComponent* Decal_OrbitalAreaOfEffect;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USphereComponent* PawnSphere;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USphereComponent* StaticSphere;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_OrbitalStrike;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_OrbitalTracking;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Particles;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0290, size 0x8
    UPROPERTY() float Timeline_0_PP_Intensity_26987CB345A370502BE481957839D8A3;  // 0x0298, size 0x4
    UPROPERTY() float Timeline_0_PP_BlendWeight_26987CB345A370502BE481957839D8A3;  // 0x029C, size 0x4
    UPROPERTY() float Timeline_0_Decal3EmissiveAmount_26987CB345A370502BE481957839D8A3;  // 0x02A0, size 0x4
    UPROPERTY() float Timeline_0_PointLightDistantIntensity_26987CB345A370502BE481957839D8A3;  // 0x02A4, size 0x4
    UPROPERTY() float Timeline_0_PointLightCloseIntensity_26987CB345A370502BE481957839D8A3;  // 0x02A8, size 0x4
    UPROPERTY() float Timeline_0_Decal2EmmissiveIntensity_26987CB345A370502BE481957839D8A3;  // 0x02AC, size 0x4
    UPROPERTY() float Timeline_0_Decal2Opacity_26987CB345A370502BE481957839D8A3;  // 0x02B0, size 0x4
    UPROPERTY() float Timeline_0_DecalOpacity_26987CB345A370502BE481957839D8A3;  // 0x02B4, size 0x4
    UPROPERTY() float Timeline_0_DecalScaleAlpha_26987CB345A370502BE481957839D8A3;  // 0x02B8, size 0x4
    UPROPERTY() TEnumAsByte<ETimelineDirection> Timeline_0__Direction_26987CB345A370502BE481957839D8A3;  // 0x02BC, size 0x1
    UPROPERTY(Instanced, BlueprintReadWrite) UTimelineComponent* Timeline_0;  // 0x02C0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Duration;  // 0x02C8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Radius;  // 0x02CC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool DestroyDeployableInventory;  // 0x02D0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInstanceDynamic* DecalDynamicMaterial;  // 0x02D8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInstanceDynamic* DecalDynamicMaterial2;  // 0x02E0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInstanceDynamic* DecalDynamicMaterial3;  // 0x02E8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInstanceDynamic* PostProcessDynamicMaterial;  // 0x02F0, size 0x8

    UFUNCTION() void ExecuteUbergraph_BigBoom(int32 EntryPoint);  // parameters 0x4
    UFUNCTION() void Timeline_0__FinishedFunc();
    UFUNCTION() void Timeline_0__UpdateFunc();
    UFUNCTION(BlueprintCallable) void TriggerEvent();
};
