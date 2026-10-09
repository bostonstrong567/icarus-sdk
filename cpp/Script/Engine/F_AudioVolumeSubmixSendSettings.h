// /Script/Engine.AudioVolumeSubmixSendSettings
// size 0x18, declared in Engine/Source/Runtime/Engine/Classes/Sound/AudioVolume.h

USTRUCT()
struct FAudioVolumeSubmixSendSettings
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EAudioVolumeLocationState ListenerLocationState;  // 0x0000, size 0x1
    UPROPERTY(Deprecated) EAudioVolumeLocationState SourceLocationState;  // 0x0001, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FSoundSubmixSendInfo> SubmixSends;  // 0x0008, size 0x10
};
