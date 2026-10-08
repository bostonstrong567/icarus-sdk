// /Game/BP/Objects/World/Items/Deployables/Traps/BP_Animal_Trap_Base.BP_Animal_Trap_Base_C
// Derives from: ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x788, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Animal_Trap_Base_C : public ABP_DeployableBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0728, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionLocation_C* BP_UIProjectionLocation;  // 0x0730, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Scene;  // 0x0738, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBoxComponent* CaptureZone;  // 0x0740, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UInventory* InventoryRef;  // 0x0748, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) FAISetupRowHandle Creature;  // 0x0750, size 0x18
    UPROPERTY(EditAnywhere, Replicated, SaveGame, BlueprintReadWrite) int32 Level;  // 0x0768, size 0x4
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool bTrapActive;  // 0x076C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float AttractionRadius;  // 0x0770, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FAISetupRowHandle> ValidCaptureList;  // 0x0778, size 0x10

    UFUNCTION() void BndEvt__BP_AnimalTrap_Base_CaptureZone_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);  // parameters 0xA8
    UFUNCTION(BlueprintCallable, BlueprintPure) void CanCaptureAnimal(UObject* Creature, bool& CanCapture);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void CaptureAnimal(UObject* Object);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Deployable_Interact(AActor* Interactor);  // parameters 0x8
    UFUNCTION() void ExecuteUbergraph_BP_Animal_Trap_Base(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetWidgetClass(TSubclassOf<UUserWidget>& Widget);  // parameters 0x8
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable) void OnRep_bActive();
    UFUNCTION(BlueprintCallable) void ReleaseCreature();
    UFUNCTION(BlueprintCallable) void ToggleTrapActive();
};
