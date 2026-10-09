// /Script/Icarus.InventoryItemLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/Inventory/InventoryItemLibrary.h

UCLASS()
class UInventoryItemLibrary : public UBlueprintFunctionLibrary
{
public:
    UFUNCTION(BlueprintCallable) static int32 AddContainerActorCapacity(AIcarusActor* Actor, FIcarusResourcesEnum Resource, int32 Units);  // parameters 0x20
    UFUNCTION(BlueprintCallable) static int32 AddContainerItemCapacity(UInventory* Inventory, int32 InventoryLocation, FIcarusResourcesEnum Resource, int32 Units);  // parameters 0x28
    UFUNCTION(BlueprintCallable) static int32 AttemptToFillItemsInInventory(UInventory* Inventory, FIcarusResourcesEnum Type, int32 Units);  // parameters 0x20
    UFUNCTION(BlueprintCallable) static bool CanCombineItems(const FItemData& Item1, const FItemData& Item2, UObject* WorldContextObject);  // parameters 0x3E9
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool CanDropItem(const FItemData& ItemData);  // parameters 0x1F1
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool CanDropItemFromInventory(UInventory* Inventory, int32 ItemLocation);  // parameters 0xD
    UFUNCTION(BlueprintCallable) static bool CanGetReward(AIcarusPlayerCharacter* PlayerCharacter, const FItemRewardEntry& ItemReward);  // parameters 0x91
    UFUNCTION(BlueprintCallable) static bool CanHaveAttachment(const FItemData& ItemData);  // parameters 0x1F1
    UFUNCTION(BlueprintCallable) static void CleanupDestroyedItem(FItemData& ItemData, EItemDestructionContext DestructionContext, AActor* ItemDestructionSource, UObject* WorldContextObject);  // parameters 0x208
    UFUNCTION(BlueprintCallable) static TArray<FFindAllStacksResult> CombineFindAllStackResults(TArray<FFindAllStacksResult>& ResultsA, TArray<FFindAllStacksResult>& ResultsB, UObject* WorldContextObject);  // parameters 0x38
    UFUNCTION(BlueprintCallable) static bool ContainerActorLeak(AIcarusActor* Actor);  // parameters 0x9
    UFUNCTION(BlueprintCallable) static bool ContainerCurrentlyAcceptsType(AIcarusActor* Actor, FIcarusResourcesEnum Type);  // parameters 0x19
    UFUNCTION(BlueprintCallable) static bool ContainerItemLeak(UInventory* Inventory, int32 InventoryLocation);  // parameters 0xD
    UFUNCTION(BlueprintCallable) static FItemData ConvertToItem(const FMetaItem& MetaItem, UObject* WorldContextObject);  // parameters 0x238
    UFUNCTION(BlueprintCallable) static FMetaItem ConvertToMetaItem(const FItemData& Item);  // parameters 0x230
    UFUNCTION(BlueprintCallable) static FItemData CreateCustomItem(const FItemData& ItemData, TArray<FAlterationsEnum> Alterations, TArray<FIcarusStatReplicated> AdditionalStats, UObject* WorldContextObject);  // parameters 0x408
    UFUNCTION(BlueprintCallable) static FItemData CreateItem(const FItemData& ItemData, UObject* WorldContextObject);  // parameters 0x3E8
    UFUNCTION(BlueprintCallable) static bool CreateLinkedInventoryFromInventoryItem(UObject* WorldContextObject, UInventory* Inventory, int32 Slot);  // parameters 0x15
    UFUNCTION(BlueprintCallable) static bool CreateLinkedInventoryFromItemData(UObject* WorldContextObject, FItemData& ItemData);  // parameters 0x1F9
    UFUNCTION(BlueprintCallable) static void DestroyInventoryItemStack(UInventory* Inventory, int32 ItemLocation, AIcarusPlayerController* Player, bool bRefundPartCost);  // parameters 0x19
    UFUNCTION(BlueprintCallable) static void DropInventoryItemStack(UInventory* Inventory, int32 ItemLocation, AIcarusPlayerCharacter* FromPlayer);  // parameters 0x18
    UFUNCTION(BlueprintCallable) static void EmptyContainerActorCapacity(AIcarusActor* Actor, FIcarusResourcesEnum Resource);  // parameters 0x18
    UFUNCTION(BlueprintCallable) static bool Equals(const FItemData& Item1, const FItemData& Item2);  // parameters 0x3E1
    UFUNCTION(BlueprintCallable) static bool EstablishInventoryLink(AIcarusItem* Item, UInventory* Inventory, int32 Location);  // parameters 0x15
    UFUNCTION(BlueprintCallable) static TArray<AIcarusItem*> FilterItems(TArray<AIcarusItem*> Items, FTagQueriesRowHandle Query, bool bInvertQuery, FVector Origin, float MinDistance, float MaxDistance);  // parameters 0x50
    UFUNCTION(BlueprintCallable) static FProcessorRecipesRowHandle FindCraftingRecipe(const FItemsStaticRowHandle& ItemsStaticRowHandle, EDataValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable) static FString FindOrAssignNewID(FItemData& Item);  // parameters 0x200
    UFUNCTION(BlueprintCallable) static FItemData GenerateItemisedRocket(FString Name);  // parameters 0x200
    UFUNCTION(BlueprintCallable) static int32 GenerateRewardStackSize(AIcarusPlayerCharacter* PlayerCharacter, const FItemRewardEntry& ItemReward, float AdditionalMultiplier);  // parameters 0x98
    UFUNCTION(BlueprintCallable) static void GetActionableData(const FItemData& Item, FActionableData& ActionableData, EDataValid& Paths);  // parameters 0x279
    UFUNCTION(BlueprintCallable) static void GetAmmoItem(UObject* WorldContextObject, const FItemData& ItemData, FItemData& Ammo, EDataValid& Paths);  // parameters 0x3E9
    UFUNCTION(BlueprintCallable) static void GetAmmoTypeData(const FItemData& Item, FAmmoTypeData& AmmoTypeData, EDataValid& Paths);  // parameters 0x269
    UFUNCTION(BlueprintCallable) static void GetAnyCookingModifications(AIcarusPlayerCharacter* CraftingActor, const FItemData& Item, TArray<FIcarusStatReplicated>& AdditionalStats);  // parameters 0x208
    UFUNCTION(BlueprintCallable) static void GetArmourData(const FItemData& Item, FArmourData& ArmourData, EDataValid& Paths);  // parameters 0x4F1
    UFUNCTION(BlueprintCallable) static FArmourSetsEnum GetArmourSet(const FItemData& Item);  // parameters 0x200
    UFUNCTION(BlueprintCallable) static void GetAttachmentSlot(UObject* WorldContextObject, const FItemData& ItemData, UInventory*& Inventory, int32& Slot, EDataValid& Paths);  // parameters 0x205
    UFUNCTION(BlueprintCallable) static void GetAttachmentSlotActor(AActor* Item, UInventory*& Inventory, int32& Slot, EDataValid& Paths);  // parameters 0x15
    UFUNCTION(BlueprintCallable) static void GetBallisticData(const FItemData& Item, FBallisticData& BallisiticData, EDataValid& Paths);  // parameters 0x3E1
    UFUNCTION(BlueprintCallable) static void GetBuildableData(const FItemData& Item, FBuildableData& BuildableData, EDataValid& Paths);  // parameters 0x2A9
    UFUNCTION(BlueprintCallable) static void GetBuildingTypePopupStats(const FBuildingTypesRowHandle& BuildingTypeRow, TMap<FStatsEnum, int32>& Stats);  // parameters 0x68
    UFUNCTION(BlueprintCallable) static void GetCombustibleData(const FItemData& Item, FCombustibleData& CombustibleData, EDataValid& Paths);  // parameters 0x231
    UFUNCTION(BlueprintCallable) static void GetConsumableData(const FItemData& Item, FConsumableData& ConsumableData, EDataValid& Paths);  // parameters 0x291
    UFUNCTION(BlueprintCallable) static TArray<FAlterationsEnum> GetCraftingModificationAlterations(AActor* CraftingActor, AActor* CraftingDevice, const FItemData& Item, bool bForPreview);  // parameters 0x218
    UFUNCTION(BlueprintCallable) static void GetDecayableData(const FItemData& Item, FDecayableData& Decayable, EDataValid& Paths);  // parameters 0x231
    UFUNCTION(BlueprintCallable) static void GetDeployableData(const FItemData& Item, FDeployableData& DeployableData, EDataValid& Paths);  // parameters 0x299
    UFUNCTION(BlueprintCallable) static void GetDurableData(const FItemData& Item, FDurableData& DurableData, EDataValid& Paths);  // parameters 0x231
    UFUNCTION(BlueprintCallable) static void GetEnergyData(const FItemData& Item, FEnergyData& EnergyData, EDataValid& Paths);  // parameters 0x251
    UFUNCTION(BlueprintCallable) static void GetEquippableData(const FItemData& Item, FEquippableData& EquippableData, EDataValid& Paths);  // parameters 0x309
    UFUNCTION(BlueprintCallable) static void GetFarmableData(const FItemData& Item, FFarmableData& Farmable, EDataValid& Paths);  // parameters 0x221
    UFUNCTION(BlueprintCallable) static void GetFillableData(const FItemData& Item, FFillableData& FillableData, EDataValid& Paths);  // parameters 0x249
    UFUNCTION(BlueprintCallable) static TArray<FFindItemSlotInfoInvType> GetFillableItems(AIcarusPlayerCharacter* Instigator, const TArray<FIcarusResourcesEnum>& FillableTypes);  // parameters 0x28
    UFUNCTION(BlueprintCallable) static void GetFirearmData(const FItemData& Item, FFirearmData& FirearmData, EDataValid& Paths);  // parameters 0x881
    UFUNCTION(BlueprintCallable) static void GetFloatableData(const FItemData& Item, FFloatableData& FloatableData, EDataValid& Paths);  // parameters 0x249
    UFUNCTION(BlueprintCallable) static void GetFocusableAnimationData(const FItemData& Item, FItemAnimationData& AnimationData, EDataValid& Paths);  // parameters 0x551
    UFUNCTION(BlueprintCallable) static void GetFocusableAttachmentData(const FItemData& Item, FItemAttachmentData& AttachmentData, EDataValid& Paths);  // parameters 0x229
    UFUNCTION(BlueprintCallable) static void GetFocusableData(const FItemData& Item, FFocusableData& FocusableData, EDataValid& Paths);  // parameters 0x3E1
    UFUNCTION(BlueprintCallable) static void GetHeldItemGrantedStats(UObject* WorldContextObject, const FItemData& Item, TMap<FStatsEnum, int32>& Stats);  // parameters 0x248
    UFUNCTION(BlueprintCallable) static void GetHighlightableData(const FItemData& Item, FHighlightableData& HighlightableData, EDataValid& Paths);  // parameters 0x269
    UFUNCTION(BlueprintCallable) static void GetInteractableData(const FItemData& Item, FInteractableData& IntectableData, EDataValid& Paths);  // parameters 0x259
    UFUNCTION(BlueprintCallable) static void GetInventoryContainer(UObject* WorldContextObject, const FItemData& ItemData, UInventory*& Inventory, EDataValid& Paths);  // parameters 0x201
    UFUNCTION(BlueprintCallable) static void GetInventoryContainerActor(AActor* Item, UInventory*& Inventory, EDataValid& Paths);  // parameters 0x11
    UFUNCTION(BlueprintCallable) static void GetInventoryContainerData(const FItemData& Item, FInventoryContainerData& InventoryContainerData, EDataValid& Paths);  // parameters 0x229
    UFUNCTION(BlueprintCallable) static void GetInventoryData(const FItemData& Item, FInventoryData& Inventory, EDataValid& Paths);  // parameters 0x219
    UFUNCTION(BlueprintCallable) static void GetInventoryInfoData(const FItemData& Item, TArray<FInventoryInfo>& InventoryInfos, EDataValid& Paths);  // parameters 0x201
    UFUNCTION(BlueprintCallable) static void GetItemAlterations(UObject* WorldContextObject, const FItemData& Item, TArray<FAlterationsEnum>& Alterations);  // parameters 0x208
    UFUNCTION(BlueprintCallable) static void GetItemAttachment(UObject* WorldContextObject, const FItemData& ItemData, FItemData& Attachment, EDataValid& Paths);  // parameters 0x3E9
    UFUNCTION(BlueprintCallable) static void GetItemAttachmentActor(AActor* Item, FItemData& Attachment, EDataValid& Paths);  // parameters 0x1F9
    UFUNCTION(BlueprintCallable) static void GetItemAttachmentData(const FItemData& Item, FIcarusAttachment& Attachment, EDataValid& Paths);  // parameters 0x221
    UFUNCTION(BlueprintCallable) static FString GetItemID(const FItemData& Item);  // parameters 0x200
    UFUNCTION(BlueprintCallable) static void GetItemPopupStats(UObject* WorldContextObject, const FItemData& Item, TMap<FStatsEnum, int32>& Stats);  // parameters 0x248
    UFUNCTION(BlueprintCallable) static void GetItemProperty(EDynamicItemProperties Property, const FItemData& Item, FItemDynamicData& DynamicData, EDataValid& Paths);  // parameters 0x201
    UFUNCTION(BlueprintCallable) static void GetItemPropertyValue(EDynamicItemProperties Property, const FItemData& Item, int32& IntValue, EDataValid& Paths);  // parameters 0x1FD
    UFUNCTION(BlueprintCallable) static int32 GetItemStackCount(const FItemData& ItemData);  // parameters 0x1F4
    UFUNCTION(BlueprintCallable) static void GetItemStats(UObject* WorldContextObject, const FItemData& Item, TMap<FStatsEnum, int32>& Stats, bool GetVirtual);  // parameters 0x249
    UFUNCTION(BlueprintCallable) static FGameplayTagContainer GetItemTags(const FItemData& Item);  // parameters 0x210
    UFUNCTION(BlueprintCallable) static void GetItemTypes(const FItemData& Item, TArray<EPrimaryItemTypes>& PrimaryTypes, TArray<ESecondaryItemTypes>& SecondaryTypes);  // parameters 0x210
    UFUNCTION(BlueprintCallable) static int32 GetItemWeight(const FItemData& ItemData, AActor* ItemOwner);  // parameters 0x1FC
    UFUNCTION(BlueprintCallable) static void GetItemableData(const FItemData& Item, FItemableData& ItemableData, EDataValid& Paths);  // parameters 0x2E9
    UFUNCTION(BlueprintCallable) static void GetLivingItemData(const FItemData& Item, FLivingItemData& LivingItem, EDataValid& Paths);  // parameters 0x281
    UFUNCTION(BlueprintCallable) static void GetMeshableData(const FItemData& Item, FMeshableData& MeshableData, EDataValid& Paths);  // parameters 0x3C1
    UFUNCTION(BlueprintCallable) static int32 GetModifiedTransmutableUnits(FItemData ItemData, UObject* WorldContextObject);  // parameters 0x1FC
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) static void GetOrCreateInventoryContainer(UObject* WorldContextObject, FItemData& ItemData, UInventory*& Inventory, EDataValid& Paths);  // parameters 0x201
    UFUNCTION(BlueprintCallable) static void GetProcessingData(const FItemData& Item, FProcessingData& ProcessingData, EDataValid& Paths);  // parameters 0x259
    UFUNCTION(BlueprintCallable) static void GetProjectileDamage(UObject* WorldContextObject, const FItemData& Item, AIcarusPlayerCharacter* Player, int32& ProjectileDamage);  // parameters 0x204
    UFUNCTION(BlueprintCallable) static void GetRangedWeaponData(const FItemData& Item, FRangedWeaponData& RangedWeaponData, EDataValid& Paths);  // parameters 0x2C1
    UFUNCTION(BlueprintCallable) static void GetRecipesAndFiltersForRecipeSet(FRecipeSetsRowHandle RecipeSetRowHandle, TArray<FProcessorRecipeResult>& Recipes, TArray<FItemClassificationsIconsRowHandle>& ItemFilters);  // parameters 0x38
    UFUNCTION(BlueprintCallable) static FRefundResult GetRefundResult(const FItemsStaticRowHandle& ItemType, int32 StackSize);  // parameters 0x30
    UFUNCTION(BlueprintCallable) static void GetRocketableData(const FItemData& Item, FRocketableData& Rocketable, EDataValid& Paths);  // parameters 0x281
    UFUNCTION(BlueprintCallable) static void GetSlotableData(const FItemData& Item, FSlotableData& Slotable, EDataValid& Paths);  // parameters 0x241
    UFUNCTION(BlueprintCallable) static int32 GetStat(UObject* WorldContextObject, const FItemData& Item, FStatsEnum Stat);  // parameters 0x20C
    UFUNCTION(BlueprintCallable) static void GetStaticItemData(const FItemData& Item, FItemStaticData& StaticData, EDataValid& Paths);  // parameters 0x679
    UFUNCTION(BlueprintCallable) static void GetToolDamage(const FItemData& Item, FToolDamage& ToolDamageData, EDataValid& Paths);  // parameters 0x231
    UFUNCTION(BlueprintCallable) static void GetTransmutableData(const FItemData& Item, FTransmutableData& Transmutable, EDataValid& Paths);  // parameters 0x241
    UFUNCTION(BlueprintCallable) static void GetTurretData(const FItemData& Item, FTurretData& Turret, EDataValid& Paths);  // parameters 0x2A9
    UFUNCTION(BlueprintCallable) static void GetUsableData(const FItemData& Item, FUsableData& UsableData, EDataValid& Paths);  // parameters 0x221
    UFUNCTION(BlueprintCallable) static void GetWeightData(const FItemData& Item, FWeightData& WeightData, EDataValid& Paths);  // parameters 0x241
    UFUNCTION(BlueprintCallable) static bool HasApplicableResourceCraftingModifications(AActor* CraftingDevice, const FItemData& Item);  // parameters 0x1F9
    UFUNCTION(BlueprintCallable) static bool HasPrimaryItemType(const FItemData& Item, EPrimaryItemTypes ItemType);  // parameters 0x1F2
    UFUNCTION(BlueprintCallable) static bool HasSecondaryItemType(const FItemData& Item, ESecondaryItemTypes ItemType);  // parameters 0x1F2
    UFUNCTION(BlueprintCallable) static bool IsCustomItem(const FItemData& Item, UObject* WorldContextObject);  // parameters 0x1F9
    UFUNCTION(BlueprintCallable) static bool IsSameItem(const FItemData& Item1, const FItemData& Item2, UObject* WorldContextObject);  // parameters 0x3E9
    UFUNCTION(BlueprintCallable) static void ItemDataValid(const FItemData& Item, EDataValid& Paths);  // parameters 0x1F1
    UFUNCTION(BlueprintCallable) static bool ItemMatchesGameplayTagQuery(const FItemData& Item, FGameplayTagQuery Query);  // parameters 0x239
    UFUNCTION(BlueprintCallable) static bool ItemMatchesQuery(const FItemData& Item, FTagQueriesRowHandle Query);  // parameters 0x209
    UFUNCTION(BlueprintCallable) static bool RemoveItemProperty(EDynamicItemProperties Property, FItemData& Item);  // parameters 0x1F9
    UFUNCTION() static void ReplenishItemFillable(FItemData& Item);  // parameters 0x1F0
    UFUNCTION(BlueprintCallable) static void SetItemPropertyValue(EDynamicItemProperties Property, int32 NewValue, FItemData& Item, ESetDataSuccess& Paths);  // parameters 0x1F9
    UFUNCTION(BlueprintCallable) static void SplitInventoryItemStack(UInventory* Inventory, int32 ItemLocation, AIcarusPlayerCharacter* FromPlayer);  // parameters 0x18
    UFUNCTION(BlueprintCallable) static FItemData VerifyItem(FItemData ItemData, UObject* WorldContextObject);  // parameters 0x3E8
};
