// /Script/AIModule.AIPerceptionSystem
// Derives from: UAISubsystem > UObject
// size 0x130, declared in Engine/Source/Runtime/AIModule/Classes/Perception/AIPerceptionSystem.h

UCLASS(Config=Game)
class UAIPerceptionSystem : public UAISubsystem
{
public:
    UPROPERTY() TArray<UAISense*> Senses;  // 0x0088, size 0x10
    UPROPERTY(EditAnywhere, Config) float PerceptionAgingRate;  // 0x0098, size 0x4

    // Not reflected: the engine's scripting cannot see these.
    TMap<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener,0> > ListenerContainer;  // 0x0038, protected
    TBaseDynamicDelegate<FWeakObjectPtr,void,AActor *,enum EEndPlayReason::Type> StimuliSourceEndPlayDelegate;  // 0x009C, protected
    TMap<AActor const *,FPerceptionStimuliSource,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<AActor const *,FPerceptionStimuliSource,0> > RegisteredStimuliSources;  // 0x00B0, protected
    uint32 : 1 bHandlePawnNotification;  // 0x0100, protected
    TArray<UAIPerceptionSystem::FDelayedStimulus,TSizedDefaultAllocator<32> > DelayedStimuli;  // 0x0108, protected
    TArray<UAIPerceptionSystem::FPerceptionSourceRegistration,TSizedDefaultAllocator<32> > SourcesToRegister;  // 0x0118, protected
    float NextStimuliAgingTick;  // 0x0128, protected
    float CurrentTime;  // 0x012C, private

    UFUNCTION(BlueprintCallable) static TSubclassOf<UAISense> GetSenseClassForStimulus(UObject* WorldContextObject, const FAIStimulus& Stimulus);  // parameters 0x50
    UFUNCTION() void OnPerceptionStimuliSourceEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x9
    UFUNCTION(BlueprintCallable) static bool RegisterPerceptionStimuliSource(UObject* WorldContextObject, TSubclassOf<UAISense> Sense, AActor* Target);  // parameters 0x19
    UFUNCTION(BlueprintCallable) void ReportEvent(UAISenseEvent* PerceptionEvent);  // parameters 0x8
    UFUNCTION(BlueprintCallable) static void ReportPerceptionEvent(UObject* WorldContextObject, UAISenseEvent* PerceptionEvent);  // parameters 0x10

    // Virtual functions that start here:
    //   OnNewPawn, RegisterAllPawnsAsSourcesForSense, StartPlay
};
