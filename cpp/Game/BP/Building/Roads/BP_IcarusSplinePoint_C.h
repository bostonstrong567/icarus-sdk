// /Game/BP/Building/Roads/BP_IcarusSplinePoint.BP_IcarusSplinePoint_C
// Derives from: UIcarusSplinePoint > UStaticMeshComponent > UMeshComponent > UPrimitiveComponent > USceneComponent > UActorComponent > UObject
// size 0x570, a blueprint class, blueprint

UCLASS(EditInlineNew, Config=Engine)
class UBP_IcarusSplinePoint_C : public UIcarusSplinePoint
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x04E0, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) UStaticMesh* RepMesh;  // 0x04E8, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) UMaterialInterface* RepMaterial;  // 0x04F0, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) FTransform RepTrans;  // 0x0500, size 0x30
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool Ghost;  // 0x0530, size 0x1
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) UMaterialInterface* GhostMaterial;  // 0x0538, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTransform NonReplicatedTransform;  // 0x0540, size 0x30

    UFUNCTION(BlueprintCallable) void Async_ReInit();  // named "Async ReInit"
    UFUNCTION() void ExecuteUbergraph_BP_IcarusSplinePoint(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetTransform(FTransform& Out) const;  // parameters 0x30
    UFUNCTION(BlueprintCallable) void OnRep_Ghost();
    UFUNCTION(BlueprintCallable) void OnRep_GhostMaterial();
    UFUNCTION(BlueprintCallable) void OnRep_RepMaterial();
    UFUNCTION(BlueprintCallable) void OnRep_RepMesh();
    UFUNCTION(BlueprintCallable) void OnRep_RepTrans();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void Update_Transform(FTransform NewTransform);  // parameters 0x30, named "Update Transform"
};
