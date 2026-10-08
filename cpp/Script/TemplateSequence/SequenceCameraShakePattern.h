// /Script/TemplateSequence.SequenceCameraShakePattern
// Derives from: UCameraShakePattern > UObject
// size 0x58, declared in Engine/Plugins/MovieScene/TemplateSequence/Source/TemplateSequence/Public/SequenceCameraShake.h

UCLASS(EditInlineNew)
class USequenceCameraShakePattern : public UCameraShakePattern
{
public:
    UPROPERTY(EditAnywhere) UCameraAnimationSequence* Sequence;  // 0x0028, size 0x8
    UPROPERTY(EditAnywhere) float PlayRate;  // 0x0030, size 0x4
    UPROPERTY(EditAnywhere) float Scale;  // 0x0034, size 0x4
    UPROPERTY(EditAnywhere) float BlendInTime;  // 0x0038, size 0x4
    UPROPERTY(EditAnywhere) float BlendOutTime;  // 0x003C, size 0x4
    UPROPERTY(EditAnywhere) float RandomSegmentDuration;  // 0x0040, size 0x4
    UPROPERTY(EditAnywhere) bool bRandomSegment;  // 0x0044, size 0x1
    UPROPERTY(Transient, Instanced) USequenceCameraShakeSequencePlayer* Player;  // 0x0048, size 0x8
    UPROPERTY(Transient, Instanced) USequenceCameraShakeCameraStandIn* CameraStandIn;  // 0x0050, size 0x8
};
