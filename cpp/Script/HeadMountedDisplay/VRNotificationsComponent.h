// /Script/HeadMountedDisplay.VRNotificationsComponent
// Derives from: UActorComponent > UObject
// size 0x140, declared in Engine/Source/Runtime/HeadMountedDisplay/Public/VRNotificationsComponent.h

UCLASS(Config=Engine)
class UVRNotificationsComponent : public UActorComponent
{
public:
    UPROPERTY(BlueprintAssignable) FVRNotificationsDelegate HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate;  // 0x00B0, size 0x10
    UPROPERTY(BlueprintAssignable) FVRNotificationsDelegate HMDTrackingInitializedDelegate;  // 0x00C0, size 0x10
    UPROPERTY(BlueprintAssignable) FVRNotificationsDelegate HMDRecenteredDelegate;  // 0x00D0, size 0x10
    UPROPERTY(BlueprintAssignable) FVRNotificationsDelegate HMDLostDelegate;  // 0x00E0, size 0x10
    UPROPERTY(BlueprintAssignable) FVRNotificationsDelegate HMDReconnectedDelegate;  // 0x00F0, size 0x10
    UPROPERTY(BlueprintAssignable) FVRNotificationsDelegate HMDConnectCanceledDelegate;  // 0x0100, size 0x10
    UPROPERTY(BlueprintAssignable) FVRNotificationsDelegate HMDPutOnHeadDelegate;  // 0x0110, size 0x10
    UPROPERTY(BlueprintAssignable) FVRNotificationsDelegate HMDRemovedFromHeadDelegate;  // 0x0120, size 0x10
    UPROPERTY(BlueprintAssignable) FVRNotificationsDelegate VRControllerRecenteredDelegate;  // 0x0130, size 0x10
};
