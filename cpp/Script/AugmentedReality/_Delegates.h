DELEGATE() void ARGetCandidateObjectPin(UARCandidateObject* SavedObject);  // parameters 0x8
DELEGATE() void ARSaveWorldPin(const TArray<uint8>& SavedWorld);  // parameters 0x10
DELEGATE() void GeoTrackingAvailabilityDelegate(bool bIsAvailable, FString Error);  // parameters 0x18
DELEGATE() void GetGeoLocationDelegate(float Longitude, float Latitude, float Altitude, FString Error);  // parameters 0x20
DELEGATE() void InstanceARActorSpawnedDelegate(TSubclassOf<UObject> ComponentClass, FGuid NativeID, AARActor* SpawnedActor);  // parameters 0x20
DELEGATE() void InstanceARActorToBeDestroyedDelegate(AARActor* Actor);  // parameters 0x8
DELEGATE() void OnARTrackingStateChanged(EARTrackingState NewTrackingState);  // parameters 0x1
DELEGATE() void OnARTransformUpdated(const FTransform& OldToNewTransform);  // parameters 0x30
DELEGATE() void TrackableDelegate(UARTrackedGeometry* TrackedGeometry);  // parameters 0x8
DELEGATE() void TrackableEnvProbeDelegate(UAREnvironmentCaptureProbe* TrackedEnvProbe);  // parameters 0x8
DELEGATE() void TrackableFaceDelegate(UARFaceGeometry* TrackedFace);  // parameters 0x8
DELEGATE() void TrackableImageDelegate(UARTrackedImage* TrackedImage);  // parameters 0x8
DELEGATE() void TrackableObjectDelegate(UARTrackedObject* TrackedObject);  // parameters 0x8
DELEGATE() void TrackablePlaneDelegate(UARPlaneGeometry* TrackedPlane);  // parameters 0x8
DELEGATE() void TrackablePointDelegate(UARTrackedPoint* TrackedPoint);  // parameters 0x8
