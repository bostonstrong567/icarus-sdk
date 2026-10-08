// /Game/BP/Audio/PlayerMovement/BP_PlayerAudio_AnimNotify_Interface.BP_PlayerAudio_AnimNotify_Interface_C
// Derives from: UInterface > UObject
// size 0x28, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_PlayerAudio_AnimNotify_Interface_C : public UInterface
{
public:

    UFUNCTION(BlueprintCallable) void OnFootstepAnimNotify(TEnumAsByte<EFootstepType> FootstepType, TEnumAsByte<EPlayerAudioStance> PlayerStance);  // parameters 0x2
    UFUNCTION(BlueprintCallable) void OnSwimStrokeAnimNotify();
};
