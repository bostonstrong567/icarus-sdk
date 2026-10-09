// /Script/Icarus.IcarusOrchestrationSubsystem
// Derives from: UWorldSubsystem > USubsystem > UObject
// size 0xC8, declared in Icarus/Source/Icarus/Subsystems/World/IcarusOrchestrationSubsystem.h

UCLASS()
class UIcarusOrchestrationSubsystem : public UWorldSubsystem
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY() TArray<UOrchestrationEvent*> OrchestrationEvents;  // 0x0030, size 0x10
    TArray<enum EOrchestrationEvents,TSizedDefaultAllocator<32> > EventsWaitingBroadcast;  // 0x0040, not reflected
    TArray<enum EOrchestrationEvents,TSizedDefaultAllocator<32> > TranspiredEvents;  // 0x0050, not reflected
    bool bIsDoingOrchestrationWork;  // 0x0060, not reflected
    bool bNewFlags;  // 0x0061, not reflected
    UPROPERTY() TArray<TWeakObjectPtr<AActor>> AllActors;  // 0x0068, size 0x10
    TSet<enum EOrchestrationStateFlags,DefaultKeyFuncs<enum EOrchestrationStateFlags,0>,FDefaultSetAllocator> OrchestrationStateFlags;  // 0x0078, not reflected
public:
    UFUNCTION(BlueprintCallable) void BindToOrchestrationEvent(FBindToOrchestrationDel Delegate, FOrchestrationEventsEnum EventToBind);  // parameters 0x20
    UFUNCTION(BlueprintCallable) bool CheckEvent(const FOrchestrationEventsEnum& EventToCheck);  // parameters 0x11
    UFUNCTION(BlueprintCallable) bool CheckOrchestrationFlag(FOrchestrationStateFlagsEnum OrchestrationFlag);  // parameters 0x11
    UFUNCTION(BlueprintCallable) UOrchestrationEvent* GetOrchestrationEvent(FOrchestrationEventsEnum EventToGet);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void MarkOrchestrationFlag(FOrchestrationStateFlagsEnum OrchestrationFlagEnum);  // parameters 0x10
};
