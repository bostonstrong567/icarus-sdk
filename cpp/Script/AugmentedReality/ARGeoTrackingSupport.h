// /Script/AugmentedReality.ARGeoTrackingSupport
// Derives from: UObject
// size 0x28, declared in Engine/Source/Runtime/AugmentedReality/Public/ARGeoTrackingSupport.h

UCLASS(Abstract)
class UARGeoTrackingSupport : public UObject
{
public:
    UFUNCTION(BlueprintCallable) bool AddGeoAnchorAtLocation(float Longitude, float Latitude, FString OptionalAnchorName);  // parameters 0x19
    UFUNCTION(BlueprintCallable) bool AddGeoAnchorAtLocationWithAltitude(float Longitude, float Latitude, float AltitudeMeters, FString OptionalAnchorName);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) EARGeoTrackingAccuracy GetGeoTrackingAccuracy() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) EARGeoTrackingState GetGeoTrackingState() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) EARGeoTrackingStateReason GetGeoTrackingStateReason() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) static UARGeoTrackingSupport* GetGeoTrackingSupport();  // parameters 0x8

    // Virtual functions that start here:
    //   AddGeoAnchorAtLocation, AddGeoAnchorAtLocationWithAltitude, CheckGeoTrackingAvailability
    //   GetGeoLocationAtWorldPosition, GetGeoTrackingAccuracy, GetGeoTrackingState
    //   GetGeoTrackingStateReason
};
