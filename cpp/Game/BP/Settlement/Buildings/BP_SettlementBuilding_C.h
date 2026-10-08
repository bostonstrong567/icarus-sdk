// /Game/BP/Settlement/Buildings/BP_SettlementBuilding.BP_SettlementBuilding_C
// Derives from: ASettlementBuilding > AIcarusActor > AActor > UObject
// size 0x4B0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_SettlementBuilding_C : public ASettlementBuilding, public IHighlightableCustomiserInterface_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x03F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* ProxyMeshes;  // 0x0400, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionLocation_C* BP_UIProjectionLocation;  // 0x0408, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UInteractableComponent* Interactable;  // 0x0410, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHighlightableComponent* Highlightable;  // 0x0418, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBoxComponent* BuildBlocker;  // 0x0420, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UIcarusNavigationDirtier* IcarusNavigationDirtier;  // 0x0428, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* ConstructionMarker_04;  // 0x0430, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* ConstructionMarker_03;  // 0x0438, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* ConstructionMarker_02;  // 0x0440, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* ConstructionMarker_01;  // 0x0448, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Visualisers;  // 0x0450, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* StaticMesh3;  // 0x0458, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* StaticMesh2;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* StaticMesh1;  // 0x0468, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* StaticMesh;  // 0x0470, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FSettlementNPCTask> ActiveDefaultTasks;  // 0x0478, size 0x10
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UStaticMeshComponent* FoliageBlockingCube;  // 0x0488, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) TArray<int32> VisibleProxyMeshes;  // 0x0490, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<SettlementProxyMeshConfig> ProxyMeshConfig;  // 0x04A0, size 0x10

    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool CanConstructBuildingAtLocation(UObject* WorldContextObject, const FVector& Location, const FRotator& Rotation, FText& FailureReason) const;  // parameters 0x39
    UFUNCTION(BlueprintCallable) void ClearGrass();
    UFUNCTION() void ExecuteUbergraph_BP_SettlementBuilding(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetDescription(FText& Description);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void GetDisplayName(FText& Name);  // parameters 0x18
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void OnBuildStateUpdated();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void OnBuildingActiveStateUpdated();
    UFUNCTION(BlueprintCallable) void OnRep_VisibleProxyMeshes();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void SetProxyMeshVisiblity(int32 ProxyMeshIndex, bool IsVisible);  // parameters 0x5
    UFUNCTION(BlueprintCallable) void TemporarilyGhostSettlers();
    UFUNCTION(BlueprintCallable) void UpdateAutomaticItemProxyMeshes(UInventory* Inventory, int32 Location);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void UpdateConstructionVisualisers(bool Show);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void UpdateVisibleProxyMeshes();
};
