// /Script/Engine.QuartzClockSettings
// size 0x20, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/AudioMixer/QuartzSubsystem.generated.h

USTRUCT()
struct FQuartzClockSettings
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FQuartzTimeSignature TimeSignature;  // 0x0000, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bIgnoreLevelChange;  // 0x0018, size 0x1
};
