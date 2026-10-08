// /Script/Icarus.Deployable
// Derives from: AIcarusItem > AIcarusActor > AActor > UObject
// size 0x5C0, declared in Icarus/Source/Icarus/Objects/Deployable.h

UCLASS(Config=Engine)
class ADeployable : public AIcarusItem, public IDeployableFoundationInterface
{
public:
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) AActor* FoundationActor;  // 0x0580, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadOnly) TArray<ADeployable*> AttachedDeployableActors;  // 0x0588, size 0x10
    UPROPERTY(EditAnywhere) bool bWantsDeployableTick;  // 0x0598, size 0x1
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) UIcarusNavigationDirtier* NavigationDirtier;  // 0x05A0, size 0x8
    UPROPERTY() UDeployableManagerSubsystem* DeployableManager;  // 0x05B8, size 0x8

    // Not reflected: the engine's scripting cannot see these.
    FTimerHandle NextDirtyTimer;  // 0x0578, private
    FOctreeElementId2 OctreeElementId;  // 0x05A8
    bool bRegisteredWithDeployableTick;  // 0x05B0, private

    UFUNCTION(BlueprintNativeEvent) void AttachedDeployableActorsUpdated();
    UFUNCTION(BlueprintCallable) void ConditionalReregisterBiome(const FBiomesRowHandle& Biome);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void DeployableTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Deployable_Interact(AActor* Interactor);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Deployable_StopInteract(AActor* Interactor);  // parameters 0x8
    UFUNCTION(BlueprintNativeEvent) void FoundationActorUpdated();
    UFUNCTION(BlueprintCallable) TArray<ADeployable*> GetAttachedDeployableChildren();  // parameters 0x10
    UFUNCTION(BlueprintCallable) ADeployable* GetAttachedDeployableParent();  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool GetIsInCave() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) UInventoryComponent* GetSlotInventory(EObjectSlotType InventoryType);  // parameters 0x10
    UFUNCTION() void OnRep_AttachedDeployableActors();
    UFUNCTION() void OnRep_FoundationActor();
    UFUNCTION(BlueprintImplementableEvent) void OnRestoreFoundationFromDatabase(AIcarusActor* FoundationFromDatabase);  // parameters 0x8
    UFUNCTION(BlueprintCallable) FSerializedDeployable SerializeForSaveGame(AActor* Origin);  // parameters 0x230
    UFUNCTION(BlueprintCallable) void SetFoundationActor(AActor* NewFoundationActor);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void StartDirtyingDeployableNavigation();
};
