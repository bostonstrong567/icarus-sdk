// /Game/BP/Objects/World/Items/Deployables/Beehive/BP_Beehive.BP_Beehive_C
// Derives from: ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x810, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Beehive_C : public ABP_DeployableBase_C, public IInventoryModerator
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0728, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_Beehive_Processing;  // 0x0730, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionLocation_C* BP_UIProjectionLocation;  // 0x0738, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* BeeBreedAudioLocation;  // 0x0740, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* HoneyExtractorAudioLocation;  // 0x0748, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* BeesHiveLoopAudio;  // 0x0750, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCameraComponent* Camera;  // 0x0758, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Expansion2;  // 0x0760, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Extractor;  // 0x0768, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* BreedingCenter;  // 0x0770, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Expansion1;  // 0x0778, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, SaveGame, BlueprintReadWrite) bool Installed_Expansion;  // 0x0780, size 0x1
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, SaveGame, BlueprintReadWrite) bool Installed_Expansion2;  // 0x0781, size 0x1
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, SaveGame, BlueprintReadWrite) bool Installed_Extractor;  // 0x0782, size 0x1
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, SaveGame, BlueprintReadWrite) bool Installed_Breeding;  // 0x0783, size 0x1
    UPROPERTY(EditAnywhere, Replicated, SaveGame, BlueprintReadWrite) float Honeycomb_CurrentTime;  // 0x0784, size 0x4
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) float Honeycomb_MaxTime;  // 0x0788, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemTemplateRowHandle Honeycomb;  // 0x078C, size 0x18
    UPROPERTY(EditAnywhere, Replicated, SaveGame, BlueprintReadWrite) float Extraction_CurrentTime;  // 0x07A4, size 0x4
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) float Extraction_MaxTime;  // 0x07A8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemTemplateRowHandle Honey;  // 0x07AC, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemTemplateRowHandle Beeswax;  // 0x07C4, size 0x18
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) float Breeding_MaxTime;  // 0x07DC, size 0x4
    UPROPERTY(EditAnywhere, Replicated, SaveGame, BlueprintReadWrite) float Breeding_CurrentTime;  // 0x07E0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemTemplateRowHandle Worker_Bee;  // 0x07E4, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool CachedInstalledExpansion;  // 0x07FC, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool CachedInstalledExpansion2;  // 0x07FD, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 AuraUID;  // 0x0800, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool CachedBeehiveState;  // 0x0804, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusCharacter* InteractPlayer;  // 0x0808, size 0x8

    UFUNCTION(BlueprintCallable) void Add_Expansion(FItemData Item, AIcarusPlayerCharacter* Player, bool& Success);  // parameters 0x1F9, named "Add Expansion"
    UFUNCTION(BlueprintCallable) void CanInstallExpansion(FItemData Item, bool& Success);  // parameters 0x1F1
    UFUNCTION(BlueprintCallable) void CheckForFullyUpgraded();
    UFUNCTION(BlueprintCallable) void CheckWantsPower();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Deployable_Interact(AActor* Interactor);  // parameters 0x8
    UFUNCTION() void ExecuteUbergraph_BP_Beehive(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FindFirstHoneycombInInventory(bool& Found, UInventory*& Inventory, int32& Slot);  // parameters 0x14
    UFUNCTION(BlueprintCallable) void GenerateItem(FItemTemplateRowHandle RowHandle, FInventoryIDEnum InventoryID);  // parameters 0x28
    UFUNCTION(BlueprintCallable) void GeneratorStateUpdate(bool Active);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void GetUpgradeStats(int32 Slot, TMap<FBaseStatsEnum, int32>& Additional_Stats);  // parameters 0x58
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable) void InventoryUpdated(UInventory* Inventory, int32 Location);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool IsSlotValidForItem(UInventoryComponent* Inventory, FInventoryIDEnum InventoryID, FItemData Item, int32 SlotIndex) const;  // parameters 0x20D
    UFUNCTION(BlueprintCallable, NetMulticast) void MULTI_Bee_Breed_Audio();  // named "MULTI Bee Breed Audio"
    UFUNCTION(BlueprintCallable, NetMulticast) void MULTI_Play_Honey_Crafted();  // named "MULTI_Play Honey Crafted"
    UFUNCTION(BlueprintCallable, NetMulticast) void MULTI_Play_Honeycome_Crafted();  // named "MULTI_Play Honeycome Crafted"
    UFUNCTION(BlueprintCallable) void OnHighlightChanged(UHighlightableComponent* Highlightable, UPrimitiveComponent* Component, bool bHighlighted);  // parameters 0x11
    UFUNCTION(BlueprintCallable) void OnInventoryItemChanged(UInventory* Inventory, int32 Location);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void OnRep_GeneratorActiveREP();
    UFUNCTION(BlueprintCallable) void OnRep_Installed_Breeding();
    UFUNCTION(BlueprintCallable) void OnRep_Installed_Expansion();
    UFUNCTION(BlueprintCallable) void OnRep_Installed_Expansion2();
    UFUNCTION(BlueprintCallable) void OnRep_Installed_Extractor();
    UFUNCTION(BlueprintCallable) void ProcessorStateUpdate(bool Active);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool StripItemTags(UInventoryComponent* Inventory, FInventoryIDEnum InventoryID, FItemData Item, int32 SlotIndex, FGameplayTagContainer& ItemTags) const;  // parameters 0x231
    UFUNCTION(BlueprintCallable) void TickExtractor(float DeltaTime);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void UpdateExpansions();
};
