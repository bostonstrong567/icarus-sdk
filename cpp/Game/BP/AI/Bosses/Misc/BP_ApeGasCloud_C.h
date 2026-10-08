// /Game/BP/AI/Bosses/Misc/BP_ApeGasCloud.BP_ApeGasCloud_C
// Derives from: AIcarusActor > AActor > UObject
// size 0x2F8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_ApeGasCloud_C : public AIcarusActor
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USphereComponent* Sphere;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* Niagara;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x02D8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float ParticleLifetime;  // 0x02E0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float ModifierLifetime;  // 0x02E4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CurrentLifeDuration;  // 0x02E8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float STRANGE_TROOP_SCALAR;  // 0x02EC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ModParticleLifetime;  // 0x02F0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ModModifierLifetime;  // 0x02F4, size 0x4

    UFUNCTION() void BndEvt__BP_ApeFartCloud_Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);  // parameters 0xA8
    UFUNCTION() void ExecuteUbergraph_BP_ApeGasCloud(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x1
};
