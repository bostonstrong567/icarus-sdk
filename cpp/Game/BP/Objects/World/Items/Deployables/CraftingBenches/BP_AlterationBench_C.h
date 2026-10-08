// /Game/BP/Objects/World/Items/Deployables/CraftingBenches/BP_AlterationBench.BP_AlterationBench_C
// Derives from: ABP_ProcessorBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0xBC8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_AlterationBench_C : public ABP_ProcessorBase_C, public IBPI_GenericAction_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0980, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* ProxyMeshesCrafting;  // 0x0988, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* ProxyMeshesInventory;  // 0x0990, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* AlterationProcessingAudio;  // 0x0998, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* StaticMesh1;  // 0x09A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* StaticMesh;  // 0x09A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemData CurrentItem;  // 0x09B0, size 0x1F0
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool InUse;  // 0x0BA0, size 0x1
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) float AlterTime;  // 0x0BA4, size 0x4
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) float AlterProgress;  // 0x0BA8, size 0x4
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) float MaxTime;  // 0x0BAC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* ItemAlteredSound;  // 0x0BB0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* ItemUnalteredSound;  // 0x0BB8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusPlayerCharacter* UsingCharacter;  // 0x0BC0, size 0x8

    UFUNCTION(BlueprintCallable) void AlterItem();
    UFUNCTION(BlueprintCallable) void AlterationSlotUpdated(UInventory* Inventory, int32 Location);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Deployable_Interact(AActor* Interactor);  // parameters 0x8
    UFUNCTION() void ExecuteUbergraph_BP_AlterationBench(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GenericAction();
    UFUNCTION(BlueprintCallable) void GenericActionWithCharacter(AIcarusPlayerCharacter* Character);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void GeneticActionInt(int32 Data);  // parameters 0x4
    UFUNCTION(BlueprintCallable, NetMulticast) void MULTI_OnAlteredItem();
    UFUNCTION(BlueprintCallable, NetMulticast) void MULTI_OnRemovedItemAlteration();
    UFUNCTION(BlueprintCallable, BlueprintPure) void ModifyAlterTime(float AlterTickTime, float& ModifiedAlterTickTime);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnRep_InUse();
    UFUNCTION(BlueprintCallable, Server) void OnServer_PerformAction();
    UFUNCTION(BlueprintCallable) void PlayItemAlteredSound();
    UFUNCTION(BlueprintCallable) void PlayItemUnalteredSound();
    UFUNCTION(BlueprintCallable) void PlaySoundWithParams(UFMODEvent* FMODEvent, FVector Location);  // parameters 0x14
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void RemoveItem();
    UFUNCTION(BlueprintCallable) void SetInUseAudioState(bool Active);  // parameters 0x1
};
