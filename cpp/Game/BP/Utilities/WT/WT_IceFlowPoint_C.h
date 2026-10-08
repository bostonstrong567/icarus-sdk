// /Game/BP/Utilities/WT/WT_IceFlowPoint.WT_IceFlowPoint_C
// Derives from: AActor > UObject
// size 0x258, a blueprint class, blueprint

UCLASS(Config=Engine)
class AWT_IceFlowPoint_C : public AActor
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0220, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UArrowComponent* Arrow;  // 0x0228, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* StaticMesh;  // 0x0230, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0238, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Cracked;  // 0x0240, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Snow;  // 0x0244, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float EdgeTaper;  // 0x0248, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float EdgeNoise;  // 0x024C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D Scale;  // 0x0250, size 0x8

    UFUNCTION() void ExecuteUbergraph_WT_IceFlowPoint(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void SetProperties();
    UFUNCTION(BlueprintCallable) void Startup();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UserConstructionScript();
};
