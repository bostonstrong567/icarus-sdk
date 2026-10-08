// /Game/ASS/VFX/BP_FX_TerrainDeformationCapture.BP_FX_TerrainDeformationCapture_C
// Derives from: AActor > UObject
// size 0x249, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_FX_TerrainDeformationCapture_C : public AActor
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0220, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneCaptureComponent2D* SceneCapture;  // 0x0228, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0230, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInstanceDynamic* DrawMaterial;  // 0x0238, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D MoveOffset;  // 0x0240, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool SettingsEnabled;  // 0x0248, size 0x1

    UFUNCTION(BlueprintCallable) void DrawToPersistent();
    UFUNCTION() void ExecuteUbergraph_BP_FX_TerrainDeformationCapture(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void MoveCapture();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ResolveEnabledState(bool& Enabled);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SettingsChanged(bool Value);  // parameters 0x1
};
