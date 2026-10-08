// /Game/BP/AI/Bosses/Misc/BP_GroundRumble.BP_GroundRumble_C
// Derives from: ABP_BossAction_C > AActor > UObject
// size 0x298, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_GroundRumble_C : public ABP_BossAction_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0228, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UNiagaraComponent* CurrentSystem;  // 0x0230, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 NumEruptions;  // 0x0238, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FVector> EruptionPoints;  // 0x0240, size 0x10
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) float EruptionDelay;  // 0x0250, size 0x4
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) float EruptionDelayDeviation;  // 0x0254, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FTimerHandle> DelayedEruptionHandles;  // 0x0258, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 CurrentEruptionIndex;  // 0x0268, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UNiagaraComponent*> PreEruptionParticles;  // 0x0270, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<float> EruptionTimes;  // 0x0280, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRandomStream RandomStream;  // 0x0290, size 0x8

    UFUNCTION(BlueprintCallable) void DoEruption();
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void EruptAtLocations(const TArray<FVector_NetQuantize>& Locations);  // parameters 0x10
    UFUNCTION() void ExecuteUbergraph_BP_GroundRumble(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GenerateEruptionTargets(TArray<FVector>& EruptionPoints);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetupEruptions(int32 EruptionCount);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SpawnPreEruptionFX(TArray<FVector>& Array);  // parameters 0x10
};
