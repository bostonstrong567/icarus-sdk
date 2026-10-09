// /Script/AudioPlatformConfiguration.PlatformRuntimeAudioCompressionOverrides
// size 0x10, declared in Engine/Source/Runtime/AudioPlatformConfiguration/Public/AudioCompressionSettings.h

USTRUCT()
struct FPlatformRuntimeAudioCompressionOverrides
{
public:
    UPROPERTY(EditAnywhere) bool bOverrideCompressionTimes;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere) float DurationThreshold;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere) int32 MaxNumRandomBranches;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere) int32 SoundCueQualityIndex;  // 0x000C, size 0x4
};
