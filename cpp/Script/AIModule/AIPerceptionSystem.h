// /Script/AIModule.AIPerceptionSystem
// Derives from: UAISubsystem > UObject
// size 0x130, declared in Engine/Source/Runtime/AIModule/Classes/Perception/AIPerceptionSystem.h

UCLASS(Config=Game)
class UAIPerceptionSystem : public UAISubsystem
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    TMap<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener,0> > ListenerContainer;  // 0x0038, not reflected
    UPROPERTY() TArray<UAISense*> Senses;  // 0x0088, size 0x10
    UPROPERTY(EditAnywhere, Config) float PerceptionAgingRate;  // 0x0098, size 0x4
    TBaseDynamicDelegate<FWeakObjectPtr,void,AActor *,enum EEndPlayReason::Type> StimuliSourceEndPlayDelegate;  // 0x009C, not reflected
    TMap<AActor const *,FPerceptionStimuliSource,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<AActor const *,FPerceptionStimuliSource,0> > RegisteredStimuliSources;  // 0x00B0, not reflected
    uint32 : 1 bHandlePawnNotification;  // 0x0100, not reflected
    TArray<UAIPerceptionSystem::FDelayedStimulus,TSizedDefaultAllocator<32> > DelayedStimuli;  // 0x0108, not reflected
    TArray<UAIPerceptionSystem::FPerceptionSourceRegistration,TSizedDefaultAllocator<32> > SourcesToRegister;  // 0x0118, not reflected
    float NextStimuliAgingTick;  // 0x0128, not reflected
private:
    float CurrentTime;  // 0x012C, not reflected
public:
    UFUNCTION(BlueprintCallable) static TSubclassOf<UAISense> GetSenseClassForStimulus(UObject* WorldContextObject, const FAIStimulus& Stimulus);  // parameters 0x50
    UFUNCTION() void OnPerceptionStimuliSourceEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x9
    UFUNCTION(BlueprintCallable) static bool RegisterPerceptionStimuliSource(UObject* WorldContextObject, TSubclassOf<UAISense> Sense, AActor* Target);  // parameters 0x19
    UFUNCTION(BlueprintCallable) void ReportEvent(UAISenseEvent* PerceptionEvent);  // parameters 0x8
    UFUNCTION(BlueprintCallable) static void ReportPerceptionEvent(UObject* WorldContextObject, UAISenseEvent* PerceptionEvent);  // parameters 0x10

    // Virtual functions that start here:
    //   OnNewPawn, RegisterAllPawnsAsSourcesForSense, StartPlay
};
