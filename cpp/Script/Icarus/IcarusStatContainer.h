// /Script/Icarus.IcarusStatContainer
// Derives from: UActorComponent > UObject
// size 0x2D8, declared in Icarus/Source/Icarus/Stats/IcarusStatContainer.h

UCLASS(Config=Engine)
class UIcarusStatContainer : public UActorComponent
{
public:
    UPROPERTY(BlueprintAssignable) FOnStatContainerUpdatedSignature OnStatContainerUpdated;  // 0x00B1, size 0x1
    UPROPERTY(BlueprintAssignable) FOnStatContainerUpdateCompleteSignature OnStatContainerUpdateComplete;  // 0x00B2, size 0x1
    UPROPERTY(BlueprintAssignable) FOnPreStatContainerUpdateCompleteSignature OnPreStatContainerUpdateComplete;  // 0x00B3, size 0x1
    UPROPERTY(BlueprintAssignable) FOnStatContainerCategoryUpdatedSignature OnStatContainerCategoryUpdated;  // 0x00B4, size 0x1
    UPROPERTY(Replicated, ReplicatedUsing) FStatsRepArray ReplicatedStatArray;  // 0x00B8, size 0x118

    // Not reflected: the engine's scripting cannot see these.
    bool bReplicateStatArray;  // 0x00B0
    FStatContainer InternalStatContainer;  // 0x01D0, private

    UFUNCTION(BlueprintCallable) void AddBackingStatContainer(UIcarusStatContainer* BackingContainer, FString Context);  // parameters 0x18
    UFUNCTION(BlueprintCallable) bool AddStats_BP(EStatSources Source, int32 UID, const TMap<FStatsEnum, int32>& InStats);  // parameters 0x59
    UFUNCTION() FStatContainer GetInternalContainer();  // parameters 0x108
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetStat(FStatsEnum Stat) const;  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetStatByRowHandle(FStatsRowHandle StatRowHandle) const;  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) TMap<FStatsEnum, int32> GetStatsSlowBP(bool bIncludeVirtual) const;  // parameters 0x58
    UFUNCTION() void OnRep_StatChanges();
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void OnServer_SerialiseStats();
    UFUNCTION(BlueprintCallable) void RemoveBackingStatContainer(UIcarusStatContainer* BackingContainer, FString Context);  // parameters 0x18
    UFUNCTION(BlueprintCallable) bool RemoveStats_BP(EStatSources Source, int32 UID);  // parameters 0x9
};
