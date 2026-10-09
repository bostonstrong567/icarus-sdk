// /Script/Engine.SceneCaptureComponent2D
// Derives from: USceneCaptureComponent > USceneComponent > UActorComponent > UObject
// size 0x8C0, declared in Engine/Source/Runtime/Engine/Classes/Components/SceneCaptureComponent2D.h

UCLASS(EditInlineNew, Config=Engine)
class USceneCaptureComponent2D : public USceneCaptureComponent
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<ECameraProjectionMode> ProjectionType;  // 0x02B0, size 0x1
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float FOVAngle;  // 0x02B4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float OrthoWidth;  // 0x02B8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UTextureRenderTarget2D* TextureTarget;  // 0x02C0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<ESceneCaptureCompositeMode> CompositeMode;  // 0x02C8, size 0x1
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) FPostProcessSettings PostProcessSettings;  // 0x02D0, size 0x560
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float PostProcessBlendWeight;  // 0x0830, size 0x4
    UPROPERTY(EditAnywhere) uint8 bOverride_CustomNearClippingPlane : 1;  // 0x0834, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CustomNearClippingPlane;  // 0x0838, size 0x4
    UPROPERTY(BlueprintReadWrite) bool bUseCustomProjectionMatrix;  // 0x083C, size 0x1
    UPROPERTY(BlueprintReadWrite) FMatrix CustomProjectionMatrix;  // 0x0840, size 0x40
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bEnableClipPlane;  // 0x0880, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector ClipPlaneBase;  // 0x0884, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector ClipPlaneNormal;  // 0x0890, size 0xC
    UPROPERTY(Transient, BlueprintReadWrite) uint8 bCameraCutThisFrame : 1;  // 0x089C, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bConsiderUnrenderedOpaquePixelAsFullyTranslucent : 1;  // 0x089C, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bDisableFlipCopyGLES;  // 0x08A0, size 0x1
    TArray<TWeakPtr<ISceneViewExtension,1>,TSizedDefaultAllocator<32> > SceneViewExtensions;  // 0x08A8, not reflected

    UFUNCTION(BlueprintCallable) void AddOrUpdateBlendable(TScriptInterface<IBlendableInterface> InBlendableObject, float InWeight);  // parameters 0x14
    UFUNCTION(BlueprintCallable) void CaptureScene();
    UFUNCTION(BlueprintCallable) void RemoveBlendable(TScriptInterface<IBlendableInterface> InBlendableObject);  // parameters 0x10

    // Virtual functions that start here:
    //   GetCameraView
};
