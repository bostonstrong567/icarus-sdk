// /Script/HeadMountedDisplay.MotionControllerComponent
// Derives from: UPrimitiveComponent > USceneComponent > UActorComponent > UObject
// size 0x510, declared in Engine/Source/Runtime/HeadMountedDisplay/Public/MotionControllerComponent.h

UCLASS(Config=Engine)
class UMotionControllerComponent : public UPrimitiveComponent
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 PlayerIndex;  // 0x0450, size 0x4
    UPROPERTY(Deprecated, BlueprintReadWrite) EControllerHand Hand;  // 0x0454, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName MotionSource;  // 0x0458, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bDisableLowLatencyUpdate : 1;  // 0x0460, mask 0x01
    UPROPERTY(BlueprintReadOnly) ETrackingStatus CurrentTrackingStatus;  // 0x0464, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bDisplayDeviceModel;  // 0x0465, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName DisplayModelSource;  // 0x0468, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UStaticMesh* CustomDisplayMesh;  // 0x0470, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TArray<UMaterialInterface*> DisplayMeshMaterialOverrides;  // 0x0478, size 0x10
    UPROPERTY(Transient, Instanced, BlueprintReadOnly) UPrimitiveComponent* DisplayComponent;  // 0x04F0, size 0x8

    // Not reflected: the engine's scripting cannot see these.
    IMotionController * InUseMotionController;  // 0x0488, protected
    bool bTracked;  // 0x0490, private
    bool bHasAuthority;  // 0x0491, private
    FTransform RenderThreadRelativeTransform;  // 0x04A0, private
    FVector RenderThreadComponentScale;  // 0x04D0, private
    TSharedPtr<UMotionControllerComponent::FViewExtension,1> ViewExtension;  // 0x04E0, private
    UMotionControllerComponent::EModelLoadStatus DisplayModelLoadState;  // 0x04F8, private
    FXRDeviceId DisplayDeviceId;  // 0x04FC, private

    UFUNCTION(BlueprintCallable) FVector GetHandJointPosition(int32 jointIndex, bool& bValueFound);  // parameters 0x14
    UFUNCTION(BlueprintCallable) float GetParameterValue(FName InName, bool& bValueFound);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) EControllerHand GetTrackingSource() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsTracked() const;  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void OnMotionControllerUpdated();
    UFUNCTION(BlueprintCallable) void SetAssociatedPlayerIndex(int32 NewPlayer);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetCustomDisplayMesh(UStaticMesh* NewDisplayMesh);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetDisplayModelSource(FName NewDisplayModelSource);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetShowDeviceModel(bool bShowControllerModel);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetTrackingMotionSource(FName NewSource);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetTrackingSource(EControllerHand NewSource);  // parameters 0x1
};
