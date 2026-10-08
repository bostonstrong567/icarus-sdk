// /Script/Icarus.AudioReflectorInterface
// Derives from: UInterface > UObject
// size 0x28, declared in Icarus/Source/Icarus/Audio/Reflections/AudioReflectorInterface.h

UCLASS(Abstract)
class UAudioReflectorInterface : public UInterface
{
public:

    UFUNCTION(BlueprintNativeEvent) FSurfaceAudioReflectionData GetReflectionValue() const;  // parameters 0xC
};
