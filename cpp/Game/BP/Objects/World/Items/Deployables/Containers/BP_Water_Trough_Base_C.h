// /Game/BP/Objects/World/Items/Deployables/Containers/BP_Water_Trough_Base.BP_Water_Trough_Base_C
// Derives from: ABP_DeployableContainerBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x78C, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Water_Trough_Base_C : public ABP_DeployableContainerBase_C, public IBP_WeatherInteractable_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0750, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTameInteractableComponent* TameInteractable;  // 0x0758, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* WaterProxyPlane;  // 0x0760, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UInventoryComponent* InventoryComponent;  // 0x0768, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool TroughContainsWater;  // 0x0770, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UStaticMesh* Empty_Mesh;  // 0x0778, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UStaticMesh* Filled_Mesh;  // 0x0780, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) float Fill_;  // 0x0788, size 0x4, named "Fill%"

    UFUNCTION(BlueprintCallable) void Ash(float Intensity);  // parameters 0x4
    UFUNCTION() void ExecuteUbergraph_BP_Water_Trough_Base(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable) void OnDynamicDataUpdate();
    UFUNCTION(BlueprintCallable) void OnRep_TroughContainsWater();
    UFUNCTION(BlueprintCallable) void Rain(int32 Millilitres);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Sand(float Intensity);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Snow(float Intensity);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void UpdateProxyMeshVisibility();
    UFUNCTION(BlueprintCallable) void UpdateWaterVisibility(bool Visible);  // parameters 0x1
};
