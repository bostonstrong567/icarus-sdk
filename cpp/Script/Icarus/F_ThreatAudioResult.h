// /Script/Icarus.ThreatAudioResult
// size 0x8, declared in Icarus/Source/Icarus/Audio/Threat/ThreatAudioSubsystem.h

USTRUCT()
struct FThreatAudioResult
{
public:
    UPROPERTY(BlueprintReadOnly) int32 ThreatLevel;  // 0x0000, size 0x4
    UPROPERTY(BlueprintReadOnly) EMusicConditionCombatState MusicConditionOverride;  // 0x0004, size 0x1
};
