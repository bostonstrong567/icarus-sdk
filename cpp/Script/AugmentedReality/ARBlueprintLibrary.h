// /Script/AugmentedReality.ARBlueprintLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Engine/Source/Runtime/AugmentedReality/Public/ARBlueprintLibrary.h

UCLASS()
class UARBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

    UFUNCTION(BlueprintCallable) static bool AddManualEnvironmentCaptureProbe(FVector Location, FVector Extent);  // parameters 0x19
    UFUNCTION(BlueprintCallable) static UARCandidateImage* AddRuntimeCandidateImage(UARSessionConfig* SessionConfig, UTexture2D* CandidateTexture, FString FriendlyName, float PhysicalWidth);  // parameters 0x30
    UFUNCTION(BlueprintCallable) static bool AddTrackedPointWithName(const FTransform& WorldTransform, FString PointName, bool bDeletePointsWithSameName);  // parameters 0x42
    UFUNCTION(BlueprintCallable) static void CalculateAlignmentTransform(const FTransform& TransformInFirstCoordinateSystem, const FTransform& TransformInSecondCoordinateSystem, FTransform& AlignmentTransform);  // parameters 0x90
    UFUNCTION(BlueprintCallable) static void CalculateClosestIntersection(const TArray<FVector>& StartPoints, const TArray<FVector>& EndPoints, FVector& ClosestIntersection);  // parameters 0x2C
    UFUNCTION(BlueprintCallable) static void DebugDrawPin(UARPin* ARPin, UObject* WorldContextObject, FLinearColor Color, float Scale, float PersistForSeconds);  // parameters 0x28
    UFUNCTION(BlueprintCallable) static void DebugDrawTrackedGeometry(UARTrackedGeometry* TrackedGeometry, UObject* WorldContextObject, FLinearColor Color, float OutlineThickness, float PersistForSeconds);  // parameters 0x28
    UFUNCTION(BlueprintCallable) static TArray<UARTrackedPoint*> FindTrackedPointsByName(FString PointName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FARSessionStatus GetARSessionStatus();  // parameters 0x18
    UFUNCTION(BlueprintCallable) static UARTexture* GetARTexture(EARTextureType TextureType);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static float GetARWorldScale();  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTransform GetAlignmentTransform();  // parameters 0x30
    UFUNCTION(BlueprintCallable) static TArray<UARTrackedGeometry*> GetAllGeometries();  // parameters 0x10
    UFUNCTION(BlueprintCallable) static TArray<UARTrackedGeometry*> GetAllGeometriesByClass(TSubclassOf<UARTrackedGeometry> GeometryClass);  // parameters 0x18
    UFUNCTION(BlueprintCallable) static TArray<UARPin*> GetAllPins();  // parameters 0x10
    UFUNCTION(BlueprintCallable) static TArray<FARPose2D> GetAllTracked2DPoses();  // parameters 0x10
    UFUNCTION(BlueprintCallable) static TArray<UAREnvironmentCaptureProbe*> GetAllTrackedEnvironmentCaptureProbes();  // parameters 0x10
    UFUNCTION(BlueprintCallable) static TArray<UARTrackedImage*> GetAllTrackedImages();  // parameters 0x10
    UFUNCTION(BlueprintCallable) static TArray<UARPlaneGeometry*> GetAllTrackedPlanes();  // parameters 0x10
    UFUNCTION(BlueprintCallable) static TArray<UARTrackedPoint*> GetAllTrackedPoints();  // parameters 0x10
    UFUNCTION(BlueprintCallable) static TArray<UARTrackedPose*> GetAllTrackedPoses();  // parameters 0x10
    UFUNCTION(BlueprintCallable) static UARTextureCameraDepth* GetCameraDepth();  // parameters 0x8
    UFUNCTION(BlueprintCallable) static UARTextureCameraImage* GetCameraImage();  // parameters 0x8
    UFUNCTION(BlueprintCallable) static bool GetCameraIntrinsics(FARCameraIntrinsics& OutCameraIntrinsics);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static UARLightEstimate* GetCurrentLightEstimate();  // parameters 0x8
    UFUNCTION(BlueprintCallable) static int32 GetNumberOfTrackedFacesSupported();  // parameters 0x4
    UFUNCTION(BlueprintCallable) static bool GetObjectClassificationAtLocation(const FVector& InWorldLocation, EARObjectClassification& OutClassification, FVector& OutClassificationLocation, float MaxLocationDiff);  // parameters 0x21
    UFUNCTION(BlueprintCallable) static UARTexture* GetPersonSegmentationDepthImage();  // parameters 0x8
    UFUNCTION(BlueprintCallable) static UARTexture* GetPersonSegmentationImage();  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static TArray<FVector> GetPointCloud();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static UARSessionConfig* GetSessionConfig();  // parameters 0x8
    UFUNCTION(BlueprintCallable) static TArray<FARVideoFormat> GetSupportedVideoFormats(EARSessionType SessionType);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static EARTrackingQuality GetTrackingQuality();  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) static EARTrackingQualityReason GetTrackingQualityReason();  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) static EARWorldMappingState GetWorldMappingStatus();  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool IsARPinLocalStoreReady();  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool IsARPinLocalStoreSupported();  // parameters 0x1
    UFUNCTION(BlueprintCallable) static bool IsARSupported();  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool IsSceneReconstructionSupported(EARSessionType SessionType, EARSceneReconstruction SceneReconstructionMethod);  // parameters 0x3
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool IsSessionTrackingFeatureSupported(EARSessionType SessionType, EARSessionTrackingFeature SessionTrackingFeature);  // parameters 0x3
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool IsSessionTypeSupported(EARSessionType SessionType);  // parameters 0x2
    UFUNCTION(BlueprintCallable) static TArray<FARTraceResult> LineTraceTrackedObjects(FVector2D ScreenCoord, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon);  // parameters 0x20
    UFUNCTION(BlueprintCallable) static TArray<FARTraceResult> LineTraceTrackedObjects3D(FVector Start, FVector End, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon);  // parameters 0x30
    UFUNCTION(BlueprintCallable) static TMap<FName, UARPin*> LoadARPinsFromLocalStore();  // parameters 0x50
    UFUNCTION(BlueprintCallable) static void PauseARSession();
    UFUNCTION(BlueprintCallable) static UARPin* PinComponent(USceneComponent* ComponentToPin, const FTransform& PinToWorldTransform, UARTrackedGeometry* TrackedGeometry, FName DebugName);  // parameters 0x58
    UFUNCTION(BlueprintCallable) static bool PinComponentToARPin(USceneComponent* ComponentToPin, UARPin* Pin);  // parameters 0x11
    UFUNCTION(BlueprintCallable) static UARPin* PinComponentToTraceResult(USceneComponent* ComponentToPin, const FARTraceResult& TraceResult, FName DebugName);  // parameters 0x80
    UFUNCTION(BlueprintCallable) static void RemoveARPinFromLocalStore(FName InSaveName);  // parameters 0x8
    UFUNCTION(BlueprintCallable) static void RemoveAllARPinsFromLocalStore();
    UFUNCTION(BlueprintCallable) static void RemovePin(UARPin* PinToRemove);  // parameters 0x8
    UFUNCTION(BlueprintCallable) static FIntPoint ResizeXRCamera(const FIntPoint& InSize);  // parameters 0x10
    UFUNCTION(BlueprintCallable) static bool SaveARPinToLocalStore(FName InSaveName, UARPin* InPin);  // parameters 0x11
    UFUNCTION(BlueprintCallable) static void SetARWorldOriginLocationAndRotation(FVector OriginLocation, FRotator OriginRotation, bool bIsTransformInWorldSpace, bool bMaintainUpDirection);  // parameters 0x1A
    UFUNCTION(BlueprintCallable) static void SetARWorldScale(float InWorldScale);  // parameters 0x4
    UFUNCTION(BlueprintCallable) static void SetAlignmentTransform(const FTransform& InAlignmentTransform);  // parameters 0x30
    UFUNCTION(BlueprintCallable) static void SetEnabledXRCamera(bool bOnOff);  // parameters 0x1
    UFUNCTION(BlueprintCallable) static void StartARSession(UARSessionConfig* SessionConfig);  // parameters 0x8
    UFUNCTION(BlueprintCallable) static void StopARSession();
    UFUNCTION(BlueprintCallable) static bool ToggleARCapture(bool bOnOff, EARCaptureType CaptureType);  // parameters 0x3
    UFUNCTION(BlueprintCallable) static void UnpinComponent(USceneComponent* ComponentToUnpin);  // parameters 0x8
};
