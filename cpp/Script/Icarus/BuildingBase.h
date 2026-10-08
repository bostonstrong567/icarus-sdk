// /Script/Icarus.BuildingBase
// Derives from: AIcarusItem > AIcarusActor > AActor > UObject
// size 0x6E0, declared in Icarus/Source/Icarus/Objects/BuildingBase.h

UCLASS(MinimalAPI, Config=Engine)
class ABuildingBase : public AIcarusItem
{
public:
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) UIcarusNavigationDirtier* NavigationDirtier;  // 0x0570, size 0x8
    UPROPERTY(BlueprintAssignable) FOnBuildingDestroyed OnBuildingDestroyed;  // 0x0578, size 0x10
    UPROPERTY(BlueprintAssignable) FOnBuildingReplaced OnBuildingReplaced;  // 0x0588, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector GridSpaceCenterLocation;  // 0x0598, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector GridLocation;  // 0x05A4, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FVectorPair> BlockingLines;  // 0x05B0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bStartsDormant;  // 0x05C0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UMaterialInterface*> DefaultMainMeshMaterials;  // 0x05C8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bUseDestructibleMaterialMap;  // 0x05D8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<int32> DestructibleMaterialSlotsToMainMesh;  // 0x05E0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TArray<FWeightTransferRelationship> DirectWeightRelationships;  // 0x05F0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FWeightTransferRelationship> IndirectWeightDistributed;  // 0x0600, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TArray<FWeightTransferRelationship> IndirectWeightReceived;  // 0x0610, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bHasSnow;  // 0x0620, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float NoNavigationDamageThreshold;  // 0x062C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TMap<ABuildingBase*, float> HardStabilityMap;  // 0x0630, size 0x50
    UPROPERTY() UBuildingGridManagerSubsystem* BuildingGridManager;  // 0x0680, size 0x8
    UPROPERTY() FBuildingStability CachedStabilityData;  // 0x0698, size 0x40

    // Not reflected: the engine's scripting cannot see these.
    FOctreeElementId2 OctreeElementId;  // 0x0624
    bool bIsDirty;  // 0x0688, private
    bool bHasCachedData;  // 0x0689, private
    EBuildingPieceType CachedPieceType;  // 0x068A, private
    EBuildingTypes CachedBuildingType;  // 0x068C, private
    float CachedBuildingTier;  // 0x0690, private
    EHasCustomNavigableGeometry::Type OriginalNavigableGeometry;  // 0x06D8, private

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void AddWeightComponentInfluence(UShapeComponent* Shape, UWeightComponent* Weight, bool bSpreadToNeighbours);  // parameters 0x11
    UFUNCTION(BlueprintCallable) void ApplyBuildingSkinMaterialOverrides();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) void CalculateStabilityState();
    UFUNCTION(BlueprintCallable) UDestructibleComponent* CreateDestructibleMeshComponent();  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetBuildingTier() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) USceneComponent* GetCenterComponent() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) UDestructibleComponent* GetDestructibleBuildingMesh() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable) void GetHardStability(float& HardStability, float& HardStabilityBeforeWeight);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) UStaticMeshComponent* GetMainBuildingMesh() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) UStaticMesh* GetMainBuildingStaticMeshAsset() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) ABuildingGridBase* GetParentGrid() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) EBuildingPieceType GetPieceType() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) float GetSnowAmount() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetStabilityData(FBuildingStability& BuildingStability) const;  // parameters 0x40
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) UStaticMeshComponent* GetStrippedBuildingMesh() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) UStaticMesh* GetStrippedBuildingStaticMeshAsset() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) UDestructibleComponent* GetStrippedDestructibleMesh() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) bool HasCachedData() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool IsBuildingDestroyed() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool IsBuildingOutside();  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool IsReceivingWindDamage() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) int32 ManhattanDistanceToBuilding(ABuildingBase* OtherBuilding);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void MarkDirty();
    UFUNCTION(BlueprintCallable) void NotifyBuildingDestroyed(EBuildingDestroyReason Reason);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void NotifyBuildingReplaced(ABuildingBase* NewBuilding);  // parameters 0x8
    UFUNCTION(BlueprintNativeEvent) void OnBuildingHealthUpdated(UActorState* InActorState, float NewHealth);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void RemoveWeightComponentInfluence(UShapeComponent* Shape, UWeightComponent* Weight);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void StartDestruction(AIcarusPlayerController* TriggeringPlayer, EBuildingDestroyReason DestroyReason);  // parameters 0x9

    // Virtual functions that start here:
    //   OnBuildingHealthUpdated_Implementation
};
