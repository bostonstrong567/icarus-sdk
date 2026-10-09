// /Script/Icarus.MusicPlayer
// Derives from: UObject
// size 0xB0, declared in Icarus/Source/Icarus/Audio/Music/MusicPlayer.h

UCLASS()
class UMusicPlayer : public UObject
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    TDelegate<void __cdecl(UMusicPlayer *),FDefaultDelegateUserPolicy> TrackEndedDelegate;  // 0x0030, not reflected
    const FMusicTrack * Track;  // 0x0040, not reflected
private:
    EMusicPlayerState PlayState;  // 0x0048, not reflected
    FFMODEventInstance EventInstance;  // 0x0050, not reflected
    const float DefaultFadeValue;  // 0x0058, not reflected
    UPROPERTY() UCurveFloat* FadeCurve;  // 0x0060, size 0x8
    EMusicPlayerFadeType FadeType;  // 0x0068, not reflected
    float FadeTime;  // 0x006C, not reflected
    float FadeLength;  // 0x0070, not reflected
    float FadeValueOffset;  // 0x0074, not reflected
    FWindowsCriticalSection CriticalSection_CallbackLock;  // 0x0078, not reflected
    bool bCriticalSection_EventEnded;  // 0x00A0, not reflected
    float TimePaused;  // 0x00A4, not reflected
    const float PauseTimeoutLength;  // 0x00A8, not reflected
};
