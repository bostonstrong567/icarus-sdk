// /Script/Icarus.MultiPointAudioNodeInterface
// Derives from: UInterface > UObject
// size 0x28, declared in Icarus/Source/Icarus/Audio/MultiPoint/MultiPointAudioNodeInterface.h

UCLASS(Abstract)
class UMultiPointAudioNodeInterface : public UInterface
{
public:
    UFUNCTION(BlueprintNativeEvent) FVector GetMultiPointAudioLocation() const;  // parameters 0xC
    UFUNCTION(BlueprintNativeEvent) float GetMultiPointAudioWeighting() const;  // parameters 0x4
};
