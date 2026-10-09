// /Script/Icarus.ResourceNetworkComponent
// Derives from: UActorComponent > UObject
// size 0xE0, declared in Icarus/Source/Icarus/Traits/ResourceNetworkComponent.h

UCLASS(Config=Engine)
class UResourceNetworkComponent : public UActorComponent
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(BlueprintAssignable) FResourceNetworkUpdated OnResourceNetworkUpdated;  // 0x00B0, size 0x1
protected:
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadOnly) AResourceNetwork* Network;  // 0x00B8, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) AResourceSplineActorBase* Spline;  // 0x00C0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 LastNetworkFlowRate;  // 0x00C8, size 0x4
    bool bIsMigratingNetwork;  // 0x00CC, not reflected
    TWeakObjectPtr<UResourceComponent,FWeakObjectPtr> ResourceComponent;  // 0x00D0, not reflected
    int32 CurrentDesiredFlowRate;  // 0x00D8, not reflected
public:
    UFUNCTION(BlueprintCallable) bool AddSplineNetworkConnection(AResourceSplineActorBase* SplineActor, AResourceNetwork* NewNetwork);  // parameters 0x11
    UFUNCTION(BlueprintCallable) void CleanupSplineConnections();
    UFUNCTION(BlueprintCallable) void DisconnectFromNetwork(AResourceNetwork* OldNetwork);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) AResourceNetwork* GetConnectedNetwork() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetCurrentDesiredFlowRate() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetCurrentStorageAvailable() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetCurrentStorageFlowRate() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetCurrentStoredAmount() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetMaxProductionRate() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetMaxStorageFlowRate() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) UResourceComponent* GetResourceComponent() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) FIcarusResourcesEnum GetResourceComponentType() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) bool HasConnectedNetwork() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool HasConnectedNetworkSupply() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsConnectedAndReceivingFullFlow() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsPriorityConnection() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsResourceActive() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsStorage() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsStorageInFlowOnly() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) void MoveToNewSplineNetwork(AResourceNetwork* NewNetwork);  // parameters 0x8
    UFUNCTION() void OnRep_Network();
    UFUNCTION(BlueprintCallable) bool TryConnectToNetwork(AResourceNetwork* NewNetwork);  // parameters 0x9

    // Virtual functions that start here:
    //   GetResourceComponentType
};
