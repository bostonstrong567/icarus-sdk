// /Game/BP/Objects/World/Items/Deployables/CraftingBenches/BP_Repair_Bench.BP_Repair_Bench_C
// Derives from: ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x7B0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Repair_Bench_C : public ABP_DeployableBase_C, public IIcarusDeployableRepairInterface
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0728, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Scene_Lights;  // 0x0730, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionLocation_C* BP_UIProjectionLocation;  // 0x0738, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ORB_LightBulb;  // 0x0740, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ORB_STN_Light_02;  // 0x0748, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight;  // 0x0750, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Cube3;  // 0x0758, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Cube2;  // 0x0760, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Cube1;  // 0x0768, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Cube;  // 0x0770, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* ProxyMeshesCrafting;  // 0x0778, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCameraComponent* Camera;  // 0x0780, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSubclassOf<UUMG_IcarusLinkedActorPanel_C> WidgetClassToOpen;  // 0x0788, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UResourceNetworkComponent* EnergyComponent;  // 0x0790, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool HasPower;  // 0x0798, size 0x1
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, SaveGame, BlueprintReadWrite) float RepairThreshold;  // 0x079C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FRepairThresholdUpdated RepairThresholdUpdated;  // 0x07A0, size 0x10

    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool CanRepairItem(const FItemData& Item) const;  // parameters 0x1F1
    UFUNCTION(BlueprintCallable) void CheckPowerAndUpdate();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Deployable_Interact(AActor* Interactor);  // parameters 0x8
    UFUNCTION() void ExecuteUbergraph_BP_Repair_Bench(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable) void OnRep_HasPower();
    UFUNCTION(BlueprintCallable) void OnRep_RepairThreshold();
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool RepairHasShelter(AIcarusPlayerCharacter* CraftingPlayer) const;  // parameters 0x9
    UFUNCTION(BlueprintCallable) void RepairThresholdUpdated__DelegateSignature(float NewThreshold);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetThreshold(float RepairThreshold);  // parameters 0x4
};
