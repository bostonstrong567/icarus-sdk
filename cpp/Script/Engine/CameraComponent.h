// /Script/Engine.CameraComponent
// Derives from: USceneComponent > UActorComponent > UObject
// size 0x7D0, declared in Engine/Source/Runtime/Engine/Classes/Camera/CameraComponent.h

UCLASS(Config=Engine)
class UCameraComponent : public USceneComponent
{
public:
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float FieldOfView;  // 0x01F8, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float OrthoWidth;  // 0x01FC, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float OrthoNearClipPlane;  // 0x0200, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float OrthoFarClipPlane;  // 0x0204, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float AspectRatio;  // 0x0208, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) uint8 bConstrainAspectRatio : 1;  // 0x020C, mask 0x01
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) uint8 bUseFieldOfViewForLOD : 1;  // 0x020C, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bLockToHmd : 1;  // 0x020C, mask 0x04
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bUsePawnControlRotation : 1;  // 0x020C, mask 0x08
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) TEnumAsByte<ECameraProjectionMode> ProjectionMode;  // 0x020D, size 0x1
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float PostProcessBlendWeight;  // 0x0240, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) FPostProcessSettings PostProcessSettings;  // 0x0270, size 0x560

    // Not reflected: the engine's scripting cannot see these.
    uint8 : 1 bUseAdditiveOffset;  // 0x020C, protected
    FTransform AdditiveOffset;  // 0x0210, protected
    float AdditiveFOVOffset;  // 0x0244, protected
    TArray<FPostProcessSettings,TSizedDefaultAllocator<32> > ExtraPostProcessBlends;  // 0x0248, protected
    TArray<float,TSizedDefaultAllocator<32> > ExtraPostProcessBlendWeights;  // 0x0258, protected

    UFUNCTION(BlueprintCallable) void AddOrUpdateBlendable(TScriptInterface<IBlendableInterface> InBlendableObject, float InWeight);  // parameters 0x14
    UFUNCTION(BlueprintCallable) void GetCameraView(float DeltaTime, FMinimalViewInfo& DesiredView);  // parameters 0x600
    UFUNCTION(BlueprintCallable) void OnCameraMeshHiddenChanged();
    UFUNCTION(BlueprintCallable) void RemoveBlendable(TScriptInterface<IBlendableInterface> InBlendableObject);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetAspectRatio(float InAspectRatio);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetConstraintAspectRatio(bool bInConstrainAspectRatio);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetFieldOfView(float InFieldOfView);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetOrthoFarClipPlane(float InOrthoFarClipPlane);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetOrthoNearClipPlane(float InOrthoNearClipPlane);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetOrthoWidth(float InOrthoWidth);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetPostProcessBlendWeight(float InPostProcessBlendWeight);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetProjectionMode(TEnumAsByte<ECameraProjectionMode> InProjectionMode);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetUseFieldOfViewForLOD(bool bInUseFieldOfViewForLOD);  // parameters 0x1

    // Virtual functions that start here:
    //   GetCameraView, NotifyCameraCut, SetFieldOfView
};
