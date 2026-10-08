// /Game/BP/Objects/World/Items/Deployables/BP_DestructibleMeshActor.BP_DestructibleMeshActor_C
// Derives from: AActor > UObject
// size 0x256, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_DestructibleMeshActor_C : public AActor
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0220, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UDestructibleComponent* Destructible;  // 0x0228, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0230, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) UDestructibleMesh* DestructibleMesh;  // 0x0238, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool FaultFound;  // 0x0240, size 0x1
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) float ImpulseMultiplier;  // 0x0244, size 0x4
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) FVector ImpulseLocationOverride;  // 0x0248, size 0xC
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool Replicates;  // 0x0254, size 0x1
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool EnableCollision;  // 0x0255, size 0x1

    UFUNCTION(BlueprintCallable) void CheckMaterials();
    UFUNCTION() void ExecuteUbergraph_BP_DestructibleMeshActor(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
