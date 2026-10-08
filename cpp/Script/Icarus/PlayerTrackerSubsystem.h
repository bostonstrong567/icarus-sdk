// /Script/Icarus.PlayerTrackerSubsystem
// Derives from: UWorldSubsystem > USubsystem > UObject
// size 0x40, declared in Icarus/Source/Icarus/Subsystems/World/PlayerTrackerSubsystem.h

UCLASS()
class UPlayerTrackerSubsystem : public UWorldSubsystem
{
public:
    UPROPERTY(BlueprintAssignable) FPlayerTrackerUpdatedSignature OnPlayerTrackerUpdated;  // 0x0030, size 0x10

    UFUNCTION(BlueprintCallable) void CheckEntireTalentTreeUnlockedTrackerTask(AIcarusPlayerCharacter* Player, FAccoladesRowHandle Accolade);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void CheckOffPlayerTrackerTask(AIcarusPlayerCharacter* Player, FAccoladesRowHandle Accolade, FRowHandle TaskRow);  // parameters 0x38
    UFUNCTION(BlueprintCallable) FTrackerTaskListProgress GetPlayerTaskListTracker(AIcarusPlayerCharacter* Player, FPlayerTrackersRowHandle PlayerTracker);  // parameters 0x70
    UFUNCTION(BlueprintCallable) int32 GetPlayerTracker(AIcarusPlayerCharacter* Player, FPlayerTrackersRowHandle PlayerTracker);  // parameters 0x24
    UFUNCTION(BlueprintCallable) void IncrementPlayerTracker(AIcarusPlayerCharacter* Player, FPlayerTrackersRowHandle PlayerTracker, int32 AmountToAdd);  // parameters 0x24
    UFUNCTION() void PostLocalPlayerCreatedInitializeSubsystem();
    UFUNCTION(BlueprintCallable) void ResetTrackers();
    UFUNCTION(BlueprintCallable) void SetPlayerTracker(AIcarusPlayerCharacter* Player, FPlayerTrackersRowHandle PlayerTracker, int32 NewAmount);  // parameters 0x24
};
