// /Game/BP/Objects/World/Items/WorldObjects/InWorld/BP_SulfurPoolsActor.BP_SulfurPoolsActor_C
// Derives from: AIcarusActor > AActor > UObject
// size 0x2E8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_SulfurPoolsActor_C : public AIcarusActor
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_SulfurGas_Up;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x02D0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SulfurPoolRadius;  // 0x02D8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SpawnRate;  // 0x02DC, size 0x4
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool EffectActive;  // 0x02E0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 AuraId;  // 0x02E4, size 0x4

    UFUNCTION() void ExecuteUbergraph_BP_SulfurPoolsActor(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnRep_EffectActive();
    UFUNCTION(BlueprintCallable) void TriggerSulfurPoolsEffect(bool Active);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UserConstructionScript();
};
