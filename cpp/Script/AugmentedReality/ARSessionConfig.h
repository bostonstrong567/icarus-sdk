// /Script/AugmentedReality.ARSessionConfig
// Derives from: UDataAsset > UObject
// size 0x110, declared in Engine/Source/Runtime/AugmentedReality/Public/ARSessionConfig.h

UCLASS()
class UARSessionConfig : public UDataAsset
{
public:
    UPROPERTY(EditAnywhere) bool bGenerateMeshDataFromTrackedGeometry;  // 0x0030, size 0x1
    UPROPERTY(EditAnywhere) bool bGenerateCollisionForMeshData;  // 0x0031, size 0x1
    UPROPERTY(EditAnywhere) bool bGenerateNavMeshForMeshData;  // 0x0032, size 0x1
    UPROPERTY(EditAnywhere) bool bUseMeshDataForOcclusion;  // 0x0033, size 0x1
    UPROPERTY(EditAnywhere) bool bRenderMeshDataInWireframe;  // 0x0034, size 0x1
    UPROPERTY(EditAnywhere) bool bTrackSceneObjects;  // 0x0035, size 0x1
    UPROPERTY(EditAnywhere) bool bUsePersonSegmentationForOcclusion;  // 0x0036, size 0x1
    UPROPERTY(EditAnywhere) bool bUseSceneDepthForOcclusion;  // 0x0037, size 0x1
    UPROPERTY(EditAnywhere) bool bUseAutomaticImageScaleEstimation;  // 0x0038, size 0x1
    UPROPERTY(EditAnywhere) bool bUseStandardOnboardingUX;  // 0x0039, size 0x1
    UPROPERTY(EditAnywhere) EARWorldAlignment WorldAlignment;  // 0x003A, size 0x1
    UPROPERTY(EditAnywhere) EARSessionType SessionType;  // 0x003B, size 0x1
    UPROPERTY(Deprecated) EARPlaneDetectionMode PlaneDetectionMode;  // 0x003C, size 0x1
    UPROPERTY(EditAnywhere) bool bHorizontalPlaneDetection;  // 0x003D, size 0x1
    UPROPERTY(EditAnywhere) bool bVerticalPlaneDetection;  // 0x003E, size 0x1
    UPROPERTY(EditAnywhere) bool bEnableAutoFocus;  // 0x003F, size 0x1
    UPROPERTY(EditAnywhere) EARLightEstimationMode LightEstimationMode;  // 0x0040, size 0x1
    UPROPERTY(EditAnywhere) EARFrameSyncMode FrameSyncMode;  // 0x0041, size 0x1
    UPROPERTY(EditAnywhere) bool bEnableAutomaticCameraOverlay;  // 0x0042, size 0x1
    UPROPERTY(EditAnywhere) bool bEnableAutomaticCameraTracking;  // 0x0043, size 0x1
    UPROPERTY(EditAnywhere) bool bResetCameraTracking;  // 0x0044, size 0x1
    UPROPERTY(EditAnywhere) bool bResetTrackedObjects;  // 0x0045, size 0x1
    UPROPERTY(EditAnywhere) TArray<UARCandidateImage*> CandidateImages;  // 0x0048, size 0x10
    UPROPERTY(EditAnywhere) int32 MaxNumSimultaneousImagesTracked;  // 0x0058, size 0x4
    UPROPERTY(EditAnywhere) EAREnvironmentCaptureProbeType EnvironmentCaptureProbeType;  // 0x005C, size 0x1
    UPROPERTY(EditAnywhere) TArray<uint8> WorldMapData;  // 0x0060, size 0x10
    UPROPERTY(EditAnywhere) TArray<UARCandidateObject*> CandidateObjects;  // 0x0070, size 0x10
    UPROPERTY(EditAnywhere) FARVideoFormat DesiredVideoFormat;  // 0x0080, size 0xC
    UPROPERTY(EditAnywhere) bool bUseOptimalVideoFormat;  // 0x008C, size 0x1
    UPROPERTY(EditAnywhere) EARFaceTrackingDirection FaceTrackingDirection;  // 0x008D, size 0x1
    UPROPERTY(EditAnywhere) EARFaceTrackingUpdate FaceTrackingUpdate;  // 0x008E, size 0x1
    UPROPERTY(EditAnywhere) int32 MaxNumberOfTrackedFaces;  // 0x0090, size 0x4
    UPROPERTY() TArray<uint8> SerializedARCandidateImageDatabase;  // 0x0098, size 0x10
    UPROPERTY(EditAnywhere) EARSessionTrackingFeature EnabledSessionTrackingFeature;  // 0x00A8, size 0x1
    UPROPERTY(EditAnywhere) EARSceneReconstruction SceneReconstructionMethod;  // 0x00A9, size 0x1
    UPROPERTY(EditAnywhere) TSubclassOf<UARPlaneComponent> PlaneComponentClass;  // 0x00B0, size 0x8
    UPROPERTY(EditAnywhere) TSubclassOf<UARPointComponent> PointComponentClass;  // 0x00B8, size 0x8
    UPROPERTY(EditAnywhere) TSubclassOf<UARFaceComponent> FaceComponentClass;  // 0x00C0, size 0x8
    UPROPERTY(EditAnywhere) TSubclassOf<UARImageComponent> ImageComponentClass;  // 0x00C8, size 0x8
    UPROPERTY(EditAnywhere) TSubclassOf<UARQRCodeComponent> QRCodeComponentClass;  // 0x00D0, size 0x8
    UPROPERTY(EditAnywhere) TSubclassOf<UARPoseComponent> PoseComponentClass;  // 0x00D8, size 0x8
    UPROPERTY(EditAnywhere) TSubclassOf<UAREnvironmentProbeComponent> EnvironmentProbeComponentClass;  // 0x00E0, size 0x8
    UPROPERTY(EditAnywhere) TSubclassOf<UARObjectComponent> ObjectComponentClass;  // 0x00E8, size 0x8
    UPROPERTY(EditAnywhere) TSubclassOf<UARMeshComponent> MeshComponentClass;  // 0x00F0, size 0x8
    UPROPERTY(EditAnywhere) TSubclassOf<UARGeoAnchorComponent> GeoAnchorComponentClass;  // 0x00F8, size 0x8
    UPROPERTY(EditAnywhere) UMaterialInterface* DefaultMeshMaterial;  // 0x0100, size 0x8
    UPROPERTY(EditAnywhere) UMaterialInterface* DefaultWireframeMeshMaterial;  // 0x0108, size 0x8

    UFUNCTION(BlueprintCallable) void AddCandidateImage(UARCandidateImage* NewCandidateImage);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void AddCandidateObject(UARCandidateObject* CandidateObject);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) TArray<UARCandidateImage*> GetCandidateImageList() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) TArray<UARCandidateObject*> GetCandidateObjectList() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) FARVideoFormat GetDesiredVideoFormat() const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) EARSessionTrackingFeature GetEnabledSessionTrackingFeature() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) EAREnvironmentCaptureProbeType GetEnvironmentCaptureProbeType() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) EARFaceTrackingDirection GetFaceTrackingDirection() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) EARFaceTrackingUpdate GetFaceTrackingUpdate() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) EARFrameSyncMode GetFrameSyncMode() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) EARLightEstimationMode GetLightEstimationMode() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetMaxNumSimultaneousImagesTracked() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) EARPlaneDetectionMode GetPlaneDetectionMode() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) EARSceneReconstruction GetSceneReconstructionMethod() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) EARSessionType GetSessionType() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) EARWorldAlignment GetWorldAlignment() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) TArray<uint8> GetWorldMapData() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetCandidateObjectList(const TArray<UARCandidateObject*>& InCandidateObjects);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetDesiredVideoFormat(FARVideoFormat NewFormat);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void SetEnableAutoFocus(bool bNewValue);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetFaceTrackingDirection(EARFaceTrackingDirection InDirection);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetFaceTrackingUpdate(EARFaceTrackingUpdate InUpdate);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetResetCameraTracking(bool bNewValue);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetResetTrackedObjects(bool bNewValue);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetSceneReconstructionMethod(EARSceneReconstruction InSceneReconstructionMethod);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetSessionTrackingFeatureToEnable(EARSessionTrackingFeature InSessionTrackingFeature);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetWorldMapData(TArray<uint8> WorldMapData);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) bool ShouldEnableAutoFocus() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool ShouldEnableCameraTracking() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool ShouldRenderCameraOverlay() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool ShouldResetCameraTracking() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool ShouldResetTrackedObjects() const;  // parameters 0x1
};
