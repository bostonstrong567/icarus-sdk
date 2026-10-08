// /Game/BP/Objects/World/Items/Deployables/OxiteDissolver/BP_Electric_Oxite_Dissolver.BP_Electric_Oxite_Dissolver_C
// Derives from: ABP_Deployable_PowerToggleableBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x7B4, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Electric_Oxite_Dissolver_C : public ABP_Deployable_PowerToggleableBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0738, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCameraComponent* Camera;  // 0x0740, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Needle_Slot9;  // 0x0748, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Needle_Slot8;  // 0x0750, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Needle_Slot7;  // 0x0758, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Needle_Slot6;  // 0x0760, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Needle_Slot5;  // 0x0768, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Needle_Slot4;  // 0x0770, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Needle_Slot3;  // 0x0778, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Needle_Slot2;  // 0x0780, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Needle_Slot1;  // 0x0788, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Needle_Slot0;  // 0x0790, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Needle_Large;  // 0x0798, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* FMOD_Active;  // 0x07A0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float OxygenPerSecond;  // 0x07A8, size 0x4
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool FillingTanks;  // 0x07AC, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DividedFlowRate;  // 0x07B0, size 0x4

    UFUNCTION(BlueprintCallable) void ActorsRequiringOxygen(int32& NumActors);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Deployable_Interact(AActor* Interactor);  // parameters 0x8
    UFUNCTION() void ExecuteUbergraph_BP_Electric_Oxite_Dissolver(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FillTanks();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable) void OnRep_FillingTanks();
    UFUNCTION(BlueprintCallable) void Set_Filling_Effects(bool bIsFillingTanks);  // parameters 0x1, named "Set Filling Effects"
    UFUNCTION(BlueprintCallable) void ShouldOxygenFlow(UInventory* Inventory, int32 Location);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void ShouldOxygenFlowDelayed();
    UFUNCTION(BlueprintCallable) void UpdateFuelDial();
    UFUNCTION(BlueprintCallable) void UpdateOxyDials();
};
