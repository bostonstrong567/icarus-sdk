// /Script/Icarus.ModifierStateAudioData
// size 0xB0, declared in Icarus/Source/Icarus/DataStructs/Audio/ModifierStateAudioData.h

USTRUCT()
struct FModifierStateAudioData : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UFMODEvent> PlayerModifierAddedSound;  // 0x0018, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bReplayOnStack;  // 0x0040, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CooldownTime;  // 0x0044, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UFMODEvent> PlayerModifierLoopSound;  // 0x0048, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bApplyStackCountParameterToLoop;  // 0x0070, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UFMODEvent> PlayerModifierRemovedSound;  // 0x0078, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bApplyExposedVocalisation;  // 0x00A0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ExposedVocalisationMinEffectiveness;  // 0x00A4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bApplyEffectivenessParameter;  // 0x00A8, size 0x1
};
