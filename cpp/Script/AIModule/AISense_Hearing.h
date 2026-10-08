// /Script/AIModule.AISense_Hearing
// Derives from: UAISense > UObject
// size 0xE8, declared in Engine/Source/Runtime/AIModule/Classes/Perception/AISense_Hearing.h

UCLASS(Config=Game)
class UAISense_Hearing : public UAISense
{
public:
    UPROPERTY() TArray<FAINoiseEvent> NoiseEvents;  // 0x0080, size 0x10
    UPROPERTY(Config) float SpeedOfSoundSq;  // 0x0090, size 0x4

    // Not reflected: the engine's scripting cannot see these.
    TMap<FAIGenericID<FPerceptionListenerCounter>,UAISense_Hearing::FDigestedHearingProperties,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,UAISense_Hearing::FDigestedHearingProperties,0> > DigestedProperties;  // 0x0098, protected

    UFUNCTION(BlueprintCallable) static void ReportNoiseEvent(UObject* WorldContextObject, FVector NoiseLocation, float Loudness, AActor* Instigator, float MaxRange, FName Tag);  // parameters 0x2C

    // Virtual functions that start here:
    //   RegisterMakeNoiseDelegate
};
