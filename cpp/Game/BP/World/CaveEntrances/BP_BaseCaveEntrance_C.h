// /Game/BP/World/CaveEntrances/BP_BaseCaveEntrance.BP_BaseCaveEntrance_C
// Derives from: ACaveEntranceBase > AIcarusActor > AActor > UObject
// size 0x322, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_BaseCaveEntrance_C : public ACaveEntranceBase, public ICaveEntranceRecorderInterface
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* VoxelBlockerMarker;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* BlockerMeshes;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Mesh;  // 0x02D8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UStaticMesh* EntranceMesh;  // 0x02E0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AVoxelResource* VoxelRef;  // 0x02E8, size 0x8
    UPROPERTY(EditAnywhere, Transient, BlueprintReadWrite) bool VisuliseMeshBlocker;  // 0x02F0, size 0x1
    UPROPERTY(EditAnywhere, Transient, BlueprintReadWrite) bool VisuliseVoxelBlocker;  // 0x02F1, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSubclassOf<AVoxelResource> VoxelBlocker;  // 0x02F8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRandomStream Stream;  // 0x0300, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 UniqueEntranceID;  // 0x0308, size 0x4
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) TEnumAsByte<ECaveBlockerState> BlockerState;  // 0x030C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FVoxelMinedSphere> VoxelSaveData;  // 0x0310, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool OverrideBlockerState;  // 0x0320, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TEnumAsByte<ECaveBlockerState> OverrideInitialState;  // 0x0321, size 0x1

    UFUNCTION() void ExecuteUbergraph_BP_BaseCaveEntrance(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) AVoxelResource* GetVoxelActor() const;  // parameters 0x8
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable) void InitBlockedState();
    UFUNCTION(BlueprintCallable) void OnRep_BlockerState();
    UFUNCTION(BlueprintCallable) void OnSeedInitialised(int32 Seed);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x1
    UFUNCTION() void SetVoxelBlocker(AVoxelResource* VoxelBlocker);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void SetVoxelBlockerSaveData(const TArray<FVoxelMinedSphere>& VoxelBlockerSaveData);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void UpdateDebug();
    UFUNCTION(BlueprintCallable) void UpdateMeshBlocker(bool Block);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void UpdateVoxelBlocker(bool Blocked, bool ForceNewVoxel);  // parameters 0x2
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UserConstructionScript();
};
