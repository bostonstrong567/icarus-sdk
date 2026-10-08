// /Script/Icarus.AICoordinatorSubsystem
// Derives from: UWorldSubsystem > USubsystem > UObject
// size 0x98, declared in Icarus/Source/Icarus/AI/Coordinator/AICoordinatorSubsystem.h

UCLASS()
class UAICoordinatorSubsystem : public UWorldSubsystem
{
public:
    UPROPERTY() TArray<FActiveEvent> ActiveEvents;  // 0x0030, size 0x10
    UPROPERTY() TMap<FAIEventsEnum, FEventCooldownList> EventsOnCooldown;  // 0x0040, size 0x50
    UPROPERTY() FTimerHandle CheckPendingCooldownsHandle;  // 0x0090, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintAuthorityOnly) bool CanRequestAIEvent(FAIEventsEnum Event) const;  // parameters 0x11
    UFUNCTION() void CheckPendingCooldownTimers();
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void CleanupActiveEvent(AAIEvent* Event);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintAuthorityOnly) int32 GetActiveEventsOfType(FAIEventsEnum Event, TArray<AAIEvent*>& OutEvents) const;  // parameters 0x24
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintAuthorityOnly) bool IsEventActive(FAIEventsEnum Event) const;  // parameters 0x11
    UFUNCTION() void OnActiveEventEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x9
    UFUNCTION() void PutEventOnCooldown(const FAIEventsRowHandle& Event);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) TEnumAsByte<EAIEventRequestResponse> RequestAIEvent(FAIEventsEnum Event, AActor* InstigatorActor);  // parameters 0x19
    UFUNCTION() void SetupInitialCooldowns();
};
