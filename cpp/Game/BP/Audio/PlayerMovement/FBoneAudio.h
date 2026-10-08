// /Game/BP/Audio/PlayerMovement/FBoneAudio.FBoneAudio
// size 0x68

USTRUCT()
struct FBoneAudio
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBoneAudioSetting Setting;  // 0x0000, size 0x30
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UFMODAudioComponent* AudioComponent;  // 0x0030, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FPositionHistory PositionHistory;  // 0x0038, size 0x30
};
