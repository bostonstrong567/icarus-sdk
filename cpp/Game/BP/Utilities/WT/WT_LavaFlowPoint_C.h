// /Game/BP/Utilities/WT/WT_LavaFlowPoint.WT_LavaFlowPoint_C
// Derives from: AActor > UObject
// size 0x270, a blueprint class, blueprint

UCLASS(Config=Engine)
class AWT_LavaFlowPoint_C : public AActor
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0220, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UArrowComponent* Arrow;  // 0x0228, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* StaticMesh;  // 0x0230, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0238, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FlowSpeed;  // 0x0240, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Base_to_Flowing;  // 0x0244, size 0x4, named "Base to Flowing"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Dryness;  // 0x0248, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float EdgeTaper;  // 0x024C, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float EdgeNoise;  // 0x0250, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Base_to_Patchy;  // 0x0254, size 0x4, named "Base to Patchy"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D Scale;  // 0x0258, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float RotateRapids;  // 0x0260, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Show_Arrow;  // 0x0264, size 0x1, named "Show Arrow"
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UMaterialInterface* Material;  // 0x0268, size 0x8

    UFUNCTION() void ExecuteUbergraph_WT_LavaFlowPoint(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void SetMaterial();
    UFUNCTION(BlueprintCallable) void SetProperties();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UserConstructionScript();
};
