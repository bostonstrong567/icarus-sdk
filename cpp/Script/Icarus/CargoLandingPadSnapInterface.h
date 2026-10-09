// /Script/Icarus.CargoLandingPadSnapInterface
// Derives from: UInterface > UObject
// size 0x28, declared in Icarus/Source/Icarus/Systems/Deployables/CargoLandingPadSnapInterface.h

UCLASS(Abstract)
class UCargoLandingPadSnapInterface : public UInterface
{
public:
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintNativeEvent) FVector GetSnapPoint(int32 Index) const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintNativeEvent) bool IsEdenPad() const;  // parameters 0x1
};
