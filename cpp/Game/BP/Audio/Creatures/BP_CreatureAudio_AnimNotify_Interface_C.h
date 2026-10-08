// /Game/BP/Audio/Creatures/BP_CreatureAudio_AnimNotify_Interface.BP_CreatureAudio_AnimNotify_Interface_C
// Derives from: UInterface > UObject
// size 0x28, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_CreatureAudio_AnimNotify_Interface_C : public UInterface
{
public:

    UFUNCTION(BlueprintCallable) void OnFootstepAnimNotify(TEnumAsByte<ECreatureFootstepType> FootstepType, TEnumAsByte<ECreatureFootstepDirection> FootstepDirection);  // parameters 0x2
    UFUNCTION(BlueprintCallable) void OnVocalisationAnimNotify(EAIVocalisationType VocalisationType);  // parameters 0x1
};
