// /Script/Icarus.CreatureAudioThreatData
// size 0x68, declared in Icarus/Source/Icarus/DataStructs/Audio/CreatureAudioThreatData.h

USTRUCT()
struct FCreatureAudioThreatData : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<ECreatureAudioThreatTargetType, FCreatureAudioThreatSetting> ThreatSettings;  // 0x0018, size 0x50
};
