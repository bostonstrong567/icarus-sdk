// /Script/Engine.ForceFeedbackEffect
// Derives from: UObject
// size 0x40, declared in Engine/Source/Runtime/Engine/Classes/GameFramework/ForceFeedbackEffect.h

UCLASS(MinimalAPI)
class UForceFeedbackEffect : public UObject
{
public:
    UPROPERTY(EditAnywhere) TArray<FForceFeedbackChannelDetails> ChannelDetails;  // 0x0028, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float Duration;  // 0x0038, size 0x4
};
