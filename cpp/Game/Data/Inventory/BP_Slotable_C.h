// /Game/Data/Inventory/BP_Slotable.BP_Slotable_C
// Derives from: USlotableComponent > UTraitComponent > UActorComponent > UObject
// size 0x200, a blueprint class, blueprint

UCLASS(EditInlineNew, Config=Engine)
class UBP_Slotable_C : public USlotableComponent
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00D0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle SlotRenderTick;  // 0x00D8, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UStaticMeshComponent* HighlightedVisualizer;  // 0x00E0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString RequiredSocketNameSubstring;  // 0x00E8, size 0x10
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UStaticMeshComponent* LinkedMesh;  // 0x00F8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FVector, FSlotWrapper> SocketMap;  // 0x0100, size 0x50
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) TArray<FVector> SocketStatusKeysReplicated;  // 0x0150, size 0x10
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) TArray<FSlotWrapper> SlotWrapperReplicated;  // 0x0160, size 0x10
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FItemAddedToSlot ItemAddedToSlot;  // 0x0170, size 0x10
    UPROPERTY(EditAnywhere, Replicated, Instanced, BlueprintReadWrite) UInventory* LinkedInventory;  // 0x0180, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UStaticMesh*> StaticmeshHardRefs;  // 0x0188, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<int32, float> SlotFreezeTimer;  // 0x0198, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 SlotCount;  // 0x01E8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<AIcarusItem*> AllAttachedActors;  // 0x01F0, size 0x10

    UFUNCTION(BlueprintCallable) void AddToSlotFromItemData(FVector SocketLocation, FTransform SocketTrans, FItemData ItemData, AIcarusItem*& IcarusItem);  // parameters 0x238
    UFUNCTION(BlueprintCallable) void AsyncClientUpdateSocketStatus();
    UFUNCTION(BlueprintCallable) void AsyncConfigAllVisualizers();
    UFUNCTION(BlueprintCallable) void CanInteract(AIcarusPlayerCharacter* PlayerChar, bool& CanInteract, bool& HitSlotVisualizer, bool& PassedQuery, UStaticMeshComponent*& HitStaticMesh_Component);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void ClientUpdateSocketMapFromArrays();
    UFUNCTION(BlueprintCallable) void ConfigureVisualizerMeshDefaults(UStaticMeshComponent* StaticMeshComponent, UStaticMesh* MeshToUse);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void DoesItemMeetSlotQuery(AIcarusItem* Item, FVector Slot, bool& QueryMet);  // parameters 0x15
    UFUNCTION() void ExecuteUbergraph_BP_Slotable(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FindNearestLookedAtSocket(AIcarusPlayerCharacter* PlayerChar2, bool& HitSlotVisualizer, FVector& ClosestSocketLocation2, AIcarusItem*& MappedItem2, FTransform& ClosestSocketTrans2, FName& ClosestSocketName2, float& ClosestDistance, FSlotWrapper& ClosestSlotWrapper);  // parameters 0x140
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetActorArrayFromSlots(TArray<AIcarusItem*>& AllAttachedActors);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) AIcarusActor* GetActorInSlot(int32 Index);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void GetClosestSocketToLocation(FVector WorldSpaceLocation, FVector& ClosestSocket2, FTransform& ClosestSocketTrans, FName& ClosestSocketName, float& ClosestDistance2, FSlotWrapper& ClosestSlotWrapper);  // parameters 0x140
    UFUNCTION(BlueprintCallable) void InitSockets();
    UFUNCTION(BlueprintCallable) void InventoryLocationToSlotLink(FVector Slot, AIcarusItem* Item);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) void IsComponentAVisualizer(UActorComponent* Component, bool& IsVisualizer);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void ItemAddedToSlot__DelegateSignature(FVector Slot, AIcarusItem* NewItem);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void LookTick();
    UFUNCTION(BlueprintCallable) void OnLoaded_66DA3BA040838D67FF74688CF800B7E9(UObject* Loaded);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnRep_SlotWrapperReplicated();
    UFUNCTION(BlueprintCallable) void OnRep_SocketStatusKeysReplicated();
    UFUNCTION(BlueprintCallable) void PushConfigToInventorySlots();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void ServerUpdateSlotItem(const FVector& Location, const AIcarusItem*& Item);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void ServerUpdateSlotVisualizer(const FVector& Location, UStaticMeshComponent* Socket_Visualizer);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void SlotRenderChange(UHighlightableComponent* Highlightable, UPrimitiveComponent* Component, bool bHighlighted);  // parameters 0x11
    UFUNCTION(BlueprintCallable) void SlotableInteract(AIcarusPlayerCharacter* Instigator, bool& SuccessfullyInteracted);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void UpdateItems();
    UFUNCTION(BlueprintCallable) void itemaddedbind(UInventory* Inventory, int32 Location);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void itemremovebind(UInventory* Inventory, int32 Location);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void itemsupdated();
};
