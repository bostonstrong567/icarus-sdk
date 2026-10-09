// /Script/Engine.ForceFeedbackChannelDetails
// size 0x90, declared in Engine/Source/Runtime/Engine/Classes/GameFramework/ForceFeedbackEffect.h

USTRUCT()
struct FForceFeedbackChannelDetails
{
public:
    UPROPERTY(EditAnywhere) uint8 bAffectsLeftLarge : 1;  // 0x0000, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bAffectsLeftSmall : 1;  // 0x0000, mask 0x02
    UPROPERTY(EditAnywhere) uint8 bAffectsRightLarge : 1;  // 0x0000, mask 0x04
    UPROPERTY(EditAnywhere) uint8 bAffectsRightSmall : 1;  // 0x0000, mask 0x08
    UPROPERTY(EditAnywhere) FRuntimeFloatCurve Curve;  // 0x0008, size 0x88
};
