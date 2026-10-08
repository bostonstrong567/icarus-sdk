// /Script/Engine.AudioBus
// Derives from: UObject
// size 0x30, declared in Engine/Source/Runtime/Engine/Classes/Sound/AudioBus.h

UCLASS()
class UAudioBus : public UObject
{
public:
    UPROPERTY(EditAnywhere) EAudioBusChannels AudioBusChannels;  // 0x0028, size 0x1
};
