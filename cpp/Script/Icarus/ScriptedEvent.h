// /Script/Icarus.ScriptedEvent
// Derives from: AActor > UObject
// size 0x270, declared in Icarus/Source/Icarus/Systems/Disaster/ScriptedEvent.h

UCLASS(Abstract, Config=Engine)
class AScriptedEvent : public AActor
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBiomesRowHandle AssociatedBiome;  // 0x0220, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadOnly) EIcarusProspectDifficulty ProspectDifficulty;  // 0x0238, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TimeoutInSeconds;  // 0x023C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TickFrequency;  // 0x0240, size 0x4
    UPROPERTY(BlueprintReadOnly) TArray<AActor*> TargetActors;  // 0x0248, size 0x10
    UPROPERTY(BlueprintAssignable) FScriptedEventFinishedSignature OnScriptedEventFinished;  // 0x0258, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    FTimerHandle EventTimeoutTimer;  // 0x0268, private

    UFUNCTION(BlueprintCallable) void AbortScriptedEvent();
    UFUNCTION(BlueprintNativeEvent) bool CanPerformEvent();  // parameters 0x1
    UFUNCTION(BlueprintNativeEvent) TArray<AActor*> DetermineTargetActors();  // parameters 0x10
    UFUNCTION(BlueprintNativeEvent) void EventEnd(EEventEndReason EndReason);  // parameters 0x1
    UFUNCTION(BlueprintNativeEvent) void EventStart();
    UFUNCTION(BlueprintNativeEvent) bool IsEventCompleted();  // parameters 0x1
    UFUNCTION(BlueprintNativeEvent) bool ShouldAbortEvent();  // parameters 0x1

    // Virtual functions that start here:
    //   EventEnd_Implementation, EventStart_Implementation
};
