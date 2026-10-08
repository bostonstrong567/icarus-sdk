// /Script/Icarus.ThreatAudioInterface
// Derives from: UInterface > UObject
// size 0x28, declared in Icarus/Source/Icarus/Audio/Threat/ThreatAudioInterface.h

UCLASS(Abstract)
class UThreatAudioInterface : public UInterface
{
public:

    UFUNCTION(BlueprintNativeEvent) EMusicConditionCombatState GetCombatMusicConditionOverride(AIcarusPlayerCharacter* TargetPlayer, float Threat);  // parameters 0xD
    UFUNCTION(BlueprintNativeEvent) float GetThreatToPlayer(AIcarusPlayerCharacter* TargetPlayer);  // parameters 0xC
};
