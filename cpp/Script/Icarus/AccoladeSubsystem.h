// /Script/Icarus.AccoladeSubsystem
// Derives from: UWorldSubsystem > USubsystem > UObject
// size 0xF0, declared in Icarus/Source/Icarus/Subsystems/LocalPlayer/AccoladeSubsystem.h

UCLASS()
class UAccoladeSubsystem : public UWorldSubsystem
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY(BlueprintAssignable) FOnAccoladeCompleted OnAccoladeCompleted;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FOnAccoladeUpdated OnAccoladeUpdated;  // 0x0040, size 0x10
    TArray<FName,TSizedDefaultAllocator<32> > PendingAchievementUnlocks;  // 0x0050, not reflected
    TArray<FName,TSizedDefaultAllocator<32> > InProgressAchievementUnlocks;  // 0x0060, not reflected
    TSharedPtr<FOnlineAchievementsWrite,1> AchievementsWriteObject;  // 0x0070, not reflected
    int32 WriteAchievementsAttemptCount;  // 0x0080, not reflected
    const int32 MAX_WRITE_ACHIEVEMENTS_ATTEMPTS;  // 0x0084, not reflected
    UPROPERTY(SaveGame) TArray<FAccoladeCompletedState> CompletedAccolades;  // 0x0088, size 0x10
    bool bInitialized;  // 0x0098, not reflected
    TMultiMap<TSoftClassPtr<UAccoladeImpl>,FAccoladesRowHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSoftClassPtr<UAccoladeImpl>,FAccoladesRowHandle,1> > AccoladeToTypeMap;  // 0x00A0, not reflected
public:
    UFUNCTION() void CheckAgainstCompletedAccolades();
    UFUNCTION(BlueprintCallable) bool DeleteAccoladeSave(const FPlayerCharacterID& PlayerCharacterID);  // parameters 0x19
    UFUNCTION(BlueprintCallable) bool GetAccoladeProgress(const FAccoladesRowHandle& AccoladeRow, int32& CurrentValue, int32& MaxValue, FDateTime& TimeCompleted);  // parameters 0x29
    UFUNCTION(BlueprintCallable) TArray<FAccoladeTaskState> GetAccoladeTaskStates(AIcarusPlayerCharacter* Character, const FAccoladesRowHandle& AccoladeRow);  // parameters 0x30
    UFUNCTION(BlueprintCallable) TArray<FAccoladeCompletedState> GetCompletedAccolades();  // parameters 0x10
    UFUNCTION(BlueprintCallable) TArray<FAccoladeCompletedState> GetCompletedAccoladesWithProspectID(FString ProspectID);  // parameters 0x20
    UFUNCTION(BlueprintCallable) TArray<FAccoladesRowHandle> GetSortedIncompleteAccolades();  // parameters 0x10
    UFUNCTION(BlueprintCallable) bool IsAccoladeCompleted(const FAccoladesRowHandle& AccoladeRow);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsTaskListAccolade(const FAccoladesRowHandle& AccoladeRow) const;  // parameters 0x19
    UFUNCTION() void OnTalentUpdated(AIcarusPlayerCharacter* Player);  // parameters 0x8
    UFUNCTION() void OnTrackerUpdated(FPlayerTrackersRowHandle Tracker, int32 OldValue, int32 NewValue);  // parameters 0x20
    UFUNCTION() void PostPlayerTrackerInitialized();
    UFUNCTION(BlueprintCallable) void ResetAccolades();
    UFUNCTION(BlueprintCallable) void TryCompleteOneOffAccolade(AIcarusPlayerCharacter* Player, FAccoladesRowHandle Accolade);  // parameters 0x20
};
