// /Game/BP/Objects/World/Items/Deployables/Fishing/BP_Fish_Wall_Mount.BP_Fish_Wall_Mount_C
// Derives from: ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x938, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Fish_Wall_Mount_C : public ABP_DeployableBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0728, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCameraComponent* Camera;  // 0x0730, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UWidgetComponent* Widget;  // 0x0738, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* SK_Fish;  // 0x0740, size 0x8, named "SK Fish"
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) FItemData FishData;  // 0x0748, size 0x1F0

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Deployable_Interact(AActor* Interactor);  // parameters 0x8
    UFUNCTION() void ExecuteUbergraph_BP_Fish_Wall_Mount(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetWidgetClass(TSubclassOf<UUserWidget>& Widget);  // parameters 0x8
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable) void InventoryUpdated(UInventory* Inventory, int32 Location);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void OnLoaded_4FB440D14FD9CA169367709C4DB6E61C(UObject* Loaded);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnRep_FishData();
    UFUNCTION(BlueprintCallable) void UpdateFish();
};
