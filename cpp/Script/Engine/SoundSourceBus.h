// /Script/Engine.SoundSourceBus
// Derives from: USoundWave > USoundBase > UObject
// size 0x388, declared in Engine/Source/Runtime/Engine/Classes/Sound/SoundSourceBus.h

UCLASS(EditInlineNew)
class USoundSourceBus : public USoundWave
{
public:
    UPROPERTY(EditAnywhere) ESourceBusChannels SourceBusChannels;  // 0x0370, size 0x1
    UPROPERTY(EditAnywhere) float SourceBusDuration;  // 0x0374, size 0x4
    UPROPERTY(EditAnywhere) UAudioBus* AudioBus;  // 0x0378, size 0x8
    UPROPERTY() uint8 bAutoDeactivateWhenSilent : 1;  // 0x0380, mask 0x01
};
