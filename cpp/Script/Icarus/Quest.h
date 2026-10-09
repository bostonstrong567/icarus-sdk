// /Script/Icarus.Quest
// Derives from: AIcarusActor > AActor > UObject
// size 0x460, declared in Icarus/Source/Icarus/Systems/Quests/Quest.h

UCLASS(Config=Engine)
class AQuest : public AIcarusActor
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(BlueprintAssignable) FOnQuestStarted OnQuestStarted;  // 0x02C0, size 0x1
    UPROPERTY(BlueprintAssignable) FOnQuestEnded OnQuestEnded;  // 0x02C1, size 0x1
protected:
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) FQuestsRowHandle QuestData;  // 0x02C4, size 0x18
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadOnly) TArray<FQuestActor> RelevantActors;  // 0x02E0, size 0x10
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadOnly) TArray<FQuestCharacter> RelevantCharacters;  // 0x02F0, size 0x10
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadOnly) TArray<AQuest*> ActiveQuests;  // 0x0300, size 0x10
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadOnly) TArray<FQuestVariable> QuestVariables;  // 0x0310, size 0x10
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadOnly) TArray<FSubQuest> SubQuests;  // 0x0320, size 0x10
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadOnly) AQuest* QuestParent;  // 0x0330, size 0x8
    UPROPERTY() float CachedDeltaSeconds;  // 0x0338, size 0x4
    UPROPERTY(Replicated) bool bArtificiallyComplete;  // 0x033C, size 0x1
    UPROPERTY() bool bReloaded;  // 0x033D, size 0x1
    TSet<FSoftObjectPath,DefaultKeyFuncs<FSoftObjectPath,0>,FDefaultSetAllocator> SubQuestsPendingLoad;  // 0x0340, not reflected
    TSet<TSubclassOf<AQuest>,DefaultKeyFuncs<TSubclassOf<AQuest>,0>,FDefaultSetAllocator> LoadedQuestClasses;  // 0x0390, not reflected
    FText CachedQuestInfo;  // 0x03E0, not reflected
    FText CachedQuestDesc;  // 0x03F8, not reflected
    TMap<TWeakObjectPtr<APrebuiltStructure,FWeakObjectPtr>,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<APrebuiltStructure,FWeakObjectPtr>,FString,0> > EnsuredStructureNames;  // 0x0410, not reflected
public:
    UFUNCTION(BlueprintCallable) void AbandonQuest();
    UFUNCTION() void AddActiveQuest(AQuest* Quest);  // parameters 0x8
    UFUNCTION() void ArtificiallyComplete();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) bool Check();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void CleanupActor(AIcarusActor* Actor);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void CleanupActorCustom(AIcarusActor* Actor, float Lifetime);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void CleanupCharacter(AIcarusCharacter* Actor);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void CleanupCharacterCustom(AIcarusCharacter* Actor, float Lifetime);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void CleanupQuest(bool bAbandoned);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void CleanupRelevantActor(FString Name, bool bUseVariation);  // parameters 0x11
    UFUNCTION(BlueprintCallable) void CleanupRelevantActorCustom(FString Name, bool bUseVariation, float Lifetime);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void CleanupRelevantCharacter(FString Name, bool bUseVariation);  // parameters 0x11
    UFUNCTION(BlueprintCallable) void CleanupRelevantCharacterCustom(FString Name, bool bUseVariation, float Lifetime);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void CleanupStructure(FString Name, bool bUseVariation, float Lifetime, bool bBypassSettings);  // parameters 0x19
    UFUNCTION(BlueprintCallable) void CleanupStructureByRow(FPrebuiltStructuresRowHandle Structure, float Lifetime, bool bBypassSettings);  // parameters 0x1D
    UFUNCTION() AQuest* CreateQuest(FQuestsEnum Quest);  // parameters 0x18
    UFUNCTION(BlueprintCallable) APrebuiltStructure* EnsurePrebuiltStructure(FString RelevantActorName, FPrebuiltStructuresRowHandle Structure, const FTransform& SpawnTransform, FOnPrebuiltStructureReady OnReady, TSubclassOf<APrebuiltStructure> StructureClass);  // parameters 0x80
    UFUNCTION(BlueprintCallable) APrebuiltStructure* EnsurePrebuiltStructureByRow(FPrebuiltStructuresRowHandle Structure, const FTransform& SpawnTransform, FOnPrebuiltStructureReady OnReady);  // parameters 0x68
    UFUNCTION(BlueprintCallable) APrebuiltStructure* EnsurePrebuiltStructureCustom(FString RelevantActorName, FPrebuiltStructuresRowHandle Structure, const FTransform& SpawnTransform, FOnPrebuiltStructureReady OnReady, TSubclassOf<APrebuiltStructure> StructureClass);  // parameters 0x80
    UFUNCTION() void GetActiveQuestsData(TArray<FQuestsRowHandle>& OutActiveQuests) const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetBooleanVariable(FString VariableName);  // parameters 0x11
    UFUNCTION(BlueprintNativeEvent) void GetDescription(const FText& InDescription, FText& OutDescription, bool& bOutComplete);  // parameters 0x31
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetFloatVariable(FString VariableName);  // parameters 0x14
    UFUNCTION(BlueprintCallable) FText GetFullDescription(bool& bOutComplete);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetIntVariable(FString VariableName);  // parameters 0x14
    UFUNCTION(BlueprintCallable) APrebuiltStructure* GetPrebuiltStructureByRow(FPrebuiltStructuresRowHandle Structure, EQuestActorState& QuestActorState);  // parameters 0x28
    UFUNCTION(BlueprintCallable) TArray<FQuestDescription> GetQuestDescription(int32 Depth);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetQuestFlag(FSessionFlagsEnum Flag);  // parameters 0x11
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) FText GetQuestInfo();  // parameters 0x18
    UFUNCTION(BlueprintCallable) AIcarusActor* GetRelevantActor(FString Name, bool bUseVariation, EQuestActorState& QuestActorState);  // parameters 0x20
    UFUNCTION(BlueprintCallable) AIcarusCharacter* GetRelevantCharacter(FString Name, bool bUseVariation, EQuestActorState& QuestActorState);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetVariation() const;  // parameters 0x4
    UFUNCTION(BlueprintNativeEvent) void HandleQuestEvent(FQuestEventsEnum Event, AQuest* Quest);  // parameters 0x18
    UFUNCTION() void Initialise(AQuest* Parent, FQuestsRowHandle Quest);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void IsPrebuiltStructureBuilt(FPrebuiltStructuresRowHandle Structure, EPrebuiltStructureState& StructureState);  // parameters 0x19
    UFUNCTION() void LoadAndCreateQuest(FQuestsEnum Quest);  // parameters 0x10
    UFUNCTION(BlueprintNativeEvent) void OnBoolVariableUpdated(FString Name, bool bValue);  // parameters 0x11
    UFUNCTION() void OnEnsuredPrebuiltStructureComplete(APrebuiltStructure* Structure);  // parameters 0x8
    UFUNCTION(BlueprintNativeEvent) void OnFloatVariableUpdated(FString Name, float fValue);  // parameters 0x14
    UFUNCTION(BlueprintNativeEvent) void OnIntVariableUpdated(FString Name, float iValue);  // parameters 0x14
    UFUNCTION() void PassEvent(FQuestEventsEnum Event, AQuest* Quest);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void ReceiveQuestAbandoned();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveQuestEnded(bool bWasAbandoned);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void ReceiveQuestStarted();
    UFUNCTION() void RemoveActiveQuest(AQuest* Quest);  // parameters 0x8
    UFUNCTION() bool Run(float DeltaSeconds);  // parameters 0x5
    UFUNCTION(BlueprintNativeEvent) void RunFlow();
    UFUNCTION(BlueprintNativeEvent) void RunOperations(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void RunQuest(FQuestsEnum Quest, EQuestState& QuestState);  // parameters 0x11
    UFUNCTION(BlueprintCallable) void SetBooleanVariable(FString VariableName, bool Variable);  // parameters 0x11
    UFUNCTION(BlueprintCallable) void SetFloatVariable(FString VariableName, float Variable);  // parameters 0x14
    UFUNCTION(BlueprintCallable) void SetIntVariable(FString VariableName, int32 Variable);  // parameters 0x14
    UFUNCTION(BlueprintCallable) void SetQuestFlag(FSessionFlagsEnum Flag, bool State);  // parameters 0x11
    UFUNCTION(BlueprintCallable) void SetRelevantActor(FString Name, bool bUseVariation, AIcarusActor* Actor);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void SetRelevantCharacter(FString Name, bool bUseVariation, AIcarusCharacter* Actor);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void SetRelevantPersistentActor(FString Name, AIcarusActor* Actor);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void SetRelevantPersistentCharacter(FString Name, AIcarusCharacter* Character);  // parameters 0x18
    UFUNCTION(BlueprintNativeEvent) void Setup(bool bFirstTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) bool SkipStep();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void TriggerEvent(FQuestEventsEnum Event);  // parameters 0x10

    // Virtual functions that start here:
    //   Check_Implementation, GetDescription_Implementation, GetQuestInfo_Implementation
    //   HandleQuestEvent_Implementation, OnBoolVariableUpdated_Implementation
    //   OnFloatVariableUpdated_Implementation, OnIntVariableUpdated_Implementation, RunFlow_Implementation
    //   RunOperations_Implementation, Setup_Implementation
};
