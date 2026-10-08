// /Script/Icarus.IcarusOrchestrationSubsystem
// Derives from: UWorldSubsystem > USubsystem > UObject
// size 0xC8, declared in Icarus/Source/Icarus/Subsystems/World/IcarusOrchestrationSubsystem.h

UCLASS()
class UIcarusOrchestrationSubsystem : public UWorldSubsystem
{
public:
    UPROPERTY() TArray<UOrchestrationEvent*> OrchestrationEvents;  // 0x0030, size 0x10
    UPROPERTY() TArray<TWeakObjectPtr<AActor>> AllActors;  // 0x0068, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    TArray<enum EOrchestrationEvents,TSizedDefaultAllocator<32> > EventsWaitingBroadcast;  // 0x0040, private
    TArray<enum EOrchestrationEvents,TSizedDefaultAllocator<32> > TranspiredEvents;  // 0x0050, private
    bool bIsDoingOrchestrationWork;  // 0x0060, private
    bool bNewFlags;  // 0x0061, private
    TSet<enum EOrchestrationStateFlags,DefaultKeyFuncs<enum EOrchestrationStateFlags,0>,FDefaultSetAllocator> OrchestrationStateFlags;  // 0x0078, private

    UFUNCTION(BlueprintCallable) void BindToOrchestrationEvent(FBindToOrchestrationDel Delegate, FOrchestrationEventsEnum EventToBind);  // parameters 0x20
    UFUNCTION(BlueprintCallable) bool CheckEvent(const FOrchestrationEventsEnum& EventToCheck);  // parameters 0x11
    UFUNCTION(BlueprintCallable) bool CheckOrchestrationFlag(FOrchestrationStateFlagsEnum OrchestrationFlag);  // parameters 0x11
    UFUNCTION(BlueprintCallable) UOrchestrationEvent* GetOrchestrationEvent(FOrchestrationEventsEnum EventToGet);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void MarkOrchestrationFlag(FOrchestrationStateFlagsEnum OrchestrationFlagEnum);  // parameters 0x10
};
