// /Script/Icarus.ProcessingComponent
// Derives from: UTraitComponent > UActorComponent > UObject
// size 0x460, declared in Icarus/Source/Icarus/Traits/ProcessingComponent.h

UCLASS(EditInlineNew, Config=Engine)
class UProcessingComponent : public UTraitComponent, public IResourceInteractionInterface, public IDynamicResourceFlowSource
{
public:
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) TArray<FProcessingItem> ProcessingQueue;  // 0x00E0, size 0x10
    UPROPERTY(BlueprintAssignable) FProcessorStateUpdated OnProcessorStateUpdated;  // 0x01A6, size 0x1
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UInventory* Inventory;  // 0x01A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AResourceDeposit* LinkedResource;  // 0x01B0, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) float ProcessingProgress;  // 0x01B8, size 0x4
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool bProcessorActive;  // 0x01BC, size 0x1
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) FProcessingItem ProcessingItem;  // 0x01C0, size 0x24
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) FRecipeSet RecipeSetOverride;  // 0x03D8, size 0x78
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MillijoulesProcessed;  // 0x0450, size 0x4
    UPROPERTY(BlueprintAssignable) FForceStop OnProcessingStopped;  // 0x0454, size 0x1
    UPROPERTY(BlueprintAssignable) FProcessingItemUpdated OnProcessingItemUpdated;  // 0x0455, size 0x1
    UPROPERTY(BlueprintAssignable) FProcessingItemCompleted OnProcessingItemCompleted;  // 0x0456, size 0x1

    // Not reflected: the engine's scripting cannot see these.
    bool bBlockInventoryEvents;  // 0x00F0, protected
    TMap<FItemsStaticRowHandle,TArray<FProcessorRecipesRowHandle,TSizedDefaultAllocator<32> >,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FItemsStaticRowHandle,TArray<FProcessorRecipesRowHandle,TSizedDefaultAllocator<32> >,0> > ItemToRecipesMap;  // 0x00F8, protected
    TMap<FTagQueriesRowHandle,TArray<FProcessorRecipesRowHandle,TSizedDefaultAllocator<32> >,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTagQueriesRowHandle,TArray<FProcessorRecipesRowHandle,TSizedDefaultAllocator<32> >,0> > QueryToRecipesMap;  // 0x0148, protected
    FTimerHandle RestartAutoProcessingDelayTimer;  // 0x0198, protected
    float RestartAutoProcessingDelay;  // 0x01A0, protected
    bool bWantsProcessThisFrame;  // 0x01A4, protected
    bool bWaterFlowRegistered;  // 0x01A5, protected
    FItemData TargetContainer;  // 0x01E8
    float PartialMillijoulesProcessed;  // 0x0458, private

    UFUNCTION(BlueprintCallable) void AddItem(FItemData Item) const;  // parameters 0x1F0
    UFUNCTION(BlueprintCallable) bool CanProcess();  // parameters 0x1
    UFUNCTION(BlueprintCallable) bool CanQueueItem(FProcessingItem RecipeToQueue, TArray<UInventory*> AdditionalInventories);  // parameters 0x39
    UFUNCTION(BlueprintCallable) bool CanSatisfyRecipeInput(FCraftingInput Input, int32 Multiplier, TArray<UInventory*> AdditionalInventories, int32& CurrentAmount);  // parameters 0x35
    UFUNCTION(BlueprintCallable) bool CanSatisfyRecipeQueryInput(FQueryInput Input, int32 Multiplier, TArray<UInventory*> AdditionalInventories, int32& CurrentAmount);  // parameters 0x35
    UFUNCTION(BlueprintCallable) bool CanStartProcessing();  // parameters 0x1
    UFUNCTION(BlueprintCallable) AIcarusPlayerCharacter* GetCraftingPlayer();  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetCurrentProcessingItemCraftingSpeedMultiplier() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable) int32 GetMaxCraftableStack(FProcessorRecipesRowHandle Recipe, TArray<UInventory*> AdditionalInventories, AIcarusPlayerCharacter* CraftingPlayer);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetProcessingData(FProcessingData& OutData) const;  // parameters 0x69
    UFUNCTION(BlueprintCallable, BlueprintPure) TArray<FProcessingItem> GetProcessingQueue();  // parameters 0x10
    UFUNCTION(BlueprintCallable) FRecipeSet GetRecipeSet();  // parameters 0x78
    UFUNCTION(BlueprintCallable) FRecipeSetsRowHandle GetRecipeSetRow();  // parameters 0x18
    UFUNCTION(BlueprintCallable) int32 GetResourceRecipeValidity(FIcarusResourcesEnum ResourceType, int32 RequiredAmount, TArray<UInventory*> AdditionalInventories);  // parameters 0x2C
    UFUNCTION(BlueprintCallable) bool HasSufficientResource(FIcarusResourcesEnum ResourceType, int32 RequiredAmount, int32 RecipeCost, TArray<UInventory*> AdditionalInventories);  // parameters 0x29
    UFUNCTION(BlueprintCallable) bool HasWaterSourceConnection(bool bMustBeActiveConnection);  // parameters 0x2
    UFUNCTION(BlueprintCallable) void Initialise(UInventory* ProcessorInventory);  // parameters 0x8
    UFUNCTION() void OnRep_ProcessingItem();
    UFUNCTION() void OnRep_ProcessorActive();
    UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent) void OnServerStopAndClear(AIcarusPlayerCharacter* LeavingPlayer);  // parameters 0x8
    UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent) void OnServerStopProcessing(AIcarusPlayerCharacter* LeavingPlayer);  // parameters 0x8
    UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent) void OnServer_ActivateProcessor();
    UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent) void OnServer_AddProcessingRecipe(FProcessorRecipesRowHandle Recipe, int32 Count, TArray<UInventory*> AdditionalInventories, AIcarusPlayerCharacter* Player);  // parameters 0x38
    UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent) void OnServer_RemoveProcessingRecipe(int32 Location);  // parameters 0x4
    UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent) void OnServer_SetResourceNode(AResourceDeposit* ResourceNode);  // parameters 0x8
    UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent) void OnServer_StartProcessing();
    UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent) void OnServer_StopCurrentRecipe();
    UFUNCTION(BlueprintCallable) void Process(float Delta);  // parameters 0x4
    UFUNCTION() void ProcessingInventoryItemAdded(UInventory* Inventory, int32 Location);  // parameters 0xC
    UFUNCTION() void ProcessingInventoryItemRemoved(UInventory* Inventory, int32 Location);  // parameters 0xC
    UFUNCTION() void RestartAutoProcessing();
    UFUNCTION(BlueprintCallable) bool ShelterRequirementsMet(AIcarusPlayerCharacter* CraftingPlayer, EProcessorPurpose Purpose);  // parameters 0xA

    // Virtual functions that start here:
    //   OnServer_SetResourceNode_Implementation
};
