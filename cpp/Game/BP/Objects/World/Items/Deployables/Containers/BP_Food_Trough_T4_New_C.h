// /Game/BP/Objects/World/Items/Deployables/Containers/BP_Food_Trough_T4_New.BP_Food_Trough_T4_New_C
// Derives from: ABP_ResourceNetworkProcessor_C > ABP_ProcessorBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x9E8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Food_Trough_T4_New_C : public ABP_ResourceNetworkProcessor_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x09A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_WindmillGrains;  // 0x09B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_WindmillGrains1;  // 0x09B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_ProxyMeshComponent_C* BP_ProxyMeshComponent;  // 0x09C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DEP_Trough_Powered_Feed;  // 0x09C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTameInteractableComponent* TameInteractable;  // 0x09D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* AudioFoodTroughActive;  // 0x09D8, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UInventoryComponent* InventoryComponent;  // 0x09E0, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Food_Trough_T4_New(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable) void OnProxyMeshVisibilityChanged(USceneComponent* Component, bool bIsNowVisible);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void ProcessorInventoryUpdated(UInventory* Inventory, int32 Location);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void UpdateEffects(bool EnergyFlowChanged, bool ProcessorActiveChanged);  // parameters 0x2
};
