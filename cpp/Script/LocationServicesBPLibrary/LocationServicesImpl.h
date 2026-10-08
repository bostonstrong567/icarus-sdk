// /Script/LocationServicesBPLibrary.LocationServicesImpl
// Derives from: UObject
// size 0x38, declared in Engine/Plugins/Runtime/LocationServicesBPLibrary/Source/LocationServicesBPLibrary/Classes/LocationServicesImpl.h

UCLASS(Abstract)
class ULocationServicesImpl : public UObject
{
public:
    UPROPERTY(BlueprintAssignable) FLocationServicesData_OnLocationChanged OnLocationChanged;  // 0x0028, size 0x10

    // Virtual functions that start here:
    //   GetLastKnownLocation, InitLocationServices, IsLocationAccuracyAvailable, IsLocationServiceEnabled
    //   StartLocationService, StopLocationService
};
