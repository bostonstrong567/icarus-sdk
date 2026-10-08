// /Game/BP/UI/InventoryPlayer/BP_ActorPreview.BP_ActorPreview_C
// Derives from: AActor > UObject
// size 0x24C, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_ActorPreview_C : public AActor
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0220, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneCaptureComponent2D* SceneCaptureComponent2D;  // 0x0228, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCameraComponent* Camera;  // 0x0230, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* CameraRoot;  // 0x0238, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0240, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool PreviewVisible;  // 0x0248, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool RenderTargetSet;  // 0x0249, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool UseSceneCapture;  // 0x024A, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool UseCameraComponent;  // 0x024B, size 0x1

    UFUNCTION(BlueprintCallable) void ClearCurrentMeshes();
    UFUNCTION(BlueprintCallable) void ConstructPreviewMeshArray(TArray<USkeletalMesh*>& MeshArray);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void CreateRenderTarget(int32 Width, int32 Height, UTextureRenderTarget2D*& RenderTarget);  // parameters 0x10
    UFUNCTION() void ExecuteUbergraph_BP_ActorPreview(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetLightComponents(TArray<ULightComponent*>& SceneCaptureLights, TArray<ULightComponent*>& CameraComponentLights);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void GetShowOnlyComponents(TArray<UPrimitiveComponent*>& OutComponents);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void ResolveVisibility(bool& Visible);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetPreviewVisibility(bool NewPreviewVisibility);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void UpdateActorPreview(bool Visible);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void UpdateCaptureMode(bool UseSceneCapture, bool UseCameraComponent);  // parameters 0x2
    UFUNCTION(BlueprintCallable) void UpdatePreviewVisibility();
};
