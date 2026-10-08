// /Script/AIModule.AIPredictionEvent
// size 0x18, declared in Engine/Source/Runtime/AIModule/Classes/Perception/AISense_Prediction.h

USTRUCT()
struct FAIPredictionEvent
{
    UPROPERTY() AActor* Requestor;  // 0x0000, size 0x8
    UPROPERTY() AActor* PredictedActor;  // 0x0008, size 0x8

    // Not reflected:
    float TimeToPredict;  // 0x0010
};
