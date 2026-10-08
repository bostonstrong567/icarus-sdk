// /Script/Icarus.AccoladeSubsystem
// Derives from: UWorldSubsystem > USubsystem > UObject
// size 0xF0, declared in Icarus/Source/Icarus/Subsystems/LocalPlayer/AccoladeSubsystem.h

UCLASS()
class UAccoladeSubsystem : public UWorldSubsystem
{
public:
    UPROPERTY(BlueprintAssignable) FOnAccoladeCompleted OnAccoladeCompleted;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FOnAccoladeUpdated OnAccoladeUpdated;  // 0x0040, size 0x10
    UPROPERTY(SaveGame) TArray<FAccoladeCompletedState> CompletedAccolades;  // 0x0088, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    TArray<FName,TSizedDefaultAllocator<32> > PendingAchievementUnlocks;  // 0x0050, private
    TArray<FName,TSizedDefaultAllocator<32> > InProgressAchievementUnlocks;  // 0x0060, private
    TSharedPtr<FOnlineAchievementsWrite,1> AchievementsWriteObject;  // 0x0070, private
    int32 WriteAchievementsAttemptCount;  // 0x0080, private
    const int32 MAX_WRITE_ACHIEVEMENTS_ATTEMPTS;  // 0x0084, private
    bool bInitialized;  // 0x0098, private
    TMultiMap<TSoftClassPtr<UAccoladeImpl>,FAccoladesRowHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSoftClassPtr<UAccoladeImpl>,FAccoladesRowHandle,1> > AccoladeToTypeMap;  // 0x00A0, private

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
