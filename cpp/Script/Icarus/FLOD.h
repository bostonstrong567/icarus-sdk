// /Script/Icarus.FLOD
// Derives from: AInfo > AActor > UObject
// size 0x2F0, declared in Icarus/Source/Icarus/Systems/FLOD/FLOD.h

UCLASS(Config=Engine)
class AFLOD : public AInfo
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FFLODDescription> Descriptions;  // 0x0220, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bDebugStats;  // 0x0230, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName DebugTileName;  // 0x0234, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bDisabled;  // 0x023C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSubclassOf<AFLODTile> TileClass;  // 0x0240, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadOnly) TArray<AFLODTile*> Tiles;  // 0x0248, size 0x10
    UPROPERTY(EditAnywhere) TArray<UFLODActorPool*> ActorPools;  // 0x0258, size 0x10
    UPROPERTY(BlueprintReadOnly) TArray<UFLODInfluenceComponent*> RegisteredInfluences;  // 0x0268, size 0x10
    UPROPERTY() TSet<FFLODInstanceInfluence> PreviousActiveInfluencedInstances;  // 0x0278, size 0x50
    UPROPERTY() bool bHasInitialisedDescriptions;  // 0x02C8, size 0x1
    UPROPERTY(Instanced) UFLODRecorderComponent* Recorder;  // 0x02E8, size 0x8
protected:
    UPROPERTY() TArray<FPendingRegisterFISM> PendingRegisterFISMs;  // 0x02D0, size 0x10
    UPROPERTY() FTimerHandle ResolvePendingRegisterFISMsCallTimer;  // 0x02E0, size 0x8
public:
    UFUNCTION(BlueprintCallable, BlueprintPure) FFLODDescription FindFLODDescriptionForFISM(UFLODFISMComponent* FISM) const;  // parameters 0x140
    UFUNCTION(BlueprintCallable) static FFLODDescriptionDVInfo GetDescriptionDataValidation(const FFLODDescription& Description);  // parameters 0x148
    UFUNCTION(BlueprintCallable, BlueprintPure) TArray<AFLODTile*> GetWithinBoundsFLODTiles(const FVector& Location) const;  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsReady() const;  // parameters 0x1
    UFUNCTION() void OnPooledActorSpawned(UFLODActorPool* ActorPool, const FFLODLevelDescription& LevelDesc, AActor* SpawnedPooledActor);  // parameters 0x60
    UFUNCTION() void OnRep_FLODTileActors();
};
