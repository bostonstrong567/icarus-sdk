// /Script/Icarus.AIAudioData
// size 0x1D0, declared in Icarus/Source/Icarus/DataStructs/Audio/AIAudioData.h

USTRUCT()
struct FAIAudioData : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UFMODEvent> FootstepSound;  // 0x0018, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName FrontFootSocket;  // 0x0040, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName RearFootSocket;  // 0x0048, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName JumpSocket;  // 0x0050, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UFMODEvent> MovementSound;  // 0x0058, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UFMODEvent> DeathCollisionSound;  // 0x0080, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName DeathCollisionSocket;  // 0x00A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UFMODEvent> WaterDeathSound;  // 0x00B0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName VocalisationSocket;  // 0x00D8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVocalisationsRowHandle AttackVocalisation;  // 0x00E0, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVocalisationsRowHandle FlinchVocalisation;  // 0x00F8, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVocalisationsRowHandle DeathVocalisation;  // 0x0110, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<EAIAudioState, FAIStateVocalisation> StateVocalisations;  // 0x0128, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftClassPtr<UCreatureAudioThreatComponent> ThreatComponentClass;  // 0x0178, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ThreatLevel;  // 0x01A0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FCreatureAudioThreatDataRowHandle ThreatConfig;  // 0x01A4, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EMusicConditionCombatState CombatMusicConditionOverride;  // 0x01BC, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MusicConditionOverrideMinThreatLevel;  // 0x01C0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FootstepMaxDistance;  // 0x01C4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FoliageCheckMaxDistance;  // 0x01C8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bUsesShelter;  // 0x01CC, size 0x1
};
