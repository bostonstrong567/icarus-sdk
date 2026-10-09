// /Script/Icarus.PlayerTrackerListener
// Derives from: UGeneratedPlayerTrackerListener > UObject
// size 0x130, declared in Icarus/Source/Icarus/Systems/PlayerTracker/PlayerTrackerListener.h

UCLASS()
class UPlayerTrackerListener : public UGeneratedPlayerTrackerListener
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FPlayerTrackersRowHandle, int32> PlayerTrackers;  // 0x0030, size 0x50
    TMultiMap<FPlayerTrackerCategoriesRowHandle,FPlayerTrackersRowHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPlayerTrackerCategoriesRowHandle,FPlayerTrackersRowHandle,1> > PlayerTrackerCategories;  // 0x0080, not reflected
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FPlayerTrackersRowHandle, FTrackerTaskListProgress> PlayerTaskListTrackers;  // 0x00D0, size 0x50
    UPROPERTY(EditAnywhere) float SaveTimerDuration;  // 0x0120, size 0x4
private:
    FTimerHandle SaveTimer;  // 0x0128, not reflected
public:
    UFUNCTION(BlueprintCallable) void CheckEntireTalentTreeUnlockedTask(AIcarusPlayerCharacter* Player, FAccoladesRowHandle Accolade);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void CheckOffTaskRow(AIcarusPlayerCharacter* Player, FAccoladesRowHandle Accolade, FRowHandle TaskRow);  // parameters 0x38
    UFUNCTION(BlueprintCallable) FTrackerTaskListProgress GetPlayerTaskListTracker(AIcarusPlayerCharacter* Player, FPlayerTrackersRowHandle PlayerTracker);  // parameters 0x70
    UFUNCTION(BlueprintCallable) int32 GetPlayerTracker(AIcarusPlayerCharacter* Player, FPlayerTrackersRowHandle PlayerTracker);  // parameters 0x24
    UFUNCTION(BlueprintCallable) TArray<FPlayerTrackersRowHandle> GetPlayerTrackersForCategory(FPlayerTrackerCategoriesEnum Category);  // parameters 0x20
    UFUNCTION(BlueprintCallable) TArray<FPlayerTrackersRowHandle> GetPlayerTrackersForCategoryAndTagContainer(FPlayerTrackerCategoriesRowHandle Category, const FGameplayTagContainer& Container);  // parameters 0x48
    UFUNCTION(BlueprintCallable) void IncrementAllTrackersInArray(const TArray<FPlayerTrackersRowHandle>& Trackers, AIcarusPlayerCharacter* Player, int32 AmountToAdd);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) void IncrementPlayerTracker(AIcarusPlayerCharacter* Player, FPlayerTrackersRowHandle PlayerTracker, int32 AmountToAdd);  // parameters 0x24
    UFUNCTION(BlueprintCallable) bool IsAnyTalentAllocated(UTalentModelInterface_Const* TalentModel, const TArray<FRowHandle>& TalentRows);  // parameters 0x19
    UFUNCTION() void SaveTrackers();
    UFUNCTION(BlueprintCallable) void SetPlayerTracker(AIcarusPlayerCharacter* Player, FPlayerTrackersRowHandle PlayerTracker, int32 NewAmount);  // parameters 0x24
};
