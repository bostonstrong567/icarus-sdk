// /Script/Icarus.PrebuiltStructure
// Derives from: AIcarusActor > AActor > UObject
// size 0x320, declared in Icarus/Source/Icarus/Prebuilt/PrebuiltStructure.h

UCLASS(Config=Engine)
class APrebuiltStructure : public AIcarusActor
{
public:
    UPROPERTY(BlueprintAssignable) FOnStructureBuildComplete OnStructureBuildComplete;  // 0x02C0, size 0x10
    UPROPERTY(Transient, BlueprintReadOnly) bool bIsBuildInProgress;  // 0x02D0, size 0x1
    UPROPERTY(Transient, BlueprintReadOnly) bool bBuildComplete;  // 0x02D1, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<AActor*> SpawnedActors;  // 0x02D8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<int32> SpawnedActorUIDs;  // 0x02E8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FPrebuiltStructuresRowHandle PrebuiltStructureRow;  // 0x02F8, size 0x18
    UPROPERTY(Transient) TArray<FOnPrebuiltStructureReady> PendingReadyCallbacks;  // 0x0310, size 0x10

    UFUNCTION(BlueprintNativeEvent) void BP_CleanupStructure(float Lifetime);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void BP_NotifyBuildComplete();
    UFUNCTION(BlueprintCallable) void BuildStructure(FPrebuiltStructuresRowHandle PrebuiltRowHandle);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void BuildStructureFromFileName(FString FileName);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void BuildStructureFromRawString(FString StructureString);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void CleanupActor(AActor* Actor, float Lifetime);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void CleanupStructure(float Lifetime, bool bBypassSettings);  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) ADeployable* FindDeployable(const FItemsStaticRowHandle& Row) const;  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) TArray<AActor*> GetAllActorsWithTag(const FGameplayTag& Tag) const;  // parameters 0x18
    UFUNCTION(BlueprintNativeEvent) bool LoadStructure(FSerializedStructure SerializedStructure);  // parameters 0x31
    UFUNCTION(BlueprintCallable) void NotifyBuildComplete();
    UFUNCTION(BlueprintCallable) void RegisterOnReadyCallback(FOnPrebuiltStructureReady OnReady);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void RegisterSpawnedActor(AActor* Actor);  // parameters 0x8
    UFUNCTION() void Reload(FPrebuiltStructuresRowHandle Structure, TArray<AActor*> Actors);  // parameters 0x28
    UFUNCTION(BlueprintCallable) void SetUnobtainableOnAllActors(bool bUnobtainable);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetUnobtainableOnAllDeployables(bool bUnobtainable);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetUnobtainableOnBuildingPieces(bool bUnobtainable);  // parameters 0x1

    // Virtual functions that start here:
    //   BP_CleanupStructure_Implementation
};
