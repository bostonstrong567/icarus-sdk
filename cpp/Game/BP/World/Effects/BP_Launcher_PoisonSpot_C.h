// /Game/BP/World/Effects/BP_Launcher_PoisonSpot.BP_Launcher_PoisonSpot_C
// Derives from: AIcarusActor > AActor > UObject
// size 0x368, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Launcher_PoisonSpot_C : public AIcarusActor
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_SlugLauncher_SlowSpot;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_SlugLauncher_FireSpot;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_SlugLauncher_HealingSpot;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_Hammerhead_PoisonSpot;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UDecalComponent* Decal;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBoxComponent* Box;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x02F8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Edge_Taper;  // 0x0300, size 0x4, named "Edge Taper"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FlowSpeed;  // 0x0304, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Base_to_Flowing;  // 0x0308, size 0x4, named "Base to Flowing"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Dryness;  // 0x030C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Base_to_Patchy;  // 0x0310, size 0x4, named "Base to Patchy"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float EdgeTaper;  // 0x0314, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float EdgeNoise;  // 0x0318, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsBubbling;  // 0x031C, size 0x1
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) TEnumAsByte<ESlugLauncherAmmoType> DamageType;  // 0x031D, size 0x1
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) float SpotLifespan;  // 0x0320, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FLinearColor> PalleteGreen;  // 0x0328, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FLinearColor> PalleteOrange;  // 0x0338, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FLinearColor> PalleteBrown;  // 0x0348, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UMaterialInterface*> DecalMaterials;  // 0x0358, size 0x10

    UFUNCTION() void BndEvt__BP_PoisonSpot_Box_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);  // parameters 0xA8
    UFUNCTION() void ExecuteUbergraph_BP_Launcher_PoisonSpot(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void PerformEffect(AActor* OverlappedActor);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void UsePalette(TArray<FLinearColor>& Palette);  // parameters 0x10
};
