// /Game/BP/Objects/World/Items/Deployables/Extractors/BP_Exotic_Uranium_Collector.BP_Exotic_Uranium_Collector_C
// Derives from: ABP_Extractor_C > ABP_Drill_Base_C > ABP_Deployable_PowerToggleableBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0xA18, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Exotic_Uranium_Collector_C : public ABP_Extractor_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x09E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBPQC_WeightedAnimalSwarm_C* BPQC_WeightedAnimalSwarm;  // 0x09F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UDecalComponent* Decal;  // 0x09F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DEP_Uranium_Collection_Device_Liquid;  // 0x0A00, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInstanceDynamic* Mat_Liquid;  // 0x0A08, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) int32 CurrentSlotFilled;  // 0x0A10, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxPlayerActiveDistance;  // 0x0A14, size 0x4

    UFUNCTION(BlueprintCallable) void ActiveStateUpdated();
    UFUNCTION(BlueprintCallable) void CanStartDrill(bool& CanStart);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void DistanceCheck();
    UFUNCTION() void ExecuteUbergraph_BP_Exotic_Uranium_Collector(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable) void OnInventoryModified(UInventory* Inventory, int32 Location);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void OnRep_CurrentSlotFilled();
    UFUNCTION(BlueprintCallable, BlueprintPure) void PlayerDistanceCheck(bool& InRange);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void UpdateSpawning(bool Spawning);  // parameters 0x1
};
