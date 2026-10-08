// /Script/Icarus.IcarusItem
// Derives from: AIcarusActor > AActor > UObject
// size 0x570, declared in Icarus/Source/Icarus/Actors/IcarusItem.h

UCLASS(MinimalAPI, Config=Engine)
class AIcarusItem : public AIcarusActor
{
public:
    UPROPERTY(Instanced) UInventory* ItemInventory;  // 0x02C0, size 0x8
    UPROPERTY() int32 ItemInventoryLocation;  // 0x02C8, size 0x4
    UPROPERTY() bool HasLink;  // 0x02CC, size 0x1
    UPROPERTY(BlueprintAssignable) FPickedUp PickedUp;  // 0x02CD, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TArray<UTraitComponent*> TraitComponents;  // 0x02D0, size 0x10
    UPROPERTY(Replicated, ReplicatedUsing, BlueprintReadWrite) FItemData ItemData;  // 0x02E0, size 0x1F0
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) FIcarusItemConstructionParameters ConstructionParameters;  // 0x04D0, size 0x28
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) EIcarusItemContext SpawnedContext;  // 0x04F8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemTemplateRowHandle OverrideInstanceItemTemplate;  // 0x04FC, size 0x18
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) USmoothSync* SmoothSyncComponent;  // 0x0518, size 0x8
    UPROPERTY(BlueprintReadWrite) bool bSkipAttachmentReplication;  // 0x0520, size 0x1
    UPROPERTY() FTransform ConstructionTransfrom;  // 0x0530, size 0x30
    UPROPERTY(BlueprintAssignable) FDynamicDataUpdatedSignature DynamicDataUpdated;  // 0x0560, size 0x10

    UFUNCTION() void ActionableUpdated();
    UFUNCTION() void DecayableDataUpdated();
    UFUNCTION(BlueprintCallable) void DeserializeItemData(const FItemData& InItemData);  // parameters 0x1F0
    UFUNCTION(BlueprintCallable) void DestroyLink();
    UFUNCTION(BlueprintCallable) void DestroyLinkedInventoryItem();
    UFUNCTION() void DurabilityUpdated();
    UFUNCTION(BlueprintCallable) void EstablishLink(UInventory* Inventory, int32 Location);  // parameters 0xC
    UFUNCTION() void FillableUpdated();
    UFUNCTION() FItemData GetItemData() const;  // parameters 0x1F0
    UFUNCTION() TArray<FItemDynamicData> GetMutableItemDynamicData();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) AIcarusPlayerCharacter* GetOwningIcarusPlayerCharacter() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) UMeshComponent* GetRootMeshComponent() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable) FItemData GetSerialisedItemData();  // parameters 0x1F0
    UFUNCTION(BlueprintCallable) bool HasInventoryItemLink();  // parameters 0x1
    UFUNCTION() void ItemContainerDataUpdated();
    UFUNCTION(BlueprintCallable) bool OnDropped();  // parameters 0x1
    UFUNCTION() void OnDynamicDataUpdated();
    UFUNCTION(BlueprintNativeEvent) void OnItemDataChanged();
    UFUNCTION(BlueprintCallable) bool OnPickedUp(AIcarusItem* Item);  // parameters 0x9
    UFUNCTION() void OnRep_ConstructionParameters();
    UFUNCTION() void OnRep_ItemData();
    UFUNCTION(BlueprintCallable) void OnWorldPickup(UItemableComponent* ItemIn, AActor* Interactor, const FHitResult& HitResult);  // parameters 0x98
    UFUNCTION() void OverwriteInventoryItemDynamicProperty(EDynamicItemProperties Property, int32 Value);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void ReconstructItem(const FIcarusItemConstructionParameters& NewConstructionParameters);  // parameters 0x28
    UFUNCTION(BlueprintCallable) void ResetDecaySpoilTime();
    UFUNCTION(BlueprintCallable) void SerializeItemData(FItemData& OutItemData);  // parameters 0x1F0
    UFUNCTION(BlueprintCallable) bool ServerLoadItemData(FItemTemplateRowHandle ItemTemplate);  // parameters 0x19
    UFUNCTION(BlueprintCallable) void ServerSetItemData(const FItemData& InItemData);  // parameters 0x1F0
    UFUNCTION(BlueprintCallable) bool ServerSetupTraitComponents();  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) void SetItemVisible(bool bVisible);  // parameters 0x1
    UFUNCTION() void StackUpdated();
    UFUNCTION(BlueprintCallable) bool WorldPickup(UItemableComponent* ItemIn, AActor* Interactor, const FHitResult& HitResult);  // parameters 0x99

    // Virtual functions that start here:
    //   CanSupportStreamableRenderAsset, OnItemDataChanged_Implementation, OnRep_ConstructionParameters
    //   OnRep_ItemData, OnWorldPickup, SetItemVisible_Implementation
    //   ShouldSkipAttachmentReplicationByDefault
};
