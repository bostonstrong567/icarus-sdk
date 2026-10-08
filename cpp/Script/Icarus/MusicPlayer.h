// /Script/Icarus.MusicPlayer
// Derives from: UObject
// size 0xB0, declared in Icarus/Source/Icarus/Audio/Music/MusicPlayer.h

UCLASS()
class UMusicPlayer : public UObject
{
public:
    UPROPERTY() UCurveFloat* FadeCurve;  // 0x0060, size 0x8

    // Not reflected: the engine's scripting cannot see these.
    TDelegate<void __cdecl(UMusicPlayer *),FDefaultDelegateUserPolicy> TrackEndedDelegate;  // 0x0030
    const FMusicTrack * Track;  // 0x0040
    EMusicPlayerState PlayState;  // 0x0048, private
    FFMODEventInstance EventInstance;  // 0x0050, private
    const float DefaultFadeValue;  // 0x0058, private
    EMusicPlayerFadeType FadeType;  // 0x0068, private
    float FadeTime;  // 0x006C, private
    float FadeLength;  // 0x0070, private
    float FadeValueOffset;  // 0x0074, private
    FWindowsCriticalSection CriticalSection_CallbackLock;  // 0x0078, private
    bool bCriticalSection_EventEnded;  // 0x00A0, private
    float TimePaused;  // 0x00A4, private
    const float PauseTimeoutLength;  // 0x00A8, private
};
