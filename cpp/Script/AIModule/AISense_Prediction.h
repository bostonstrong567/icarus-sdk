// /Script/AIModule.AISense_Prediction
// Derives from: UAISense > UObject
// size 0x90, declared in Engine/Source/Runtime/AIModule/Classes/Perception/AISense_Prediction.h

UCLASS(Config=Engine)
class UAISense_Prediction : public UAISense
{
public:
    UPROPERTY() TArray<FAIPredictionEvent> RegisteredEvents;  // 0x0080, size 0x10

    UFUNCTION(BlueprintCallable) static void RequestControllerPredictionEvent(AAIController* Requestor, AActor* PredictedActor, float PredictionTime);  // parameters 0x14
    UFUNCTION(BlueprintCallable) static void RequestPawnPredictionEvent(APawn* Requestor, AActor* PredictedActor, float PredictionTime);  // parameters 0x14
};
