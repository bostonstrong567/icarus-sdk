// /Script/Icarus.DensityAudioInterface
// Derives from: UInterface > UObject
// size 0x28, declared in Icarus/Source/Icarus/Audio/Density/DensityAudioInterface.h

UCLASS(Abstract)
class UDensityAudioInterface : public UInterface
{
public:
    UFUNCTION(BlueprintNativeEvent) FVector2D GetDistanceRange();  // parameters 0x8
    UFUNCTION(BlueprintNativeEvent) FVector GetLocation();  // parameters 0xC
    UFUNCTION(BlueprintNativeEvent) TSubclassOf<UObject> GetTargetClass();  // parameters 0x8
    UFUNCTION(BlueprintNativeEvent) void UpdateDensity(float Density);  // parameters 0x4
    UFUNCTION(BlueprintNativeEvent) bool WantsDensityUpdate();  // parameters 0x1
};
