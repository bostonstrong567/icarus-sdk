// /Script/Icarus.AudioShelterInterface
// Derives from: UInterface > UObject
// size 0x28, declared in Icarus/Source/Icarus/Audio/Shelter/AudioShelterInterface.h

UCLASS(Abstract)
class UAudioShelterInterface : public UInterface
{
public:
    UFUNCTION(BlueprintNativeEvent) float GetAudioShelterValue(AIcarusPlayerCharacter* Player) const;  // parameters 0xC
};
