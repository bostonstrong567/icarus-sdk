// /Script/Engine.AudioSettings
// Derives from: UDeveloperSettings > UObject
// size 0x198, declared in Engine/Source/Runtime/Engine/Classes/Sound/AudioSettings.h

UCLASS(Config=Engine)
class UAudioSettings : public UDeveloperSettings
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(EditAnywhere, Config) FSoftObjectPath DefaultSoundClassName;  // 0x0038, size 0x18
    UPROPERTY(EditAnywhere, Config) FSoftObjectPath DefaultMediaSoundClassName;  // 0x0050, size 0x18
    UPROPERTY(EditAnywhere, Config) FSoftObjectPath DefaultSoundConcurrencyName;  // 0x0068, size 0x18
    UPROPERTY(EditAnywhere, Config) FSoftObjectPath DefaultBaseSoundMix;  // 0x0080, size 0x18
    UPROPERTY(EditAnywhere, Config) FSoftObjectPath VoiPSoundClass;  // 0x0098, size 0x18
    UPROPERTY(EditAnywhere, Config) FSoftObjectPath MasterSubmix;  // 0x00B0, size 0x18
    UPROPERTY(EditAnywhere, Config) FSoftObjectPath BaseDefaultSubmix;  // 0x00C8, size 0x18
    UPROPERTY(EditAnywhere, Config) FSoftObjectPath ReverbSubmix;  // 0x00E0, size 0x18
    UPROPERTY(EditAnywhere, Config) FSoftObjectPath EQSubmix;  // 0x00F8, size 0x18
    UPROPERTY(EditAnywhere, Config) EVoiceSampleRate VoiPSampleRate;  // 0x0110, size 0x4
    UPROPERTY(Config, Deprecated) float DefaultReverbSendLevel;  // 0x0114, size 0x4
    UPROPERTY(EditAnywhere, Config) int32 MaximumConcurrentStreams;  // 0x0118, size 0x4
    UPROPERTY(EditAnywhere, Config) float GlobalMinPitchScale;  // 0x011C, size 0x4
    UPROPERTY(EditAnywhere, Config) float GlobalMaxPitchScale;  // 0x0120, size 0x4
    UPROPERTY(EditAnywhere, Config) TArray<FAudioQualitySettings> QualityLevels;  // 0x0128, size 0x10
    UPROPERTY(EditAnywhere, Config) uint8 bAllowPlayWhenSilent : 1;  // 0x0138, mask 0x01
    UPROPERTY(EditAnywhere, Config) uint8 bDisableMasterEQ : 1;  // 0x0138, mask 0x02
    UPROPERTY(EditAnywhere, Config) uint8 bAllowCenterChannel3DPanning : 1;  // 0x0138, mask 0x04
    UPROPERTY(EditAnywhere, Config) uint32 NumStoppingSources;  // 0x013C, size 0x4
    UPROPERTY(EditAnywhere, Config) EPanningMethod PanningMethod;  // 0x0140, size 0x1
    UPROPERTY(EditAnywhere, Config) EMonoChannelUpmixMethod MonoChannelUpmixMethod;  // 0x0141, size 0x1
    UPROPERTY(EditAnywhere, Config) FString DialogueFilenameFormat;  // 0x0148, size 0x10
    UPROPERTY(EditAnywhere, Config) TArray<FSoundDebugEntry> DebugSounds;  // 0x0158, size 0x10
    UPROPERTY(EditAnywhere, Config) TArray<FDefaultAudioBusSettings> DefaultAudioBuses;  // 0x0168, size 0x10
private:
    UPROPERTY(Transient) USoundClass* DefaultSoundClass;  // 0x0178, size 0x8
    UPROPERTY(Transient) USoundClass* DefaultMediaSoundClass;  // 0x0180, size 0x8
    UPROPERTY(Transient) USoundConcurrency* DefaultSoundConcurrency;  // 0x0188, size 0x8
    bool bIsAudioMixerEnabled;  // 0x0190, not reflected
};
