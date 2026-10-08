// /Game/BP/Building/SnowSystem/BPC_EnvironmentalBuildup.BPC_EnvironmentalBuildup_C
// Derives from: UStaticMeshComponent > UMeshComponent > UPrimitiveComponent > USceneComponent > UActorComponent > UObject
// size 0x4F9, a blueprint class, blueprint

UCLASS(EditInlineNew, Config=Engine)
class UBPC_EnvironmentalBuildup_C : public UStaticMeshComponent
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x04E0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MeshXScale;  // 0x04E8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MeshYScale;  // 0x04EC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MeshZScaleMultiplier;  // 0x04F0, size 0x4
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) float Amount;  // 0x04F4, size 0x4
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) TEnumAsByte<EAccumulationType> AccumulationType;  // 0x04F8, size 0x1

    UFUNCTION() void ExecuteUbergraph_BPC_EnvironmentalBuildup(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnRep_AccumulationType();
    UFUNCTION(BlueprintCallable) void OnRep_Amount();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void UpdateAmount(float Amount);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void UpdateMaterial();
    UFUNCTION(BlueprintCallable) void UpdateScale();
    UFUNCTION(BlueprintCallable) void UpdateType(TEnumAsByte<EAccumulationType> Type);  // parameters 0x1
};
