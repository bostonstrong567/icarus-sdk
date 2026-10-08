// /Game/BP/Systems/WorldBoss/BP_WorldBoss_SandWorm_MovementProxy.BP_WorldBoss_SandWorm_MovementProxy_C
// Derives from: AIcarusActor > AActor > UObject
// size 0x3AD, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_WorldBoss_SandWorm_MovementProxy_C : public AIcarusActor
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* FMODAudio;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_SandMound;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCameraShakeSourceComponent* CameraShakeSource;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* FX_Charge_Hit;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* FX_Charge;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* SK_Worm;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x02F8, size 0x8
    UPROPERTY() float Timeline_Submerge_Alpha_488BCE5F4F4F04002EC84CA91CC5C402;  // 0x0300, size 0x4
    UPROPERTY() TEnumAsByte<ETimelineDirection> Timeline_Submerge__Direction_488BCE5F4F4F04002EC84CA91CC5C402;  // 0x0304, size 0x1
    UPROPERTY(Instanced, BlueprintReadWrite) UTimelineComponent* Timeline_Submerge;  // 0x0308, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTransform Target;  // 0x0310, size 0x30
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector LastDamageLocation;  // 0x0340, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DamageRadius;  // 0x034C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<AActor*, float> RecentlyDamagedActors;  // 0x0350, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* WorldBossReference;  // 0x03A0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float RecentDamageDuration;  // 0x03A8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsAttacking;  // 0x03AC, size 0x1

    UFUNCTION(BlueprintCallable) void BeginTravelEffects();
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void Cleanup();
    UFUNCTION() void ExecuteUbergraph_BP_WorldBoss_SandWorm_MovementProxy(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetDesiredTransform(FTransform TargetTransform);  // parameters 0x30
    UFUNCTION(BlueprintCallable) void SetupStats();
    UFUNCTION(BlueprintCallable) void TickDamageActorsInPath();
    UFUNCTION() void Timeline_Submerge__FinishedFunc();
    UFUNCTION() void Timeline_Submerge__UpdateFunc();
};
