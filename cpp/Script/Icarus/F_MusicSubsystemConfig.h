// /Script/Icarus.MusicSubsystemConfig
// size 0x8, declared in Icarus/Source/Icarus/Audio/Music/MusicSubsystem.h

USTRUCT()
struct FMusicSubsystemConfig
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MinWaitTimeBetweenTracks;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxWaitTimeBetweenTracks;  // 0x0004, size 0x4
};
