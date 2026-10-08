// /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Engine/Source/Runtime/HeadMountedDisplay/Public/HeadMountedDisplayFunctionLibrary.h

UCLASS()
class UHeadMountedDisplayFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakKey(FKey InKey, FString& InteractionProfile, EControllerHand& Hand, FName& MotionSource, FString& Indentifier, FString& Component);  // parameters 0x58
    UFUNCTION(BlueprintCallable) static void CalibrateExternalTrackingToHMD(const FTransform& ExternalTrackingTransform);  // parameters 0x30
    UFUNCTION(BlueprintCallable) static void ClearXRTimedInputActionDelegate(const FName& ActionPath);  // parameters 0x8
    UFUNCTION(BlueprintCallable) static bool ConfigureGestures(const FXRGestureConfig& GestureConfig);  // parameters 0x7
    UFUNCTION(BlueprintCallable) static TEnumAsByte<EXRDeviceConnectionResult> ConnectRemoteXRDevice(FString IpAddress, int32 BitRate);  // parameters 0x15
    UFUNCTION(BlueprintCallable) static void DisconnectRemoteXRDevice();
    UFUNCTION(BlueprintCallable) static bool EnableHMD(bool bEnable);  // parameters 0x2
    UFUNCTION(BlueprintCallable) static void EnableLowPersistenceMode(bool bEnable);  // parameters 0x1
    UFUNCTION(BlueprintCallable) static TArray<FXRDeviceId> EnumerateTrackedDevices(FName SystemId, EXRTrackedDeviceType DeviceType);  // parameters 0x20
    UFUNCTION(BlueprintCallable) static bool GetControllerTransformForTime(UObject* WorldContext, int32 ControllerIndex, FName MotionSource, FTimespan Time, bool& bTimeWasUsed, FRotator& Orientation, FVector& Position, bool& bProvidedLinearVelocity, FVector& LinearVelocity, bool& bProvidedAngularVelocity, FVector& AngularVelocityRadPerSec);  // parameters 0x5D
    UFUNCTION(BlueprintCallable) static void GetDevicePose(const FXRDeviceId& XRDeviceId, bool& bIsTracked, FRotator& Orientation, bool& bHasPositionalTracking, FVector& Position);  // parameters 0x2C
    UFUNCTION(BlueprintCallable) static void GetDeviceWorldPose(UObject* WorldContext, const FXRDeviceId& XRDeviceId, bool& bIsTracked, FRotator& Orientation, bool& bHasPositionalTracking, FVector& Position);  // parameters 0x34
    UFUNCTION(BlueprintCallable) static void GetHMDData(UObject* WorldContext, FXRHMDData& HMDData);  // parameters 0x50
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName GetHMDDeviceName();  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static TEnumAsByte<EHMDWornState> GetHMDWornState();  // parameters 0x1
    UFUNCTION(BlueprintCallable) static void GetMotionControllerData(UObject* WorldContext, EControllerHand Hand, FXRMotionControllerData& MotionControllerData);  // parameters 0xB0
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 GetNumOfTrackingSensors();  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) static void GetOrientationAndPosition(FRotator& DeviceRotation, FVector& DevicePosition);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static float GetPixelDensity();  // parameters 0x4
    UFUNCTION(BlueprintCallable) static FVector2D GetPlayAreaBounds(TEnumAsByte<EHMDTrackingOrigin> Origin);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static void GetPositionalTrackingCameraParameters(FVector& CameraOrigin, FRotator& CameraRotation, float& HFOV, float& VFOV, float& CameraDistance, float& NearPlane, float& FarPlane);  // parameters 0x2C
    UFUNCTION(BlueprintCallable, BlueprintPure) static float GetScreenPercentage();  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) static TEnumAsByte<EHMDTrackingOrigin> GetTrackingOrigin();  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) static void GetTrackingSensorParameters(FVector& Origin, FRotator& Rotation, float& LeftFOV, float& RightFOV, float& TopFOV, float& BottomFOV, float& Distance, float& NearPlane, float& FarPlane, bool& IsActive, int32 Index);  // parameters 0x3C
    UFUNCTION(BlueprintCallable) static FTransform GetTrackingToWorldTransform(UObject* WorldContext);  // parameters 0x40
    UFUNCTION(BlueprintCallable, BlueprintPure) static void GetVRFocusState(bool& bUseFocus, bool& bHasFocus);  // parameters 0x2
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString GetVersionString();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static float GetWorldToMetersScale(UObject* WorldContext);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 GetXRSystemFlags();  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool HasValidTrackingPosition();  // parameters 0x1
    UFUNCTION(BlueprintCallable) static bool IsDeviceTracking(const FXRDeviceId& XRDeviceId);  // parameters 0xD
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool IsHeadMountedDisplayConnected();  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool IsHeadMountedDisplayEnabled();  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool IsInLowPersistenceMode();  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool IsSpectatorScreenModeControllable();  // parameters 0x1
    UFUNCTION(BlueprintCallable) static void ResetOrientationAndPosition(float Yaw, TEnumAsByte<EOrientPositionSelector> Options);  // parameters 0x5
    UFUNCTION(BlueprintCallable) static void SetClippingPlanes(float Near, float Far);  // parameters 0x8
    UFUNCTION(BlueprintCallable) static void SetSpectatorScreenMode(ESpectatorScreenMode Mode);  // parameters 0x1
    UFUNCTION(BlueprintCallable) static void SetSpectatorScreenModeTexturePlusEyeLayout(FVector2D EyeRectMin, FVector2D EyeRectMax, FVector2D TextureRectMin, FVector2D TextureRectMax, bool bDrawEyeFirst, bool bClearBlack, bool bUseAlpha);  // parameters 0x23
    UFUNCTION(BlueprintCallable) static void SetSpectatorScreenTexture(UTexture* InTexture);  // parameters 0x8
    UFUNCTION(BlueprintCallable) static void SetTrackingOrigin(TEnumAsByte<EHMDTrackingOrigin> Origin);  // parameters 0x1
    UFUNCTION(BlueprintCallable) static void SetWorldToMetersScale(UObject* WorldContext, float NewScale);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static void SetXRDisconnectDelegate(const FXRDeviceOnDisconnectDelegate& InDisconnectedDelegate);  // parameters 0x10
    UFUNCTION(BlueprintCallable) static void SetXRTimedInputActionDelegate(const FName& ActionName, const FXRTimedInputActionDelegate& InDelegate);  // parameters 0x18
    UFUNCTION(BlueprintCallable) static void UpdateExternalTrackingHMDPosition(const FTransform& ExternalTrackingTransform);  // parameters 0x30
};
