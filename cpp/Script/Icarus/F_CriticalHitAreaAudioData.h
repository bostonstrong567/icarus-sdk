// /Script/Icarus.CriticalHitAreaAudioData
// size 0x48, declared in Icarus/Source/Icarus/DataStructs/Audio/CriticalHitAreaAudioData.h

USTRUCT()
struct FCriticalHitAreaAudioData : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UFMODEvent> PlayerFeedbackSound;  // 0x0018, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bShouldCritZoneSuppressHitAudio;  // 0x0040, size 0x1
};
