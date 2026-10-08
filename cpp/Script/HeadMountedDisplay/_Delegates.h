DELEGATE() void DeviceModelLoadedDelegate(UPrimitiveComponent* LoadedComponent);  // parameters 0x8
DELEGATE() void VRNotificationsDelegate();
DELEGATE() void XRDeviceOnDisconnectDelegate(FString OutReason);  // parameters 0x10
DELEGATE() void XRTimedInputActionDelegate(float Value, FTimespan Time);  // parameters 0x10
