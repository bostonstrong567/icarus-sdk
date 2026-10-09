// /Script/Icarus.Settlement
// Derives from: AIcarusActor > AActor > UObject
// size 0x7C0, declared in Icarus/Source/Icarus/Settlement/Settlement.h

UCLASS(Config=Engine)
class ASettlement : public AIcarusActor, public ITalentHandler
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bShowTaskDebug;  // 0x02C8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FCharacterGrowthRowHandle GrowthRowHandle;  // 0x02CC, size 0x18
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) int32 XP;  // 0x02E4, size 0x4
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadOnly) int32 Level;  // 0x02E8, size 0x4
    UPROPERTY(BlueprintAssignable) FOnSettlementXPUpdated OnXPUpdated;  // 0x02F0, size 0x10
    UPROPERTY(BlueprintAssignable) FOnSettlementLevelUpdated OnLevelUpdated;  // 0x0300, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FTalentsRowHandle> UnlockedTalents;  // 0x0310, size 0x10
    UPROPERTY(BlueprintReadOnly) int32 DaysSinceCreation;  // 0x0320, size 0x4
    UPROPERTY(Instanced, BlueprintReadOnly) USettlementTalentControllerComponent* SettlementTalentController;  // 0x0328, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) TArray<FBackendTalent> SettlementTalents;  // 0x0330, size 0x10
    UPROPERTY(BlueprintAssignable) FOnTalentsChanged OnSettlementTalentsChanged;  // 0x0340, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString SettlementName;  // 0x0350, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRowHandle Faction;  // 0x0360, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString OwnerCharacterId;  // 0x0378, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FString> MemberCharacterIds;  // 0x0388, size 0x10
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) UInventoryComponent* Inventory;  // 0x0398, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) UFillableComponent* WaterStorage;  // 0x03A0, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) UFillableComponent* OxygenStorage;  // 0x03A8, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) UFillableComponent* PowerStorage;  // 0x03B0, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) UFillableComponent* BiofuelStorage;  // 0x03B8, size 0x8
    UPROPERTY(BlueprintReadOnly) TArray<FSettlementNPC> NPCs;  // 0x03C0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UCurveFloat* SkillXpToLevelCurve;  // 0x03D0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSubclassOf<ASettlementNPCCharacter> NPCActorClass;  // 0x03D8, size 0x8
    UPROPERTY(Replicated, Transient, BlueprintReadOnly) TArray<ASettlementNPCCharacter*> SpawnedNPCActors;  // 0x03E0, size 0x10
    UPROPERTY(Transient, BlueprintReadOnly) bool bSettlementActorsVirtualised;  // 0x03F0, size 0x1
    UPROPERTY(BlueprintReadOnly) TArray<FSettlementNPCTask> TaskPool;  // 0x0450, size 0x10
    UPROPERTY(BlueprintReadOnly) bool bActivityOverrideActive;  // 0x0460, size 0x1
    UPROPERTY(BlueprintReadOnly) ESettlementNPCActivity ActivityOverride;  // 0x0461, size 0x1
    UPROPERTY(Replicated, BlueprintReadOnly) TArray<ASettlementBuilding*> Buildings;  // 0x04D8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSettlementWallConfig WallConfig;  // 0x04E8, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DebugSettlementRadius;  // 0x0500, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TArray<FVector> WallPoints;  // 0x0508, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bEnableEventDirector;  // 0x0524, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float EventChancePerDay;  // 0x0528, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MinDaysBetweenEvents;  // 0x052C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 EventGraceDays;  // 0x0530, size 0x4
    UPROPERTY(Replicated, ReplicatedUsing, BlueprintReadOnly) FSettlementEventsRowHandle ActiveEvent;  // 0x0534, size 0x18
    UPROPERTY(BlueprintReadOnly) int32 ActiveEventStartDay;  // 0x054C, size 0x4
    UPROPERTY(Replicated, BlueprintReadOnly) int32 ActiveEventSeed;  // 0x0550, size 0x4
    UPROPERTY(BlueprintAssignable) FOnSettlementActiveEventChanged OnActiveEventChanged;  // 0x0558, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSettlementNPCRolesRowHandle DefenseRole;  // 0x0568, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float GuardDefenseValue;  // 0x0580, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float WallDefenseBonus;  // 0x0584, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float RaidStorageStolenFraction;  // 0x0588, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 RaidRestPenalty;  // 0x058C, size 0x4
    UPROPERTY(BlueprintAssignable) FOnSettlementRaidResolved OnRaidResolved;  // 0x0590, size 0x10
    UPROPERTY(BlueprintAssignable) FOnSettlementRaidReadyToResolve OnRaidReadyToResolve;  // 0x05A0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float RaidInjuryFraction;  // 0x05B0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bEnableAilments;  // 0x05B4, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 AilmentStartingSeverity;  // 0x05B8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 SicknessWorsenPerDay;  // 0x05BC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 InjuryWorsenPerDay;  // 0x05C0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 IncapacitatedGraceDays;  // 0x05C4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSettlementNPCTaskTypesRowHandle IncapacitatedTaskType;  // 0x05C8, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 TreatmentSeverityHealed;  // 0x05E0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float AilmentEfficiencyPenalty;  // 0x05E4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemsStaticRowHandle SicknessMedicineItem;  // 0x05E8, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemsStaticRowHandle InjuryMedicineItem;  // 0x0600, size 0x18
    UPROPERTY(BlueprintAssignable) FOnSettlementNPCAilmentChanged OnNPCAilmentChanged;  // 0x0618, size 0x10
    UPROPERTY(BlueprintAssignable) FOnSettlementNPCIncapacitated OnNPCIncapacitated;  // 0x0628, size 0x10
    UPROPERTY(BlueprintAssignable) FOnSettlementNPCDied OnNPCDied;  // 0x0638, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRowHandle ActiveQuest;  // 0x0670, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 SurvivalTickGameHour;  // 0x0688, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 RestDecayPerDay;  // 0x068C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 RestRecoveryPerFullSleep;  // 0x0690, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float RestfulSleepMinutes;  // 0x0694, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bEnablePopulationDynamics;  // 0x0698, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float VisitorArrivalChance;  // 0x069C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 VisitorMoodThreshold;  // 0x06A0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MaxPendingVisitors;  // 0x06A4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 VisitorStayDays;  // 0x06A8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FExperienceEventsRowHandle VisitorRecruitedExperienceReward;  // 0x06AC, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 DepartureMoodThreshold;  // 0x06C4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 DepartureGraceDays;  // 0x06C8, size 0x4
    UPROPERTY(Replicated, ReplicatedUsing, BlueprintReadOnly) TArray<FSettlementVisitor> PendingVisitors;  // 0x06D0, size 0x10
    UPROPERTY(Transient, BlueprintReadOnly) TArray<ASettlementNPCCharacter*> SpawnedVisitorActors;  // 0x06E0, size 0x10
    UPROPERTY(BlueprintAssignable) FOnSettlementVisitorArrived OnVisitorArrived;  // 0x06F0, size 0x10
    UPROPERTY(BlueprintAssignable) FOnSettlementVisitorRecruited OnVisitorRecruited;  // 0x0700, size 0x10
    UPROPERTY(BlueprintAssignable) FOnSettlementVisitorLeft OnVisitorLeft;  // 0x0710, size 0x10
    UPROPERTY(BlueprintAssignable) FOnSettlementNPCDepartureWarning OnNPCDepartureWarning;  // 0x0720, size 0x10
    UPROPERTY(BlueprintAssignable) FOnSettlementNPCDeparted OnNPCDeparted;  // 0x0730, size 0x10
    UPROPERTY(BlueprintAssignable) FOnSettlementPendingVisitorsChanged OnPendingVisitorsChanged;  // 0x0740, size 0x10
    UPROPERTY(BlueprintAssignable) FOnSettlementEventStarted OnEventStarted;  // 0x0758, size 0x10
    UPROPERTY(BlueprintAssignable) FOnSettlementEventResolved OnEventResolved;  // 0x0768, size 0x10
    UPROPERTY(BlueprintAssignable) FOnSettlementNPCAdded OnNPCAdded;  // 0x0778, size 0x10
    UPROPERTY(BlueprintAssignable) FOnSettlementNPCRemoved OnNPCRemoved;  // 0x0788, size 0x10
    UPROPERTY(BlueprintAssignable) FOnSettlementNPCTaskingUpdated OnNPCTaskingUpdated;  // 0x0798, size 0x10
    UPROPERTY(BlueprintAssignable) FOnSettlementTaskCompleted OnTaskCompletedEvent;  // 0x07A8, size 0x10
protected:
    TMap<FGuid,TSharedPtr<FStatContainer,0>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FStatContainer,0>,0> > NPCStatContainers;  // 0x03F8, not reflected
    UPROPERTY(Transient, Instanced) UTerrainAnchorComponent* SettlementTerrainAnchor;  // 0x0448, size 0x8
    bool bProximityResolveTriggered;  // 0x0648, not reflected
    UPROPERTY() int32 LastEventEndDay;  // 0x064C, size 0x4
    TArray<TTuple<FModifierStatesRowHandle,int>,TSizedDefaultAllocator<32> > AppliedActiveEventModifiers;  // 0x0650, not reflected
    TArray<FSettlementTimedModifier,TSizedDefaultAllocator<32> > TimedOutcomeModifiers;  // 0x0660, not reflected
    UPROPERTY() bool bInitialVisitorGranted;  // 0x0750, size 0x1
    bool bIsPendingSurvivalTick;  // 0x07B8, not reflected
    UPROPERTY() bool bHasInitialised;  // 0x07B9, size 0x1
private:
    FTimerHandle TaskUpdateTimer;  // 0x0468, not reflected
    FTimerHandle TaskProgressTimer;  // 0x0470, not reflected
    FTimerHandle ActiveBuildingTimer;  // 0x0478, not reflected
    FTimerHandle EventProximityTimer;  // 0x0480, not reflected
    TMap<FGuid,FTimerHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FTimerHandle,0> > BehaviourOverrideTimers;  // 0x0488, not reflected
    float LastBuildingTickProspectTime;  // 0x0518, not reflected
    float LastTaskTickProspectTime;  // 0x051C, not reflected
    float LastSleepSampleProspectTime;  // 0x0520, not reflected
public:
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) bool AcceptVisitor(const FGuid& VisitorId);  // parameters 0x11
    UFUNCTION(BlueprintNativeEvent) void ActiveEventChanged();
    UFUNCTION(BlueprintCallable) void AddNPC(const FSettlementNPC& NPC);  // parameters 0x110
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) bool AddNPCActor(ASettlementNPCCharacter* NPCActor);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void AddTask(const FSettlementNPCTask& Task);  // parameters 0x54
    UFUNCTION(BlueprintCallable) void AddTaskProgress(const FGuid& TaskId, float Delta);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) bool AddToStorage(const TArray<FCraftingInput>& Items, const TArray<FResourceItem>& Resources, float Multiplier, bool bDropItemsAtOverflow);  // parameters 0x26
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void AddXP(int32 Amount);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, BlueprintNativeEvent) void ApplyRaidConsequences(float Shortfall);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void AttractVisitor();
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintNativeEvent) float CalculateDefenseScore() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float CalculateRaidStrength(const FSettlementRaid& RaidConfig) const;  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CanAssignNPCToBuilding(const FGuid& NpcId, ASettlementBuilding* Building) const;  // parameters 0x19
    UFUNCTION(BlueprintCallable) bool CanChooseOutcome(int32 OutcomeIndex);  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) bool CheckStorageContains(const TArray<FCraftingInput>& Items, const TArray<FQueryInput>& ItemQueries, const TArray<FResourceItem>& Resources);  // parameters 0x31
    UFUNCTION(BlueprintCallable) void ClearActivityOverride();
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void ClearBehaviourOverride(const FGuid& NpcId);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void ClearNPCWorkAssignment(const FGuid& NpcId);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void CompleteTask(const FGuid& TaskId);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) bool ConstructNewBuilding(FSettlementBuildingsRowHandle Building, FTransform WorldTransform, ASettlementBuilding*& OutBuilding, ESettlementBuildState InitialBuildState);  // parameters 0x5A
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) bool ConsumeFromStorage(const TArray<FCraftingInput>& Items, const TArray<FQueryInput>& ItemQueries, const TArray<FResourceItem>& Resources);  // parameters 0x31
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 CountNPCsWithRole(const FSettlementNPCRolesRowHandle& NPCRole) const;  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FSettlementNPCTask CreateNewTask(FSettlementNPCTaskTypesRowHandle InTaskType);  // parameters 0x6C
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) void DevirtualiseSettlementActors();
    UFUNCTION(BlueprintCallable, BlueprintPure) ASettlementBuilding* FindBuilding(const int32& BuildingInstanceId) const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) bool FindPendingVisitor(const FGuid& VisitorId, FSettlementVisitor& OutVisitor) const;  // parameters 0x129
    UFUNCTION(BlueprintCallable, BlueprintPure) bool FindTask(const FGuid& TaskId, FSettlementNPCTask& OutTask) const;  // parameters 0x65
    UFUNCTION(BlueprintCallable) void GenerateSettlementWall();
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetActiveEventData(FSettlementEventData& OutData) const;  // parameters 0xB9
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetAverageMood() const;  // parameters 0x4
    UFUNCTION(BlueprintNativeEvent) void GetBoundaryAffectingActors(TArray<AActor*>& OutActors) const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetDeviatedOutcome(int32 OutcomeIndex, FSettlementEventOutcomeData& OutOutcome) const;  // parameters 0xF9
    UFUNCTION(BlueprintCallable, BlueprintPure) ESettlementNPCActivity GetEffectiveActivity(const FSettlementNPC& NPC) const;  // parameters 0x111
    UFUNCTION(BlueprintNativeEvent) float GetEventWeight(const FSettlementEventsRowHandle& EventRow, float BaseWeight) const;  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetMaxNPCs() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetMedicalTreatmentCapacity() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetNPCActivitySlotElapsed(float DeltaProspectTime, ESettlementNPCActivity ActivitySlot, const FGuid& NPCId, float& OutSlotFraction) const;  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetNPCSkillLevel(const FGuid& NpcId, const FSettlementNPCSkillsRowHandle& Skill) const;  // parameters 0x2C
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintNativeEvent) FTransform GetNPCSpawnTransform(const FSettlementNPC& NPC) const;  // parameters 0x140
    UFUNCTION(BlueprintCallable, BlueprintPure) TArray<FSettlementNPC> GetNPCsAssignedToBuilding(ASettlementBuilding* Building) const;  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetNumNPCs() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) FBox GetSettlementBounds() const;  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetSettlementLevel() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetSettlementTalent(FTalentsRowHandle& Talent) const;  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetTaskProgress(const FGuid& TaskId) const;  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetXP() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetXPRequired(int32 InLevel) const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void GrantExperienceEvent(const FExperienceEventsRowHandle& Event);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) bool HasActiveEvent() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool HasAilment(const FGuid& NPCId, ESettlementNPCAilment& OutAilment, int32& OutSeverity) const;  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) bool InflictAilment(const FGuid& NPCId, ESettlementNPCAilment Ailment, int32 Severity);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) int32 InflictAilmentOnRandomMembers(ESettlementNPCAilment Ailment, int32 Count);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) void InitialiseSettlement();
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsActorWithinSettlementBounds(AActor* Actor) const;  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsLocationWithinSettlementBounds(const FVector& Location) const;  // parameters 0xD
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool IsTaskValid(const FSettlementNPCTask& Task);  // parameters 0x55
    UFUNCTION(BlueprintNativeEvent) void OnBuildingRegistered(ASettlementBuilding* Building);  // parameters 0x8
    UFUNCTION(BlueprintNativeEvent) void OnBuildingUnregistered(ASettlementBuilding* Building);  // parameters 0x8
    UFUNCTION(BlueprintNativeEvent) void OnDeceasedNPCActor(ASettlementNPCCharacter* NPCActor);  // parameters 0x8
    UFUNCTION(BlueprintNativeEvent) void OnDepartingNPCActor(ASettlementNPCCharacter* NPCActor);  // parameters 0x8
    UFUNCTION() void OnRep_ActiveEvent();
    UFUNCTION() void OnRep_Level();
    UFUNCTION() void OnRep_PendingVisitors();
    UFUNCTION() void OnRep_SettlementTalents();
    UFUNCTION() void OnRep_XP();
    UFUNCTION() void OnSettlementTerrainAnchorChanged();
    UFUNCTION() void OnTalentControllerModelViewChanged(UTalentControllerComponent* Controller);  // parameters 0x8
    UFUNCTION(BlueprintNativeEvent) void OnTaskCompleted(const FSettlementNPCTask& Task);  // parameters 0x54
    UFUNCTION() void OnTimeOfDayDayChanged(int32 NewDay);  // parameters 0x4
    UFUNCTION() void OnTimeOfDayHourChanged(int32 NewHour);  // parameters 0x4
    UFUNCTION() void OnUnlockedSettlementTalent(UTalentModelInterface_Const* Model, const FTalentsRowHandle& Talent, const FTalentModelData& TalentData);  // parameters 0x30
    UFUNCTION(BlueprintNativeEvent) void OnVisitorActorLeaving(ASettlementNPCCharacter* VisitorActor, ESettlementVisitorLeaveReason Reason);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void RegisterBuilding(ASettlementBuilding* Building);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) bool RejectVisitor(const FGuid& VisitorId);  // parameters 0x11
    UFUNCTION(BlueprintCallable) void RemoveNPC(const FGuid& NpcId);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void RemoveTask(const FGuid& TaskId);  // parameters 0x10
    UFUNCTION(BlueprintNativeEvent) void ResetWall();
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void ResolveActiveEvent(const FSettlementEventOutcomeData& Outcome);  // parameters 0xF0
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) bool ResolveActiveRaidWithShortfall(int32 OutcomeIndex, float Shortfall);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) bool ResolveEventWithChoice(int32 OutcomeIndex);  // parameters 0x5
    UFUNCTION(BlueprintCallable) void SetActivityOverride(ESettlementNPCActivity Activity);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetNPCRole(const FGuid& NpcId, const FSettlementNPCRolesRowHandle& NewRole);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) bool SetNPCWorkAssignment(const FGuid& NpcId, ASettlementBuilding* Building);  // parameters 0x19
    UFUNCTION(BlueprintCallable) void SetTaskProgress(const FGuid& TaskId, float NewProgress, bool bAutoComplete);  // parameters 0x15
    UFUNCTION(BlueprintCallable) void SetXP(int32 Amount);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintNativeEvent) bool ShouldAutoResolveRaids() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void StartBehaviourOverride(const FGuid& NpcId, const FSettlementNPCTaskTypesRowHandle& TaskType, float Duration);  // parameters 0x2C
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void StartEvent(const FSettlementEventsRowHandle& EventRow);  // parameters 0x18
    UFUNCTION() void TickActiveBuildings();
    UFUNCTION(BlueprintNativeEvent) void TickNPCSurvival();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) void TickPopulation();
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void TreatAilment(const FGuid& NPCId);  // parameters 0x10
    UFUNCTION(BlueprintNativeEvent) void TryApplySurvivalModifiers();
    UFUNCTION(BlueprintNativeEvent) void TryUpdateTaskProgress(const FSettlementNPCTask& Task, float ProspectTimeDelta);  // parameters 0x58
    UFUNCTION(BlueprintCallable) void UnregisterBuilding(ASettlementBuilding* Building);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) bool UpdateSettlementTalent(const FTalentsRowHandle& Talent, bool bState);  // parameters 0x1A
    UFUNCTION(BlueprintNativeEvent) void UpdateTaskAssignments();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) void VirtualiseSettlementActors();

    // Virtual functions that start here:
    //   ResetWall_Implementation, TickNPCSurvival_Implementation, TryApplySurvivalModifiers_Implementation
    //   TryUpdateTaskProgress_Implementation, UpdateTaskAssignments_Implementation
};
