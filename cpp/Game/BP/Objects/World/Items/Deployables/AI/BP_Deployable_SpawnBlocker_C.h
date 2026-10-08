// /Game/BP/Objects/World/Items/Deployables/AI/BP_Deployable_SpawnBlocker.BP_Deployable_SpawnBlocker_C
// Derives from: ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x744, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Deployable_SpawnBlocker_C : public ABP_DeployableBase_C, public ISpawnBlockerInterface
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0728, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBPQC_SearchArea_C* BPQC_SearchArea;  // 0x0730, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, SaveGame, BlueprintReadWrite) int32 SpawnBlockerRadius;  // 0x0738, size 0x4
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool SpawnBlockerActive;  // 0x073C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 DefaultRadiusOverride;  // 0x0740, size 0x4

    UFUNCTION(BlueprintImplementableEvent) void DeployableTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION() void ExecuteUbergraph_BP_Deployable_SpawnBlocker(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) int32 GetSpawnAttractorEffectiveRadius() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) int32 GetSpawnBlockerEffectiveRadius() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetWidgetClass(TSubclassOf<UUserWidget>& Widget);  // parameters 0x8
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable) void OnRep_SpawnBlockerActive();
    UFUNCTION(BlueprintCallable) void OnRep_SpawnBlockerRadius();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void UpdateRadius(int32 SpawnRadius);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void UpdateSpawnBlockerEffects();
};
