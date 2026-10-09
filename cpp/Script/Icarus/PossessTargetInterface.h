// /Script/Icarus.PossessTargetInterface
// Derives from: UInterface > UObject
// size 0x28, declared in Icarus/Source/Icarus/Controllers/PossessTargetInterface.h

UCLASS(Abstract)
class UPossessTargetInterface : public UInterface
{
public:
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintNativeEvent) bool IsThirdPersonToggleBlocked() const;  // parameters 0x1
};
