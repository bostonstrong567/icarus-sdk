// /Script/TemplateSequence.SequenceCameraShakeCameraStandIn
// Derives from: UObject
// size 0x670, declared in Engine/Plugins/MovieScene/TemplateSequence/Source/TemplateSequence/Public/SequenceCameraShake.h

UCLASS()
class USequenceCameraShakeCameraStandIn : public UObject, public IMovieSceneSceneComponentImpersonator
{
public:
    UPROPERTY() float FieldOfView;  // 0x0030, size 0x4
    UPROPERTY() uint8 bConstrainAspectRatio : 1;  // 0x0034, mask 0x01
    UPROPERTY() float AspectRatio;  // 0x0038, size 0x4
    UPROPERTY() FPostProcessSettings PostProcessSettings;  // 0x0040, size 0x560
    UPROPERTY() float PostProcessBlendWeight;  // 0x05A0, size 0x4
    UPROPERTY() FCameraFilmbackSettings Filmback;  // 0x05A4, size 0xC
    UPROPERTY() FCameraLensSettings LensSettings;  // 0x05B0, size 0x18
    UPROPERTY() FCameraFocusSettings FocusSettings;  // 0x05C8, size 0x58
    UPROPERTY() float CurrentFocalLength;  // 0x0620, size 0x4
    UPROPERTY() float CurrentAperture;  // 0x0624, size 0x4
    UPROPERTY() float CurrentFocusDistance;  // 0x0628, size 0x4

    // Not reflected: the engine's scripting cannot see these.
    FTransform Transform;  // 0x0630, private
    bool bIsCineCamera;  // 0x0660, private
    float WorldToMeters;  // 0x0664, private
};
