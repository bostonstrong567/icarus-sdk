// /Game/BP/Objects/World/Items/Deployables/Missions/BP_Mission_Organic_Analyzer.BP_Mission_Organic_Analyzer_C
// Derives from: ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x78D, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Mission_Organic_Analyzer_C : public ABP_DeployableBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0728, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* FMODAudio_Analyzer;  // 0x0730, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCameraComponent* Camera;  // 0x0738, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_Sandworm_Egg;  // 0x0740, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPointLightComponent* PointLight;  // 0x0748, size 0x8
    UPROPERTY() float Timeline_0_Rotation_9ED8907F43197BBB79E1139199CDF619;  // 0x0750, size 0x4
    UPROPERTY() TEnumAsByte<ETimelineDirection> Timeline_0__Direction_9ED8907F43197BBB79E1139199CDF619;  // 0x0754, size 0x1
    UPROPERTY(Instanced, BlueprintReadWrite) UTimelineComponent* Timeline_0;  // 0x0758, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool AnalyzerActive;  // 0x0760, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusActor* Target;  // 0x0768, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool HasItem;  // 0x0770, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemsStaticRowHandle Required_Item;  // 0x0774, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HasPower;  // 0x078C, size 0x1

    UFUNCTION(BlueprintCallable) void CheckItem(FItemsStaticRowHandle& Item_Static_Data);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Deployable_Interact(AActor* Interactor);  // parameters 0x8
    UFUNCTION() void ExecuteUbergraph_BP_Mission_Organic_Analyzer(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable) void InventoryItemChanged(UInventory* Inventory, int32 Location);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void OnDeviceResourceChanged(FIcarusResourcesEnum ResourceType);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnRep_AnalyzerActive();
    UFUNCTION(BlueprintCallable) void OnRep_HasItem();
    UFUNCTION(BlueprintCallable) void SetItem(FItemsStaticRowHandle Required_Item);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void StartScanEffect();
    UFUNCTION(BlueprintCallable) void StopScanEffect();
    UFUNCTION() void Timeline_0__FinishedFunc();
    UFUNCTION() void Timeline_0__UpdateFunc();
    UFUNCTION(BlueprintCallable) void UpdateAnalyzerState();
};
