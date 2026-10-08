// /Script/Icarus.QuestManager
// Derives from: AIcarusActor > AActor > UObject
// size 0x3B8, declared in Icarus/Source/Icarus/Systems/Quests/QuestManager.h

UCLASS(Config=Engine)
class AQuestManager : public AIcarusActor
{
public:
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) FFactionMissionsRowHandle FactionMission;  // 0x02C0, size 0x18
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) EDynamicQuestDifficulty DynamicQuestDifficulty;  // 0x02D8, size 0x1
    UPROPERTY(EditAnywhere, Replicated) AQuest* InitialQuest;  // 0x02E0, size 0x8
    UPROPERTY() bool bReloadedFromDatabase;  // 0x02E8, size 0x1
    UPROPERTY() bool bIcarusBegunPlay;  // 0x02E9, size 0x1
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadOnly) bool bMissionComplete;  // 0x02EA, size 0x1
    UPROPERTY(BlueprintAssignable) FOnNewQuestStarted OnQuestStarted;  // 0x02F0, size 0x10
    UPROPERTY(BlueprintAssignable) FOnQuestComplete OnQuestComplete;  // 0x0300, size 0x10
    UPROPERTY(BlueprintAssignable) FOnQuestFailed OnQuestFailed;  // 0x0310, size 0x10
    UPROPERTY(BlueprintAssignable) FOnQuestAbandoned OnQuestAbandoned;  // 0x0320, size 0x10
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadOnly) float DynamicQuestDelay;  // 0x0330, size 0x4
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool bRunQuests;  // 0x0334, size 0x1
    UPROPERTY(BlueprintReadOnly) FProspectListRowHandle DynamicMissionProspect;  // 0x0338, size 0x18
    UPROPERTY(BlueprintAssignable) FOnFactionMissionChanged OnFactionMissionChanged;  // 0x0350, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float AutoClearCompletedMissionDuration;  // 0x0360, size 0x4
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadOnly) TArray<FQuestActor> RelevantPersistentActors;  // 0x0368, size 0x10
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadOnly) TArray<FQuestCharacter> RelevantPersistentCharacters;  // 0x0378, size 0x10
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadOnly) TArray<AQuest*> RegisteredInfo;  // 0x0388, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    FTimerHandle MissionClearTimer;  // 0x0398, private
    bool bInitialQuestAsyncLoadComplete;  // 0x03A0, private
    TSubclassOf<AQuest> InitialQuestClass;  // 0x03A8, private
    bool bInitialQuestSetup;  // 0x03B0, private

    UFUNCTION(BlueprintCallable) void ArtificiallyComplete();
    UFUNCTION(BlueprintCallable) void CancelDynamicQuest();
    UFUNCTION(BlueprintCallable) void CleanupQuests(bool bAbandoned);  // parameters 0x1
    UFUNCTION() void ClearCompletedMission();
    UFUNCTION() void CompleteQuest();
    UFUNCTION(BlueprintCallable) void GetActiveQuestsData(TArray<FQuestsRowHandle>& OutActiveQuests);  // parameters 0x10
    UFUNCTION(BlueprintCallable) AQuest* GetQuest();  // parameters 0x8
    UFUNCTION(BlueprintCallable) AIcarusActor* GetRelevantPersistentActor(FString Name);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) AIcarusCharacter* GetRelevantPersistentCharacter(FString Name) const;  // parameters 0x18
    UFUNCTION() void InitialQuestAsyncLoadComplete();
    UFUNCTION(BlueprintCallable) void OnDynamicFactionMissionComplete();
    UFUNCTION() void OnRep_FactionMission();
    UFUNCTION(BlueprintCallable) void SetRelevantPersistentActor(FString Name, AIcarusActor* Actor);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void SetRelevantPersistentCharacter(FString Name, AIcarusCharacter* Character);  // parameters 0x18
    UFUNCTION() void SetupDynamicProspectData(const FProspectListRowHandle& MissionProspect);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void SetupFactionMission(const FFactionMissionsRowHandle& FactionMissionRow, bool bForceSetup);  // parameters 0x19
    UFUNCTION(BlueprintCallable) void SetupNewDynamicFactionMission(const FFactionMissionsRowHandle& Mission, const FProspectListRowHandle& MissionProspect);  // parameters 0x30
    UFUNCTION(BlueprintCallable) void TriggerDynamicQuest(FDynamicQuestsRowHandle DynamicQuest, EDynamicQuestDifficulty Difficulty);  // parameters 0x19
    UFUNCTION(BlueprintCallable) void TriggerNewMission(const FFactionMissionsRowHandle& Mission);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void TriggerRandomDynamicQuest();
};
