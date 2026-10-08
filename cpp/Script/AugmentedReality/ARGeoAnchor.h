// /Script/AugmentedReality.ARGeoAnchor
// Derives from: UARTrackedGeometry > UObject
// size 0x110, declared in Engine/Source/Runtime/AugmentedReality/Public/ARTrackable.h

UCLASS()
class UARGeoAnchor : public UARTrackedGeometry
{
public:

    // Not reflected: the engine's scripting cannot see these.
    float Longitude;  // 0x00F8, private
    float Latitude;  // 0x00FC, private
    float AltitudeMeters;  // 0x0100, private
    EARAltitudeSource AltitudeSource;  // 0x0104, private

    UFUNCTION(BlueprintCallable, BlueprintPure) float GetAltitudeMeters() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) EARAltitudeSource GetAltitudeSource() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetLatitude() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetLongitude() const;  // parameters 0x4
};
