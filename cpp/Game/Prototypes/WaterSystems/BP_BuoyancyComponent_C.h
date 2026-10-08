// /Game/Prototypes/WaterSystems/BP_BuoyancyComponent.BP_BuoyancyComponent_C
// Derives from: UBuoyancyBehaviour > UFloatableComponent > UTraitComponent > UActorComponent > UObject
// size 0x128, a blueprint class, blueprint

UCLASS(EditInlineNew, Config=Engine)
class UBP_BuoyancyComponent_C : public UBuoyancyBehaviour
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0118, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool Floating;  // 0x0120, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool GeneratePoints;  // 0x0121, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 SwimmingModifierUID;  // 0x0124, size 0x4

    UFUNCTION(BlueprintCallable) void ClearTestPoints();
    UFUNCTION() void ExecuteUbergraph_BP_BuoyancyComponent(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void GenerateFloatingPoints();
    UFUNCTION(BlueprintCallable) void GenerateFloatingPointsFromMesh(TArray<UStaticMeshComponent*>& Meshes);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void GenerateMeshPoints();
    UFUNCTION(BlueprintCallable) void GeneratePointsForMesh(UStaticMeshComponent* Mesh, bool HalfPoints);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void GeneratePointsFromSockets();
    UFUNCTION(BlueprintCallable) void OnRep_Floating();
    UFUNCTION(BlueprintImplementableEvent) void UpdateOverlappedState();
    UFUNCTION(BlueprintCallable) void UpdateState();
};
