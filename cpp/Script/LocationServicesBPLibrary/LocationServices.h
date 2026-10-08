// /Script/LocationServicesBPLibrary.LocationServices
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Engine/Plugins/Runtime/LocationServicesBPLibrary/Source/LocationServicesBPLibrary/Classes/LocationServicesBPLibrary.h

UCLASS()
class ULocationServices : public UBlueprintFunctionLibrary
{
public:

    UFUNCTION(BlueprintCallable) static bool AreLocationServicesEnabled();  // parameters 0x1
    UFUNCTION(BlueprintCallable) static FLocationServicesData GetLastKnownLocation();  // parameters 0x18
    UFUNCTION(BlueprintCallable) static ULocationServicesImpl* GetLocationServicesImpl();  // parameters 0x8
    UFUNCTION(BlueprintCallable) static bool InitLocationServices(ELocationAccuracy Accuracy, float UpdateFrequency, float MinDistanceFilter);  // parameters 0xD
    UFUNCTION(BlueprintCallable) static bool IsLocationAccuracyAvailable(ELocationAccuracy Accuracy);  // parameters 0x2
    UFUNCTION(BlueprintCallable) static bool StartLocationServices();  // parameters 0x1
    UFUNCTION(BlueprintCallable) static bool StopLocationServices();  // parameters 0x1
};
