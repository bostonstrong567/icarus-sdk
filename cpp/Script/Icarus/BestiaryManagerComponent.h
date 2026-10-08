// /Script/Icarus.BestiaryManagerComponent
// Derives from: UActorComponent > UObject
// size 0x430, declared in Icarus/Source/Icarus/Systems/Bestiary/BestiaryManagerComponent.h

UCLASS(Config=Engine)
class UBestiaryManagerComponent : public UActorComponent
{
public:
    UPROPERTY(BlueprintAssignable) FOnReceivedPlayerBestiary OnReceivedPlayerBestiary;  // 0x00B0, size 0x10
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) FBestiaryFastArray BeastEntries;  // 0x00C0, size 0x158
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) FFishDataFastArray FishEntries;  // 0x0218, size 0x158
    UPROPERTY(EditAnywhere) float AutoSaveRate;  // 0x0418, size 0x4

    // Not reflected: the engine's scripting cannot see these.
    bool bServerHasLoadedData;  // 0x0370, protected
    TMap<FBestiaryDataRowHandle,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FBestiaryDataRowHandle,int,0> > LastPointValues;  // 0x0378, protected
    TMap<FFishDataRowHandle,FFishTypeTracking,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FFishDataRowHandle,FFishTypeTracking,0> > LastFishValues;  // 0x03C8, protected
    FTimerHandle BestiaryDataAutoSaveTimer;  // 0x0420, protected
    bool bIsSaveDirty;  // 0x0428, protected

    UFUNCTION(BlueprintCallable) void AddFishDetails(const FFishTypeTracking& Fish);  // parameters 0x28
    UFUNCTION(BlueprintCallable) void Cheat_IncrementBeastPoints(const FBestiaryDataRowHandle& Entry, int32 AddPoints);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) void Cheat_IncrementFishCaught(const FFishDataRowHandle& FishRow, int32 AddNumCaught);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) void Cheat_SetBeastPoints(const FBestiaryDataRowHandle& Entry, int32 TotalPoints);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) void Cheat_SetFishCaught(const FFishDataRowHandle& FishRow, int32 NumCaught);  // parameters 0x1C
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void Client_RequestBestiaryData();
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void ForceSave();
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetBeastUnlockPercent(const FBestiaryDataRowHandle& Entry) const;  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) FFishTypeTracking GetFishDetails(const FFishDataRowHandle& Fish) const;  // parameters 0x40
    UFUNCTION(BlueprintCallable, BlueprintPure) bool HasLoadedData() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) void IncrementBeastProgress(const FBestiaryDataRowHandle& Entry, const FBestiaryPointsRowHandle& Points);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsBeastEntryUnlocked(const FBestiaryDataRowHandle& Entry) const;  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsFishEntryUnlocked(const FFishDataRowHandle& Fish) const;  // parameters 0x19
    UFUNCTION() void OnAllBeastEntriesChanged();
    UFUNCTION() void OnAllFishEntriesChanged();
    UFUNCTION() void OnBeastEntryAdded(const FBestiaryFastArrayItem& Entry);  // parameters 0x28
    UFUNCTION() void OnBeastEntryChanged(const FBestiaryFastArrayItem& Entry);  // parameters 0x28
    UFUNCTION() void OnBeastEntryRemoved(const FBestiaryFastArrayItem& Entry);  // parameters 0x28
    UFUNCTION() void OnFishEntryAdded(const FFishDataFastArrayItem& Entry);  // parameters 0x34
    UFUNCTION() void OnFishEntryChanged(const FFishDataFastArrayItem& Entry);  // parameters 0x34
    UFUNCTION() void OnFishEntryRemoved(const FFishDataFastArrayItem& Entry);  // parameters 0x34
    UFUNCTION() void PerformAutoSave();
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void Server_ReceiveBestiaryData(TArray<FBestiaryFastArrayItem> ClientBestiaryData, TArray<FFishDataFastArrayItem> ClientFishData);  // parameters 0x20
};
