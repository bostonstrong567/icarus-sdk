// /Game/BP/Objects/World/Delivery/BP_Exotic_Transport_Pod.BP_Exotic_Transport_Pod_C
// Derives from: ABP_Transport_Pod_Base_C > ABP_ContainerBase_C > ABP_WorldObject_C > AIcarusActor > AActor > UObject
// size 0x508, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Exotic_Transport_Pod_C : public ABP_Transport_Pod_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x04D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* SkeletalMesh;  // 0x04D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UIcarusMapIconComponent* IcarusMapIcon;  // 0x04E0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FMountSaveData> SuccessfullySpawnedMounts;  // 0x04E8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FMountSaveData> PendingMounts;  // 0x04F8, size 0x10

    UFUNCTION(BlueprintCallable) void AwardExotics();
    UFUNCTION(BlueprintCallable) void CollectCurrency(TArray<FCurrencyToSend>& Currency);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void DelayedReturnedItemWarning();
    UFUNCTION() void ExecuteUbergraph_BP_Exotic_Transport_Pod(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FixMountMovement();
    UFUNCTION(BlueprintCallable) void GrantPodContents();
    UFUNCTION(BlueprintCallable) void IsItemCurrency(FItemData ItemData, bool& IsCurrency) const;  // parameters 0x1F1
    UFUNCTION(BlueprintCallable) void OnItemAddedToInventory(UInventory* Inventory, int32 Location);  // parameters 0xC
    UFUNCTION(BlueprintCallable, Client, Reliable) void OnMountSpawningComplete(TArray<FMountSaveData>& SuccessfullySpawnedMounts);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnPodAscended();
    UFUNCTION(BlueprintCallable) void OnPodLanded();
    UFUNCTION(BlueprintCallable) void OnTakeOff();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void ReturnEquipment();
    UFUNCTION(BlueprintCallable) void SpawnNextMount();
    UFUNCTION(BlueprintCallable) void WorldObject_Interact(AActor* Instigator);  // parameters 0x8
};
