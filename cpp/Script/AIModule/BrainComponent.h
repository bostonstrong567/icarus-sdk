// /Script/AIModule.BrainComponent
// Derives from: UActorComponent > UObject
// size 0x108, declared in Engine/Source/Runtime/AIModule/Classes/BrainComponent.h

UCLASS(Config=Engine)
class UBrainComponent : public UActorComponent, public IAIResourceInterface
{
public:
    UPROPERTY(Transient, Instanced) UBlackboardComponent* BlackboardComp;  // 0x00B8, size 0x8
    UPROPERTY(Transient) AAIController* AIOwner;  // 0x00C0, size 0x8

    // Not reflected: the engine's scripting cannot see these.
    TArray<FAIMessage,TSizedDefaultAllocator<32> > MessagesToProcess;  // 0x00C8, protected
    TArray<FAIMessageObserver *,TSizedDefaultAllocator<32> > MessageObservers;  // 0x00D8, protected
    FAIResourceLock ResourceLock;  // 0x00E8, protected
    uint32 : 1 bDoLogicRestartOnUnlock;  // 0x0100, private

    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsPaused() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsRunning() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) void RestartLogic();
    UFUNCTION(BlueprintCallable) void StartLogic();
    UFUNCTION(BlueprintCallable) void StopLogic(FString Reason);  // parameters 0x10

    // Virtual functions that start here:
    //   Cleanup, GetDebugInfoString, HandleMessage, IsPaused, IsRunning, PauseLogic, RestartLogic
    //   ResumeLogic, StartLogic, StopLogic
};
