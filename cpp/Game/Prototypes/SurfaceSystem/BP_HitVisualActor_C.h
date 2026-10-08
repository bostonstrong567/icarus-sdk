// /Game/Prototypes/SurfaceSystem/BP_HitVisualActor.BP_HitVisualActor_C
// Derives from: AActor > UObject
// size 0x250, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_HitVisualActor_C : public AActor
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0220, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NiagaraSystem;  // 0x0228, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UParticleSystemComponent* ParticleSystem;  // 0x0230, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0238, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<EPhysicalSurface> SourceSurfaceType;  // 0x0240, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<EPhysicalSurface> HitSurfaceType;  // 0x0241, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* HitActor;  // 0x0248, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_HitVisualActor(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnLoaded_49B5FA3C4DB143648AEFC3B09787C0D9(UObject* Loaded);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void UpdateNiagaraShadows();
};
