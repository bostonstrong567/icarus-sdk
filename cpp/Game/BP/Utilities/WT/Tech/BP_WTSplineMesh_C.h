// /Game/BP/Utilities/WT/Tech/BP_WTSplineMesh.BP_WTSplineMesh_C
// Derives from: AActor > UObject
// size 0x245, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_WTSplineMesh_C : public AActor
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0220, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FWTSplineMesh> SplineMeshes;  // 0x0228, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector Offset;  // 0x0238, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool GenerateOverlaps;  // 0x0244, size 0x1

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UserConstructionScript();
};
