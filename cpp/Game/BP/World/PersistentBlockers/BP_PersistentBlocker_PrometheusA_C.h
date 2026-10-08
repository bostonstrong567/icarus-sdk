// /Game/BP/World/PersistentBlockers/BP_PersistentBlocker_PrometheusA.BP_PersistentBlocker_PrometheusA_C
// Derives from: APersistentBlocker > AIcarusActor > AActor > UObject
// size 0x2E8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_PersistentBlocker_PrometheusA_C : public APersistentBlocker
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* BlockerLC;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Scene;  // 0x02E0, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_PersistentBlocker_PrometheusA(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void UpdateDestroyedState();
};
