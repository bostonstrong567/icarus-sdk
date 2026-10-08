// /Game/BP/Objects/World/Items/Deployables/MissionCommunication/BP_Exotic_Delivery_Interface.BP_Exotic_Delivery_Interface_C
// Derives from: ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x771, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Exotic_Delivery_Interface_C : public ABP_DeployableBase_C, public IBPI_GenericAction_C, public IBPI_LinkedActorInventoryRedirector_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0728, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* FMODAudio_Analyzer;  // 0x0730, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCameraComponent* Camera;  // 0x0738, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_Exotic_Transport_Pod_C* SpawnedTransportPod;  // 0x0740, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FItemData> PendingDropshipItems;  // 0x0748, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool WaitingForPod;  // 0x0758, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool WaitingForContents;  // 0x0759, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FMountSaveData> PendingMounts;  // 0x0760, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsStandardOEI;  // 0x0770, size 0x1

    UFUNCTION(BlueprintCallable) void CheckSpawnNewPod();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Deployable_Interact(AActor* Interactor);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void DropPodLeft();
    UFUNCTION() void ExecuteUbergraph_BP_Exotic_Delivery_Interface(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Generate_Spawn_Pod_Location(ABP_Transport_Pod_Base_C* TransportPod);  // parameters 0x8, named "Generate Spawn Pod Location"
    UFUNCTION(BlueprintCallable) void GenericAction();
    UFUNCTION(BlueprintCallable) void GenericActionWithCharacter(AIcarusPlayerCharacter* Character);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void GeneticActionInt(int32 Data);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetRedirectedInventoryComponent(UInventoryComponent*& InventoryComponent);  // parameters 0x8
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable) void OnReceivedPlayerLoadoutExtension(const TArray<FItemData>& Items, const TArray<FMountSaveData>& Mounts);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void SpawnNewPod();
};
