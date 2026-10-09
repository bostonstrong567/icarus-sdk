// /Script/Engine.AudioQualitySettings
// size 0x20, declared in Engine/Source/Runtime/Engine/Classes/Sound/AudioSettings.h

USTRUCT()
struct FAudioQualitySettings
{
public:
    UPROPERTY(EditAnywhere) FText DisplayName;  // 0x0000, size 0x18
    UPROPERTY(EditAnywhere) int32 MaxChannels;  // 0x0018, size 0x4
};
