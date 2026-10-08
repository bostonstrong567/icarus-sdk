// /Game/BP/Objects/World/Items/Deployables/BP_ProcessorBase.BP_ProcessorBase_C
// Derives from: ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x980, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_ProcessorBase_C : public ABP_DeployableBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0728, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UAudioOcclusionComponent* AudioOcclusionComponent;  // 0x0730, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* InputOverflow;  // 0x0738, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCameraComponent* Camera;  // 0x0740, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) FItemData ProcessingItem;  // 0x0748, size 0x1F0
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSubclassOf<UUMG_IcarusLinkedActorPanel_C> WidgetClassToOpen;  // 0x0938, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FUpdateOutputItem UpdateOutputItem;  // 0x0940, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HasEnergyComponent;  // 0x0950, size 0x1
    UPROPERTY(EditAnywhere, Replicated, Instanced, BlueprintReadWrite) UInventory* Processor_Inventory;  // 0x0958, size 0x8, named "Processor Inventory"
    UPROPERTY(EditAnywhere, Replicated, Instanced, BlueprintReadWrite) UInventory* FuelInventory;  // 0x0960, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UProcessingComponent* Processing;  // 0x0968, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool DisplayPreviewMesh;  // 0x0970, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool DisplayRecipeMesh;  // 0x0971, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool PreviewSkeletal;  // 0x0972, size 0x1
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UGeneratorComponent* Generator;  // 0x0978, size 0x8

    UFUNCTION(BlueprintCallable) void ActivateAutoCraft(UInventory* Inventory, int32 Location);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Deployable_Interact(AActor* Interactor);  // parameters 0x8
    UFUNCTION() void ExecuteUbergraph_BP_ProcessorBase(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) int32 GetNextUID();  // parameters 0x4
    UFUNCTION(BlueprintCallable, NetMulticast) void Multi_OnCraftedItem(FProcessingItem Item);  // parameters 0x24
    UFUNCTION(BlueprintCallable) void OnProcessingCompleted(FProcessingItem Item);  // parameters 0x24
    UFUNCTION(BlueprintCallable) void OnProcessingObjectChanged(FProcessingItem New_Object);  // parameters 0x24
    UFUNCTION(BlueprintCallable) void OnProcessingStopped(EProcessorStoppedReason Reason);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void OnRep_ProcessingItem();
    UFUNCTION(BlueprintCallable) void OnServer_Interact(AActor* Instigator);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void PlayCraftedItemSound(FProcessingItem Item);  // parameters 0x24
    UFUNCTION(BlueprintCallable) void ProcessingItemChanged();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void UpdateOutputItem__DelegateSignature();
};
