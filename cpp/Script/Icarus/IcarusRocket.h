// /Script/Icarus.IcarusRocket
// Derives from: AIcarusActor > AActor > UObject
// size 0x318, declared in Icarus/Source/Icarus/ShipEditor/IcarusRocket.h

UCLASS(Config=Engine)
class AIcarusRocket : public AIcarusActor
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(BlueprintAssignable) FRocketAssembled RocketAssembled;  // 0x02C0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector SpawnLocation;  // 0x02C4, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector DescentOrigin;  // 0x02D0, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float InitialPositionOffset;  // 0x02DC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool DropshipPositionsSet;  // 0x02E0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool PlayerHasLeft;  // 0x02E1, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bStoredLoadout;  // 0x02E2, size 0x1
protected:
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadOnly) FPlayerCharacterID AssignedPlayerCharacterID;  // 0x02E8, size 0x18
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadOnly) ERocketState RocketState;  // 0x0300, size 0x1
private:
    int32 PartUIDCount;  // 0x0304, not reflected
    UPROPERTY(Replicated) TArray<AIcarusRocketPart*> RocketParts;  // 0x0308, size 0x10
public:
    UFUNCTION(BlueprintCallable) void AssignPlayer(const FPlayerCharacterID& PlayerCharacterID);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void DebugLogRocket(FString Message);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void DefaultInstallPart(AIcarusItem* NewPart);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) AIcarusPlayerControllerSurvival* GetAssignedPlayer() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) FPlayerCharacterID GetAssignedPlayerCharacterID() const;  // parameters 0x18
    UFUNCTION(BlueprintCallable) TArray<AIcarusRocketPart*> GetParts();  // parameters 0x10
    UFUNCTION(BlueprintCallable) bool GrantLoadoutToInventory(UInventory* DestinationInventory);  // parameters 0x9
    UFUNCTION(BlueprintCallable) bool InstallPart(AIcarusRocketPart* NewPart);  // parameters 0x9
    UFUNCTION(BlueprintNativeEvent) void OnDatabaseReload();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) void OnDropshipSpawnPlayerInit();
    UFUNCTION(BlueprintNativeEvent) void OnRep_AssignedPlayerCharacterID();
    UFUNCTION(BlueprintNativeEvent) void OnRep_RocketState();
    UFUNCTION(BlueprintCallable) bool RemovePart(AIcarusRocketPart* PartToRemove);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void SetRocketState(ERocketState InRocketState);  // parameters 0x1
    UFUNCTION(BlueprintNativeEvent) void TriggerLeaveProspectLaunch();

    // Virtual functions that start here:
    //   OnDatabaseReload_Implementation, OnDropshipSpawnPlayerInit_Implementation
    //   OnRep_AssignedPlayerCharacterID_Implementation, OnRep_RocketState_Implementation
    //   TriggerLeaveProspectLaunch_Implementation
};
