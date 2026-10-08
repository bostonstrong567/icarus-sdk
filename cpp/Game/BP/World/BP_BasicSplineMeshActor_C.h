// /Game/BP/World/BP_BasicSplineMeshActor.BP_BasicSplineMeshActor_C
// Derives from: AActor > UObject
// size 0x248, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_BasicSplineMeshActor_C : public AActor
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) USplineComponent* Spline;  // 0x0220, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0228, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UStaticMesh* SplineMesh;  // 0x0230, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UMaterialInterface*> Materials;  // 0x0238, size 0x10

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UserConstructionScript();
};
