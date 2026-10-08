// /Script/AIModule.AISense_Touch
// Derives from: UAISense > UObject
// size 0x90, declared in Engine/Source/Runtime/AIModule/Classes/Perception/AISense_Touch.h

UCLASS(Config=Engine)
class UAISense_Touch : public UAISense
{
public:
    UPROPERTY() TArray<FAITouchEvent> RegisteredEvents;  // 0x0080, size 0x10

    UFUNCTION(BlueprintCallable) static void ReportTouchEvent(UObject* WorldContextObject, AActor* TouchReceiver, AActor* OtherActor, FVector Location);  // parameters 0x24
};
