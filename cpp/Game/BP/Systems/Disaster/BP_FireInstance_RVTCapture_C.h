// /Game/BP/Systems/Disaster/BP_FireInstance_RVTCapture.BP_FireInstance_RVTCapture_C
// Derives from: AActor > UObject
// size 0x23C, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_FireInstance_RVTCapture_C : public AActor
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SceneCaptureTarget;  // 0x0220, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneCaptureComponent2D* SceneCaptureComponent2D;  // 0x0228, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UProceduralMeshComponent* ProceduralMesh;  // 0x0230, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 test;  // 0x0238, size 0x4

    UFUNCTION(BlueprintCallable) void Capture(UConcaveHullMesh* ConcaveHull);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UserConstructionScript();
};
