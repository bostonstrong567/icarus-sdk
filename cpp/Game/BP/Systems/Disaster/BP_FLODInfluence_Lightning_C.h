// /Game/BP/Systems/Disaster/BP_FLODInfluence_Lightning.BP_FLODInfluence_Lightning_C
// Derives from: UFLODInfluenceComponent > UActorComponent > UObject
// size 0xE0, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_FLODInfluence_Lightning_C : public UFLODInfluenceComponent
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00C8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FFLODInstanceID> ActiveInfluenceInstances;  // 0x00D0, size 0x10

    UFUNCTION(BlueprintCallable) void AddLightningInfluencedInstance(FFLODInstanceID Instance);  // parameters 0x10
    UFUNCTION() void ExecuteUbergraph_BP_FLODInfluence_Lightning(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetLightningStrikeTarget(TArray<AActor*>& TargetActors, float Radius, FFLODInstanceID& FoundInstance, bool& Found);  // parameters 0x25
    UFUNCTION(BlueprintCallable) void RemoveLightningInfluencedInstance(FFLODInstanceID Instance);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void UpdateActiveInfluences();
};
