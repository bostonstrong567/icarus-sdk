// /Game/BP/Utilities/WT/WT_WaterFlowPoint.WT_WaterFlowPoint_C
// Derives from: AActor > UObject
// size 0x25C, a blueprint class, blueprint

UCLASS(Config=Engine)
class AWT_WaterFlowPoint_C : public AActor
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UArrowComponent* Arrow;  // 0x0220, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* StaticMesh;  // 0x0228, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0230, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FlowSpeed;  // 0x0238, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float NormalFlatness;  // 0x023C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Clearness;  // 0x0240, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float EdgeTaper;  // 0x0244, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float EdgeNoise;  // 0x0248, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float RapidsIntensity;  // 0x024C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D Scale;  // 0x0250, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float RotateRapids;  // 0x0258, size 0x4

    UFUNCTION(BlueprintCallable) void SetProperties();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UserConstructionScript();
};
