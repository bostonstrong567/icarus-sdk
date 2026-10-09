// /Script/Icarus.BallisticAudioData
// size 0x58, declared in Icarus/Source/Icarus/Traits/Behaviours/BallisticData.h

USTRUCT()
struct FBallisticAudioData
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UFMODEvent> FlySound;  // 0x0000, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UFMODEvent> ImpactSound;  // 0x0028, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bPlayImpactSoundOnPayload;  // 0x0050, size 0x1
};
