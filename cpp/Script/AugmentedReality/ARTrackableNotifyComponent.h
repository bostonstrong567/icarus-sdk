// /Script/AugmentedReality.ARTrackableNotifyComponent
// Derives from: UActorComponent > UObject
// size 0x200, declared in Engine/Source/Runtime/AugmentedReality/Public/ARTrackableNotifyComponent.h

UCLASS(Config=Engine)
class UARTrackableNotifyComponent : public UActorComponent
{
public:
    UPROPERTY(BlueprintAssignable) FTrackableDelegate OnAddTrackedGeometry;  // 0x00B0, size 0x10
    UPROPERTY(BlueprintAssignable) FTrackableDelegate OnUpdateTrackedGeometry;  // 0x00C0, size 0x10
    UPROPERTY(BlueprintAssignable) FTrackableDelegate OnRemoveTrackedGeometry;  // 0x00D0, size 0x10
    UPROPERTY(BlueprintAssignable) FTrackablePlaneDelegate OnAddTrackedPlane;  // 0x00E0, size 0x10
    UPROPERTY(BlueprintAssignable) FTrackablePlaneDelegate OnUpdateTrackedPlane;  // 0x00F0, size 0x10
    UPROPERTY(BlueprintAssignable) FTrackablePlaneDelegate OnRemoveTrackedPlane;  // 0x0100, size 0x10
    UPROPERTY(BlueprintAssignable) FTrackablePointDelegate OnAddTrackedPoint;  // 0x0110, size 0x10
    UPROPERTY(BlueprintAssignable) FTrackablePointDelegate OnUpdateTrackedPoint;  // 0x0120, size 0x10
    UPROPERTY(BlueprintAssignable) FTrackablePointDelegate OnRemoveTrackedPoint;  // 0x0130, size 0x10
    UPROPERTY(BlueprintAssignable) FTrackableImageDelegate OnAddTrackedImage;  // 0x0140, size 0x10
    UPROPERTY(BlueprintAssignable) FTrackableImageDelegate OnUpdateTrackedImage;  // 0x0150, size 0x10
    UPROPERTY(BlueprintAssignable) FTrackableImageDelegate OnRemoveTrackedImage;  // 0x0160, size 0x10
    UPROPERTY(BlueprintAssignable) FTrackableFaceDelegate OnAddTrackedFace;  // 0x0170, size 0x10
    UPROPERTY(BlueprintAssignable) FTrackableFaceDelegate OnUpdateTrackedFace;  // 0x0180, size 0x10
    UPROPERTY(BlueprintAssignable) FTrackableFaceDelegate OnRemoveTrackedFace;  // 0x0190, size 0x10
    UPROPERTY(BlueprintAssignable) FTrackableEnvProbeDelegate OnAddTrackedEnvProbe;  // 0x01A0, size 0x10
    UPROPERTY(BlueprintAssignable) FTrackableEnvProbeDelegate OnUpdateTrackedEnvProbe;  // 0x01B0, size 0x10
    UPROPERTY(BlueprintAssignable) FTrackableEnvProbeDelegate OnRemoveTrackedEnvProbe;  // 0x01C0, size 0x10
    UPROPERTY(BlueprintAssignable) FTrackableObjectDelegate OnAddTrackedObject;  // 0x01D0, size 0x10
    UPROPERTY(BlueprintAssignable) FTrackableObjectDelegate OnUpdateTrackedObject;  // 0x01E0, size 0x10
    UPROPERTY(BlueprintAssignable) FTrackableObjectDelegate OnRemoveTrackedObject;  // 0x01F0, size 0x10
};
