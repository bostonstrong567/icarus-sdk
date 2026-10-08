// /Script/Icarus.FLODTile
// Derives from: AInfo > AActor > UObject
// size 0x2E0, declared in Icarus/Source/Icarus/Systems/FLOD/FLODTile.h

UCLASS(Config=Engine)
class AFLODTile : public AInfo
{
public:
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadOnly) FName TileName;  // 0x0220, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadOnly) float RelevanceRadius;  // 0x0228, size 0x4
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadOnly) AFLODTileBehaviourHarness* BehaviourHarness;  // 0x0230, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TMap<int32, UFLODRecord*> Records;  // 0x0238, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bDebugInstancesCurrent;  // 0x0288, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bDebugInstancesCurrentAdv;  // 0x0289, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bDebugPhysicsInstancesCurrent;  // 0x028A, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bDebugStats;  // 0x028B, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 DebugRecordIndex;  // 0x028C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TArray<UMaterialInterface*> DebugInstanceCurrentMaterials;  // 0x0290, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UMaterialInterface* DebugPhysicsInstancesMaterial;  // 0x02A0, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing) TArray<UFLODRecord*> ReplicatedRecords;  // 0x02C0, size 0x10
    UPROPERTY(Replicated) bool bReadingGameStateFromDatabase;  // 0x02D0, size 0x1
    UPROPERTY(Instanced) UFLODTileRecorderComponent* Recorder;  // 0x02D8, size 0x8

    // Not reflected: the engine's scripting cannot see these.
    TMulticastDelegate<void __cdecl(bool),FDefaultDelegateUserPolicy> OnDebugInstancesCurrentChanged;  // 0x02A8

    UFUNCTION(BlueprintCallable) void DebugDestroyAllInstances(int32 RecordIndex, bool bRestore);  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) UFLODFISMComponent* FindFISMFromRecordIndex(int32 RecordIndex) const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) UFLODRecord* FindRecordByRecordIndex(int32 RecordIndex) const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) AFLOD* GetOwnerFLOD() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsBasedOnLandscapeProxy(ALandscapeProxy* LandscapeProxy) const;  // parameters 0x9
    UFUNCTION() void OnRep_ReplicatedRecords();
    UFUNCTION(BlueprintCallable) void SetDebugInstancesCurrent(bool bState);  // parameters 0x1
    UFUNCTION(BlueprintCallable) int32 SwapRecordInstance(UFlammableInstanceFLOD* Flammable, UFLODRecord* SourceRecord, UFLODRecord* TargetRecord, int32 InstanceIndex);  // parameters 0x20
};
