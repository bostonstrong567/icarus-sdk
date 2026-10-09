// /Script/Icarus.IcarusNPCGOAPController
// Derives from: AIcarusNPCController > AAIController > AController > AActor > UObject
// size 0x540, declared in Icarus/Source/Icarus/AI/IcarusNPCGOAPController.h

UCLASS(NotPlaceable, Config=Engine)
class AIcarusNPCGOAPController : public AIcarusNPCController
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bCurrentActionComplete;  // 0x03E0, size 0x1
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) UIcarusGOAPInteractableComponent* CurrentInteractable;  // 0x03E8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UBlackboardData* DefaultBlackboard;  // 0x03F0, size 0x8
    UPROPERTY(BlueprintAssignable) FGOAPStateUpdatedSignature OnGOAPStateUpdated;  // 0x03F8, size 0x10
    UPROPERTY(BlueprintAssignable) FGOAPNewActionSet OnNewActionSet;  // 0x0408, size 0x10
    UPROPERTY(BlueprintReadOnly) EGOAPControllerState CurrentControllerState;  // 0x0418, size 0x1
    UPROPERTY(BlueprintReadWrite) FRandomStream SeededRandomStream;  // 0x041C, size 0x8
    UPROPERTY(BlueprintAssignable) FRandomStreamUpdatedSignature OnRandomStreamUpdated;  // 0x0428, size 0x10
private:
    UPROPERTY() FGOAPState CurrentState;  // 0x0438, size 0x10
    UPROPERTY() UIcarusGOAPGoal* CurrentGoal;  // 0x0448, size 0x8
    UPROPERTY() UIcarusGOAPAction* CurrentAction;  // 0x0450, size 0x8
    UPROPERTY() TArray<UIcarusGOAPGoal*> PotentialGoals;  // 0x0458, size 0x10
    UPROPERTY() TArray<UIcarusGOAPAction*> PotentialActions;  // 0x0468, size 0x10
    UPROPERTY() TArray<UIcarusGOAPMotivation*> Motivations;  // 0x0478, size 0x10
    UPROPERTY(Instanced) UIcarusGOAPPlanner* Planner;  // 0x0488, size 0x8
    UPROPERTY(BlueprintReadOnly) AIcarusNPCGOAPCharacter* NPCGOAPCharacter;  // 0x0490, size 0x8
    UPROPERTY(Instanced) UIcarusGOAPAIState* AIState;  // 0x0498, size 0x8
    UPROPERTY(Instanced) UIcarusGOAPAIMemory* AIMemory;  // 0x04A0, size 0x8
    UPROPERTY() UIcarusGOAPGoal* DefaultGoal;  // 0x04A8, size 0x8
    TQueue<UIcarusGOAPAction *,1> CurrentPlan;  // 0x04B0, not reflected
    UPROPERTY() TMap<TSoftClassPtr<UIcarusGOAPGoal>, float> LastGoalExecutionTimes;  // 0x04C0, size 0x50
    bool ExecutedCurrentAction;  // 0x0510, not reflected
    bool LastActionSuccess;  // 0x0511, not reflected
    FString DebugPlan;  // 0x0518, not reflected
    TArray<int,TSizedDefaultAllocator<32> > TemporaryStatUIDs;  // 0x0528, not reflected
public:
    UFUNCTION(BlueprintCallable) bool AddTemporaryStatsForAction(TMap<FBaseStatsEnum, int32> TemporaryStats);  // parameters 0x51
    UFUNCTION(BlueprintCallable) bool CompleteCurrentAction(bool Succeeded);  // parameters 0x2
    UFUNCTION() void FreezeController();
    UFUNCTION(BlueprintCallable) UIcarusGOAPAIMemory* GetAIMemory();  // parameters 0x8
    UFUNCTION(BlueprintCallable) UIcarusGOAPAIState* GetAIState();  // parameters 0x8
    UFUNCTION(BlueprintCallable) TArray<UIcarusGOAPAction*> GetActions();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) float GetActorThreat(AActor* PerceivedActor, bool bIgnoreRelationships);  // parameters 0x10
    UFUNCTION(BlueprintCallable) TArray<FString> GetAvaliableActions();  // parameters 0x10
    UFUNCTION(BlueprintCallable) TArray<FString> GetAvaliableGoals();  // parameters 0x10
    UFUNCTION(BlueprintCallable) UIcarusGOAPAction* GetCurrentAction();  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) FString GetCurrentActionName();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) FString GetCurrentGoalDebug();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) FString GetCurrentPlanDebug();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetCurrentPropertyState(FGOAPPropertiesRowHandle Property) const;  // parameters 0x19
    UFUNCTION(BlueprintCallable) FGOAPState GetGOAPState();  // parameters 0x10
    UFUNCTION(BlueprintCallable) TArray<UIcarusGOAPGoal*> GetGoals();  // parameters 0x10
    UFUNCTION(BlueprintCallable) bool GetMotivationObject(FGOAPMotivationsRowHandle Motivation, UIcarusGOAPMotivation*& ObjectReference);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetMotivationValue(FGOAPMotivationsRowHandle Motivation) const;  // parameters 0x1C
    UFUNCTION(BlueprintCallable) TArray<UIcarusGOAPMotivation*> GetMotivations();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) AIcarusNPCGOAPCharacter* GetNPCCharacter();  // parameters 0x8
    UFUNCTION(BlueprintNativeEvent) bool MoveToAction(UIcarusGOAPAction* Action);  // parameters 0x9
    UFUNCTION(BlueprintNativeEvent) bool RecalculateGOAPState();  // parameters 0x1
    UFUNCTION(BlueprintCallable) bool RecalculateGoal(bool bForceNewGoal);  // parameters 0x2
    UFUNCTION(BlueprintCallable) void RecordAIMemory(EGOAPObjectType ObjectType, AActor* Object, FAIStimulus NewAIStimulus, EGOAPFactSource FactSource);  // parameters 0x4D
    UFUNCTION() void SeedRandomStream(int32 NewSeed);  // parameters 0x4
    UFUNCTION(BlueprintCallable) bool TryCompleteCurrentAction();  // parameters 0x1
    UFUNCTION() void UnfreezeController();
    UFUNCTION(BlueprintCallable) bool UpdateCurrentState(FGOAPPropertiesRowHandle Property, bool Value);  // parameters 0x1A
    UFUNCTION(BlueprintCallable, BlueprintPure) bool UpdateMotivationValue(FGOAPMotivationsRowHandle Motivation, int32 NewValue) const;  // parameters 0x1D

    // Virtual functions that start here:
    //   GetActorThreat_Implementation
};
