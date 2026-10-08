// /Game/BP/Objects/World/Items/BallisticPayloads/BP_Payload_SlugLauncher.BP_Payload_SlugLauncher_C
// Derives from: ABP_Payload_C > AIcarusPayload > AActor > UObject
// size 0x498, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Payload_SlugLauncher_C : public ABP_Payload_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0400, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_SlowingHit_FX;  // 0x0408, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_HealingHit_FX;  // 0x0410, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPointLightComponent* PointLight;  // 0x0418, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_PoisonHit_FX;  // 0x0420, size 0x8
    UPROPERTY() float LightFade_Intensity_D99132E846FFAA28945B6899DE88C37D;  // 0x0428, size 0x4
    UPROPERTY() TEnumAsByte<ETimelineDirection> LightFade__Direction_D99132E846FFAA28945B6899DE88C37D;  // 0x042C, size 0x1
    UPROPERTY(Instanced, BlueprintReadWrite) UTimelineComponent* LightFade;  // 0x0430, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<AActor*> EffectedActors;  // 0x0438, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<ESlugLauncherAmmoType> AmmoType;  // 0x0448, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FLinearColor> PalleteGreen;  // 0x0450, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FLinearColor> PalleteOrange;  // 0x0460, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FLinearColor> PalleteBrown;  // 0x0470, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float AOERadius;  // 0x0480, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TrailLifespan;  // 0x0484, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 HealthAmount;  // 0x0488, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* FocusedItemActor;  // 0x0490, size 0x8

    UFUNCTION(BlueprintCallable) void DetermineLauncherAOELife(AActor* InstigatorActor, float& Radius, float& Life, int32& HealthAmount);  // parameters 0x14
    UFUNCTION(BlueprintCallable) void DetermineLauncherAttachment(AActor* InstigatorActor, TEnumAsByte<ESlugLauncherAmmoType>& SlugAmmoType);  // parameters 0x9
    UFUNCTION() void ExecuteUbergraph_BP_Payload_SlugLauncher(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetDamageTypeFromAmmoType(TEnumAsByte<ESlugLauncherAmmoType> BackpackType, AActor* InstigatorActor, EIcarusDamageType& DamageType, float& DamageAmount);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void GetModifierFromAmmoType(TEnumAsByte<ESlugLauncherAmmoType> BackpackType, FModifierStatesRowHandle& ModRow);  // parameters 0x1C
    UFUNCTION() void LightFade__FinishedFunc();
    UFUNCTION() void LightFade__UpdateFunc();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void UsePalette(TArray<FLinearColor>& Palette);  // parameters 0x10
};
