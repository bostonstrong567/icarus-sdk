// /Script/Icarus.CreatureAudioThreatSetting
// size 0x10, declared in Icarus/Source/Icarus/DataStructs/Audio/CreatureAudioThreatData.h

USTRUCT()
struct FCreatureAudioThreatSetting
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UCurveFloat* DistanceModifierCurve;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float GracePeriod;  // 0x0008, size 0x4
};
