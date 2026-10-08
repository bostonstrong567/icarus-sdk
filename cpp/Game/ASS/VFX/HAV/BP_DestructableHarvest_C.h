// /Game/ASS/VFX/HAV/BP_DestructableHarvest.BP_DestructableHarvest_C
// Derives from: ADestructibleActor > AActor > UObject
// size 0x25C, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_DestructableHarvest_C : public ADestructibleActor
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0238, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float OffsetEmitter;  // 0x0240, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UNiagaraSystem* NiagaraEmitter;  // 0x0248, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float EmitterHeight;  // 0x0250, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float HeightOffsetMultiplier;  // 0x0254, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DestructionImpulse;  // 0x0258, size 0x4

    UFUNCTION(BlueprintCallable) void DelayedDestroy();
    UFUNCTION() void ExecuteUbergraph_BP_DestructableHarvest(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
