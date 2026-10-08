// /Game/BP/Building/SnowSystem/BPC_Environmental_Buildup_Skeletal.BPC_Environmental_Buildup_Skeletal_C
// Derives from: USkeletalMeshComponent > USkinnedMeshComponent > UMeshComponent > UPrimitiveComponent > USceneComponent > UActorComponent > UObject
// size 0xEF0, a blueprint class, blueprint

UCLASS(EditInlineNew, Config=Engine)
class UBPC_Environmental_Buildup_Skeletal_C : public USkeletalMeshComponent
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0ED0, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) float Amount;  // 0x0ED8, size 0x4
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) TEnumAsByte<EAccumulationType> AccumulationType;  // 0x0EDC, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString MorphTargetName;  // 0x0EE0, size 0x10

    UFUNCTION() void ExecuteUbergraph_BPC_Environmental_Buildup_Skeletal(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnRep_AccumulationType();
    UFUNCTION(BlueprintCallable) void OnRep_Amount();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void UpdateAmount(float Amount);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void UpdateMaterial();
    UFUNCTION(BlueprintCallable) void UpdateScale();
    UFUNCTION(BlueprintCallable) void UpdateType(TEnumAsByte<EAccumulationType> Type);  // parameters 0x1
};
