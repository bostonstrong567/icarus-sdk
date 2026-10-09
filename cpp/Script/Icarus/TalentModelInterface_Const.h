// /Script/Icarus.TalentModelInterface_Const
// Derives from: UObject
// size 0xE8, declared in Icarus/Source/Icarus/Talents/Model/TalentModelInterface.h

UCLASS(Abstract)
class UTalentModelInterface_Const : public UObject
{
public:
    UPROPERTY(BlueprintAssignable) FOnModelStateChanged OnModelStateChanged;  // 0x0028, size 0x10
    UPROPERTY(BlueprintAssignable) FOnModelTalentStateChanged OnModelTalentStateChanged;  // 0x0038, size 0x10
protected:
    TScriptInterface<ITalentControllerInterface> Controller;  // 0x0048, not reflected
    TArray<FTalentArchetypesRowHandle,TSizedDefaultAllocator<32> > Archetypes;  // 0x0058, not reflected
    TArray<FTalentTreesRowHandle,TSizedDefaultAllocator<32> > TalentTrees;  // 0x0068, not reflected
    TArray<FTalentsRowHandle,TSizedDefaultAllocator<32> > Talents;  // 0x0078, not reflected
    TMap<FTalentsRowHandle,FTalentModelData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTalentsRowHandle,FTalentModelData,0> > TalentDataMap;  // 0x0088, not reflected
    int32 AvailablePoints;  // 0x00D8, not reflected
    int32 ForcedPoints;  // 0x00DC, not reflected
    int32 Level;  // 0x00E0, not reflected
    bool bRefreshLock;  // 0x00E4, not reflected
    bool bBroadcastLock;  // 0x00E5, not reflected
    bool bQueuedBroadcast;  // 0x00E6, not reflected
public:
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CanUnlockTalent(const FTalentsRowHandle& Talent, int32 Rank, bool bIgnoreLockedState) const;  // parameters 0x1E
    UFUNCTION(BlueprintCallable, BlueprintPure) bool DoesModelContainTalent(const FTalentsRowHandle& Talent) const;  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) TArray<FTalentArchetypesRowHandle> GetArchetypes() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetAvailablePoints() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) TScriptInterface<ITalentControllerInterface> GetController() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetLevel() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) FTalentModelsRowHandle GetModelData() const;  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) FTalentModelsRowHandle GetModelRowHandle() const;  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetNonRestrictedSpentPointsForTree(const FTalentTreesRowHandle& TalentTree) const;  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetPointsForLevel(int32 InLevel) const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetSpentPoints() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetSpentPointsForTree(const FTalentTreesRowHandle& TalentTree) const;  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetTalentRank(const FTalentsRowHandle& Talent) const;  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetTalentState(const FTalentsRowHandle& Talent, FTalentModelData& OutData) const;  // parameters 0x29
    UFUNCTION(BlueprintCallable, BlueprintPure) TArray<FTalentTreesRowHandle> GetTalentTrees() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) TArray<FTalentTreesRowHandle> GetTalentTreesForArchetype(FTalentArchetypesRowHandle Archetype) const;  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) TArray<FTalentsRowHandle> GetTalents() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetTotalNonRestrictedTalentsForTree(const FTalentTreesRowHandle& TalentTree) const;  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetTotalPoints() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetTotalTalentsForTree(const FTalentTreesRowHandle& TalentTree) const;  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsTalentUnlocked(const FTalentsRowHandle& Talent) const;  // parameters 0x19
    UFUNCTION(BlueprintImplementableEvent) void OnModelViewChanged(UTalentModelInterface* InModel, UTalentViewInterface* InView);  // parameters 0x10

    // Virtual functions that start here:
    //   CanUnlockTalent, GetModelData, GetModelType, GetPointsForLevel, NativeModelViewChanged
};
