// /Game/BP/Objects/World/Items/Deployables/Containers/BP_Water_Trough_T4.BP_Water_Trough_T4_C
// Derives from: ABP_Deployable_PowerToggleableBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x769, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Water_Trough_T4_C : public ABP_Deployable_PowerToggleableBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0738, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTameInteractableComponent* TameInteractable;  // 0x0740, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* Audio_Trough_On_Off;  // 0x0748, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool TroughContainsWater;  // 0x0750, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UStaticMesh* Empty_Mesh;  // 0x0758, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UStaticMesh* Filled_Mesh;  // 0x0760, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool Filling;  // 0x0768, size 0x1

    UFUNCTION(BlueprintCallable) void AddWater();
    UFUNCTION() void ExecuteUbergraph_BP_Water_Trough_T4(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable) void OnDynamicDataUpdate();
    UFUNCTION(BlueprintCallable) void OnRep_Filling();
    UFUNCTION(BlueprintCallable) void OnRep_TroughContainsWater();
    UFUNCTION(BlueprintCallable, BlueprintPure) bool RequiresFilling();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void UpdateMeshVisibility(bool Index);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void UpdateProxyMeshVisibility();
};
