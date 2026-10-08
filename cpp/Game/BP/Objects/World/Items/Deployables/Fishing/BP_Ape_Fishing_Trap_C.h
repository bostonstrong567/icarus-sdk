// /Game/BP/Objects/World/Items/Deployables/Fishing/BP_Ape_Fishing_Trap.BP_Ape_Fishing_Trap_C
// Derives from: ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x778, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Ape_Fishing_Trap_C : public ABP_DeployableBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0728, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionLocation_C* BP_UIProjectionLocation;  // 0x0730, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlapAudioComponent* OverlapAudio;  // 0x0738, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCameraComponent* Camera;  // 0x0740, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* Fish;  // 0x0748, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_BuoyancyComponent_C* BP_BuoyancyComponent;  // 0x0750, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float InitialTimeToCatch;  // 0x0758, size 0x4
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UInventory* InventoryRef;  // 0x0760, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle Timer;  // 0x0768, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool ShowFish;  // 0x0770, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float OffsetValue;  // 0x0774, size 0x4

    UFUNCTION(BlueprintCallable) void AddToInventory(FItemData Item);  // parameters 0x1F0
    UFUNCTION(BlueprintImplementableEvent) void DeployableTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Deployable_Interact(AActor* Interactor);  // parameters 0x8
    UFUNCTION() void ExecuteUbergraph_BP_Ape_Fishing_Trap(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FishingLureChanged(UInventory* Inventory, int32 Location);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetChanceToCatch(int32& ChanceToCatch);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetTimeToCatch(float& TimeToCatch);  // parameters 0x4
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable) void OnInventoryUpdated(UInventory* Inventory, int32 Location);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void OnRep_ShowFish();
    UFUNCTION(BlueprintCallable) void TimerCatchFish();
    UFUNCTION(BlueprintCallable) void WearLure();
};
