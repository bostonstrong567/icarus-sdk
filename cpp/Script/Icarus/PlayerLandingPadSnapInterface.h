// /Script/Icarus.PlayerLandingPadSnapInterface
// Derives from: UInterface > UObject
// size 0x28, declared in Icarus/Source/Icarus/Systems/Deployables/PlayerLandingPadSnapInterface.h

UCLASS(Abstract)
class UPlayerLandingPadSnapInterface : public UInterface
{
public:

    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintNativeEvent) FVector GetSnapPoint() const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintNativeEvent) bool IsEdenPad() const;  // parameters 0x1
};
