// /Script/Icarus.AudioSettingsSubsystem
// Derives from: UGameInstanceSubsystem > USubsystem > UObject
// size 0x30, declared in Icarus/Source/Icarus/Subsystems/GameInstance/AudioSettingsSubsystem.h

UCLASS()
class UAudioSettingsSubsystem : public UGameInstanceSubsystem
{
public:
    UFUNCTION() void OnAmbientVolumeChanged(float Volume);  // parameters 0x4
    UFUNCTION() void OnCharacterVoiceVolumeChanged(float Volume);  // parameters 0x4
    UFUNCTION() void OnDialogueVolumeChanged(float Volume);  // parameters 0x4
    UFUNCTION() void OnMasterVolumeChanged(float Volume);  // parameters 0x4
    UFUNCTION() void OnMusicVolumeChanged(float Volume);  // parameters 0x4
    UFUNCTION() void OnSFXVolumeChanged(float Volume);  // parameters 0x4
};
