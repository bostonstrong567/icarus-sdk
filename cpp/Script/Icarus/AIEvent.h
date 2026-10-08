// /Script/Icarus.AIEvent
// Derives from: AActor > UObject
// size 0x248, declared in Icarus/Source/Icarus/AI/Coordinator/AIEvent.h

UCLASS(Abstract, Config=Engine)
class AAIEvent : public AActor
{
public:
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadOnly) FAIEventsRowHandle AssignedEvent;  // 0x0220, size 0x18
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadOnly) AActor* InstigatorActor;  // 0x0238, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TickInterval;  // 0x0240, size 0x4

    // Not reflected: the engine's scripting cannot see these.
    bool bDidEventCompleteSuccessfully;  // 0x0244, private

    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintNativeEvent) bool ArePreconditionsValid(AActor* InInstigatorActor) const;  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, BlueprintNativeEvent) void CompleteEvent(bool bSuccess);  // parameters 0x1
    UFUNCTION(BlueprintAuthorityOnly, BlueprintNativeEvent) void SetupEvent(FAIEventsRowHandle Event, AActor* EventInstigator);  // parameters 0x20
    UFUNCTION(BlueprintNativeEvent) void TickEvent(float DeltaTime);  // parameters 0x4
    UFUNCTION() bool WasEventCompletionSuccessful() const;  // parameters 0x1

    // Virtual functions that start here:
    //   CompleteEvent_Implementation, SetupEvent_Implementation, TickEvent_Implementation
};
