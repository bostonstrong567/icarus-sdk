// /Script/Icarus.FLODInfluenceComponent
// Derives from: UActorComponent > UObject
// size 0xC8, declared in Icarus/Source/Icarus/Systems/FLOD/FLODInfluenceComponent.h

UCLASS(Config=Engine)
class UFLODInfluenceComponent : public UActorComponent
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bTryRegisterSelf;  // 0x00B0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bHasRegisteredAsInfluence;  // 0x00B1, size 0x1
    UPROPERTY(EditAnywhere) TArray<FFLODInstanceInfluence> ActiveInstanceInfluences;  // 0x00B8, size 0x10

    UFUNCTION(BlueprintCallable, BlueprintPure) TArray<FFLODInstanceInfluence> GetActiveInstanceInfluences() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) bool HasRegisteredToFLOD() const;  // parameters 0x1
    UFUNCTION(BlueprintNativeEvent) void OnActiveInfluencedInstanceAdded(const FFLODInstanceInfluence& InstanceInfluence);  // parameters 0x20
    UFUNCTION(BlueprintNativeEvent) void OnActiveInfluencedInstanceRemoved(const FFLODInstanceInfluence& InstanceInfluence);  // parameters 0x20
    UFUNCTION(BlueprintNativeEvent) void OnActiveInfluencedInstanceTimeout(const FFLODInstanceInfluence& InstanceInfluence);  // parameters 0x20
    UFUNCTION(BlueprintNativeEvent) void OnActiveInfluencedInstanceUpdated(const FFLODInstanceInfluence& InstanceInfluence);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) bool RegisterInfluence();  // parameters 0x1
    UFUNCTION(BlueprintCallable) bool RemoveActiveInstanceInfluence(const FFLODInstanceInfluence& InstanceInfluence);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) void UnregisterInfluence();
    UFUNCTION(BlueprintCallable) void UpdateActiveInfluencedInstance(const FFLODInstanceID& InstanceID, int32 InfluenceLevelIndex, float TimeoutDuration);  // parameters 0x18
    UFUNCTION(BlueprintNativeEvent) void UpdateActiveInfluences();

    // Virtual functions that start here:
    //   OnActiveInfluencedInstanceAdded_Implementation, OnActiveInfluencedInstanceRemoved_Implementation
    //   OnActiveInfluencedInstanceTimeout_Implementation, OnActiveInfluencedInstanceUpdated_Implementation
    //   RegisterInfluence_Implementation, UnregisterInfluence_Implementation
    //   UpdateActiveInfluences_Implementation
};
